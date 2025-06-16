#include<stdio.h>
int num;
int main(){
    printf("Enter the limit : ");
    scanf("%d",&num);

    for(int i=0;i<=num;i++){
        if(i%2==0){
            printf("%d is EVEN NUMBER\n",i);
        }else {
            printf("%d is ODD NUMBER\n",i);
        }
    }
    return 0;
}
