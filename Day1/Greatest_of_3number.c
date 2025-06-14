#include <stdio.h>
int a,b,c;
int main()
{
    printf(" Enter the three numbers \n");
    scanf("%d %d %d" ,&a,&b,&c);

    if(a>b && a>c){
        printf("1st number is greater ",a);
    }
    else if(b>a && b>c)
    {
        printf("2nd number is greater ",b);
    }
    else{
        printf("3rd number is greater ",c);
    }
