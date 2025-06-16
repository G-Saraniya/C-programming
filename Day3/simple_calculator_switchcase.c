#include <stdio.h>

int main()
{
    int a,b;
    char ch;
    while(1){
        printf("enter the value of a, operator and b");
        scanf("%d %c %d",&a,&ch,&b);
        switch(ch){
            case '+':
            printf("the addition is  %d\n",a+b );
            break;
            case '-':
            printf("the subtraction is %d\n",a-b);
            break;   
        }   
    }
    return 0;
}
