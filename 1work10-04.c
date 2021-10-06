#include<stdio.h>

int main(void){

int input1,input2;
scanf("%d%d",&input1,&input2);
if(input1*input1 +input2*input2>10000){
  printf("%s\n","outside");
}
 else if(input1 == 100 && input2 == 0){
 printf("%s\n","inside");
 }
  else if(input2 == 100 && input1 == 0){
 printf("%s\n","inside");
 }
  else if(input1*input1 +input2*input2<10000){
 printf("%s\n","inside");
 }
}
