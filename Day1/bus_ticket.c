#include <stdio.h>

int age;
char gender ='m' || 'f';
int main(){
    printf("enter gender : ",gender);
    scanf("%c",&gender);
    printf("enter age : ",age);
    scanf("%d",&age);


    if(age>=18 && age <=100 || gender=='f'){
        printf("ticket is free");
    }
    else if(age < 18 && age >0 || gender == 'm'){
        printf("ticket is charged");
    }

}
