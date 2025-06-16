#include<stdio.h>
int num;
int main(){
    printf("Enter the limit : ");
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
        if((i&1)==0){
            printf("%d Even\n",i);
        }
        else{
            printf("%d ODD\n",i);
        }
    }
}
