#include<stdio.h>


int main(void){

    int n=0,grade=0,total=0;
        while(n<10){
            scanf("%d",&grade);
            total += grade;
            n++;
        }
    printf("%d",total/10);

}