#include<stdio.h>

int main(void){
    int input=0,a=0,b=0,c=1;
    scanf("%d",&input);
    while(input>=10){
        a=input%10;
        input=input/10;
 
        b=b+a;
        c++;
    }
    printf("%d\n",c);
    printf("%d\n",b+input);
















}