#include<stdio.h>

int main (void){
    int input1,input2,a=0,b=0,c=0,d=0,e=0;
    scanf("%d%d",&input1,&input2);
    if(input1>input2){
        a=input1;
        b=input2;
        d=input1;
        e=input2;
    }

    else{
        a=input2;
        b=input1;
        d=input2;
        e=input1;
    }
    while(a%b!=0){
        c=a%b;
        a=b;
        b=c;
       


    }
    if(input1==input2){
        c=input1;
    }
    printf("%d\n",c);
    printf("%d\n",input1*input2/c);

    















}