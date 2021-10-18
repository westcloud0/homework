#include<stdio.h>

int main(void){

    int input,a=0,b=0;
    scanf("%d",&input);

    for(;a<=input;){
        if(a%3==0){
            b=b+a;
            
        }
        a=a+1;


    }
    printf("%d\n",b);
}