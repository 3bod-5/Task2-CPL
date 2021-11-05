#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours,minuts,second;
    printf("enter your time in second : ");
    scanf("%d",&second);
    hours=second/3600;
    minuts=(second-(3600*hours))/60;
    second=(second-(3600*hours)-(60*minuts));
    printf("hours:%d\nminuts:%d\nsecond:%d\n",hours,minuts,second);
    system("pause");
    return 0;
}
