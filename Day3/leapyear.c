#include<stdio.h>

int main(){
    int array[]= {1900,2000,2020,2021,2023,2024,2025,2025,2026,2027,2028,2029,2030};
    
    for(int i=0; i<=10;i++){
        int year =array[i];
        if((year%4==0 && year%100!=0 )|| year%400==0 ){
            printf("leap year : %d \n", array[i]);
        }
    }
}
