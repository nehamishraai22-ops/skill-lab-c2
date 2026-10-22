#include<stdio.h>
int main()
{
    int day;
    printf("enter day 1-3:");
    scanf("%d",&day);
   // printf("%d",day);
    switch(day)
    {
    case 1:
    printf("monday\n");
    break;
    case 2:
    printf("tuesday\n");
    break;
    case 3:
    printf("wednesday\n");
    break;
    default:
    printf("invalid days");
    return 0;
    }

}