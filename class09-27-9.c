#include <stdio.h>


int main(void){
int input1 ;
int input2 ;
int input3 ;
int input4 ;
int input5 ;

printf("%s","輸入一個四位數");
scanf("%d",&input1);
printf("%s","得到的密碼");

input2 = (input1/1000+7)%10;
input3 = (input1/100+7)%10;
input4 = (input1/10+7)%10;
input5 = (input1+7)%10;

printf("%d",input4);
printf("%d",input5);
printf("%d",input2);
printf("%d",input3);











}