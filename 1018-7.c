#include<stdio.h>

int main(void){
    int input,a=2;
    scanf("%d",&input);
    for(;a<input;a++){
        if(input%a==0){
            printf("%s","NO");
            break;
        }
        else if(input%a==0 && a==input)
         printf("%s","YES");
        
    }




}