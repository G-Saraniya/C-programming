#include<stdio.h>
int day;
int main(){
    printf("Enter the number : ");
    scanf("%d",&day);
    switch(day) {
        case 1:
            printf("Sunday");
            break;
        
        case 2:
            printf("Monday");
            break;

        case 3:
            printf("Tuesday");
            break;

        case 4:
            printf("Wednesday");
            break;

        case 5:
            printf("Thursday");
            break;

        case 6:
            printf("Friday");
            break;

        case 7:
            printf("Saturday");
            break;

        default :
            printf("type valid number(1-7)");
            break;
    }
    return 0;
}
