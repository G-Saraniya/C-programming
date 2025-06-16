#include<stdio.h>
int a,b,c;
int main(){
    printf("Enter the first side : ");
    scanf("%d",&a);
    printf("Enter the second side : ");
    scanf("%d",&b);
    printf("Enter the third side : ");
    scanf("%d",&c);

    if(a==b && b==c){
        printf("it is an equilateral triangle");
    }
    else if(a+b>c){
        printf("it is a right angle triangle");
    }
    else{
        printf("triangle is not possible");
    }
    return 0;
}
