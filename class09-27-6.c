#include <stdio.h>


int main(void){
int input1 ;
int input2 ;
printf("%s","身高(cm)");
scanf("%d",&input1);
printf("%s","體重(kg)");
scanf("%d",&input2);
printf("%s","身高(英吋)");
printf("%f\n",(float)input1/2.54 );
printf("%s","體重(磅)");
printf("%f\n",(float)input2/0.454 );



}