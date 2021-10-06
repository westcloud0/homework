#include<stdio.h>

int main(void){

int input1,input2,input3,input4;
printf("%s\n","年齡:");
scanf("%d",&input1);
if(input1>30){
    printf("%s\n","不見");
}
else if(input1<=30){
	printf("%s\n","長相 (0: 醜, 1: 帥, 2: 中等):");
    scanf("%d",&input2);
        if(input2 == 0){
        	printf("%s\n","不見");}
        else if( input2 == 1 || input2 == 2){
            printf("%s\n","收入 (0: 低, 1: 中, 2: 高):");
            scanf("%d",&input3);
            	if(input3==0){
                	printf("%s\n","不見");}
                else if(input3 ==2 ){
                    printf("%s\n","見"); }
                else if(input3 ==1 ){
                    printf("%s\n","是否為公務員 (0: 否, 1: 是):");     
                    scanf("%d",&input4);
                    	if(input4 == 0){
                   			printf("%s\n","不見");}
                        else if( input4 == 1){
                           printf("%s\n","見");}
        	}
        }
        
	}
}