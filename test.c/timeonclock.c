#include<stdio.h>
void time(int,char[]);
main()
{
    int itime,ch[2];
    printf("enter time on clock\n");
    scanf("%d",&itime);
    printf("AM or PM ?\n");
    scanf("%s",ch);
    printf("initial time is \n%d:%s\n",itime,ch);
    time(itime,ch);
}
void time(int ftime,char ch[2])
{
    int n,i;
    printf("enter hours to add in initital time\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        if(ftime<12)
        {
            ftime=ftime+1;
        }else
        {
            if(strcmp(ch,"AM")==0)
            {
            strcpy(ch,"PM");
            ftime=0;
            ftime=ftime+1;
            }else if(strcmp(ch,"PM")==0)
            {
            strcpy(ch,"AM");
            ftime=0;
            ftime=ftime+1;
            }
        }
    }
    printf("final time is \n%d:%s",ftime,ch);
}
