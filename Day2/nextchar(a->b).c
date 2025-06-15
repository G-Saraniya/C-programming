#include <stdio.h>
char value;
int main (){
    
    printf("Enter the character : ");
    scanf("%c", &value);
    
    if(value =='z'){
        printf(" the character : %c " ,'a');
        
    }
    if(value =='Z'){
        printf(" the character : %c", 'A');
    }
    
    if(value>=65 && value<=89 || value>=97 && value<=121){
        char a = value + 1;
        printf("the value : %c",a);
        
    }
}
