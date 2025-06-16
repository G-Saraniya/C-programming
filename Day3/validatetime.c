#include<stdio.h>
int hour,minute;
int main(){
    printf("Enter the time as (HH:MM) : ");
    scanf("%d:%d",&hour,&minute);
    if(hour<0||hour>23||minute<0||minute>59){
        printf("invalid");
    }
    else{
        printf("valid");
    }
    return 0;
}
