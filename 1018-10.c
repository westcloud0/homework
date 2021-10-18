#include<stdio.h>

int main (void){
    int input;
    scanf("%d",&input);
    char data[]="00000000";
    for(int i=0;i<8;i++){
        data[7-i]=(char)input%2+48;
        printf("%d\t",i);
        printf("%d\n",input%2);
        input=input/2;

    }
    printf("%s",data);



















}