#include <stdio.h>

int main()
{
    int n;
    printf("ENTER THE VALUE OF n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%3==0 && i%5==0){
            printf("fizzbuzz");
        }
        else if(i%5==0){
            printf("buzz\n");
        }
        else if(i%3==0){
            printf("fizz\n");
        } 
        else{
            printf("%d\n",i);
        } 
    }
    return 0;
}
