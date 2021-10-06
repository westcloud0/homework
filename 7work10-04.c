#include<stdio.h>

int main(void){

int input1,input2,input3;
scanf("%d%d%d",&input1,&input2,&input3);
if(input1>input2 || input2>input3 || input1 > input3){
    
     printf("%s","False");}


else if(input1 + input2 > input3){
    printf("%s","True");

}
else if(input1 + input2 <= input3){
    printf("%s","False");

}
}