#include<stdio.h>

int main(void){

int input1;
scanf("%d",&input1);
if(input1%4 == 0 && input1%400==0){
 
  printf("%s","閏年");
 }

else if(input1%4==0 && input1<100){
 printf("%s","閏年");

}
else if(input1%4 ==1 ){
    printf("%s\n","平年");
    printf("%s%d%s%d%s","離",input1,"最近的閏年是 ", input1-1," 年");

}
else if(input1%4 ==2){
    printf("%s\n","平年");
    printf("%s%d%s%d%s%d%s","離",input1,"最近的閏年是 ", input1+2," 年 ",input1-2," 年");

}
else if(input1%4 ==3){
    printf("%s\n","平年");
    if((input1+1)%400==0 ){
    printf("%s%d%s%d%s","離",input1,"最近的閏年是 ", input1+1," 年");}
    else if((input1+1)%100==0 ){
        printf("%s%d%s%d%s","離",input1,"最近的閏年是 ", input1-3," 年");}
    else if(input1%4==3 ){
        printf("%s%d%s%d%s","離",input1,"最近的閏年是 ", input1+1," 年");}
    }
        
        
        
    
}


