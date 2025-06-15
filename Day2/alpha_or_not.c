#include<stdio.h>
char val=1;
int main(){
    printf("%d %d %d %d",'a','z','A','Z');
    if(val>=65 && val<=90 || val>=97 && val<=122)
    {
        printf("Alphabet");
    }
    else{
        printf("\not an alphabet");
    }
    return 0;
}
