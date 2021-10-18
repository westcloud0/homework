#include<stdio.h>

int main (void){

    int input,a=1;
    double b=0,c=0;
    scanf("%d",&input);
    for(;a<=input;a++){
        b += (double)1/((2*a-1)*(2*a));
    
    

    }
    printf("%.16lf",b);









}