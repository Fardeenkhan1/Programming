#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<bits/stdc++.h>
using namespace std;
struct Point
{
	int x,y;
};

int orientation(Point p, Point q, Point r)
{
	int m1 = (q.y - p.y)/(q.x - p.x);
	int m2 = (r.y - q.y)/(r.x - q.x);
	int val = m1 - m2;
	if(val == 0)
		return 0;
	return(val>0)?1:2;
}

void convexHull(Point points[],int n)
{
	if(n<3)
		return;
	//vector<Point> hull;
	try
	{
		//vector<Point> hull;
		Point aux[n];
		int l = 0;
		for(int i = 1 ; i < n ; i++)
			if(points[i].x < points[l].x)
				l = i;

		int p = l,q,top=0;
		do
		{
			aux[top] = points[p];
			top++;
			q = (p+1)%n;
			for(int i = 0 ; i < n ; i++)
			{
				int a = orientation(points[p], points[i], points[q]);
				if(a == 2)
					q = i;
			}
			p = q;

		}while( p != l);

		for(int i = 0 ; i < n; i++)
			cout << "("<<aux[i].x<<","<<aux[i].y<<")\n";
		}
	catch(bad_alloc & ba)
	{
		cerr<<"bad_alloc caught:"<<ba.what();
	}
}

int main()
{
	Point points[] = {{0,3}, {2,2}, {1,1}, {2,1}, {3,0}, {0,0}, {3,3}};
	int n = sizeof(points)/sizeof(points[0]);
	convexHull(points,n);
	return 0;
}
