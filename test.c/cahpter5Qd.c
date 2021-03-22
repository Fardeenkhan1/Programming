#include<stdlib.h>
void clrscr()
{
    system("@cls||clear");
}
#include<stdio.h>
main()
{
    int i=0;
 while(i!=256)
 {
     printf("%c  ",i);
     i++;
 }
}
