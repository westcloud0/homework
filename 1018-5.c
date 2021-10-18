#include<stdio.h>

int main(void){

    int input,a=1,b=1,c=0;
    scanf("%d",&input);
    for(;a<=input;a++){
        
        b=a*(a+1);
        b=b+c;
        c=b;
       

    }
    printf("%d\n",b); 

}