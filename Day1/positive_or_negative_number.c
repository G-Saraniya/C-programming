#include<stdio.h>
int a;
int main(){
    printf("Enter the number \n");
    scanf("%d",&a);

    if(a>0){
        printf("positive number");
    }
    else if(a==0){
        printf("zero");
    }
    else{
        printf("negative number");
    }

}
