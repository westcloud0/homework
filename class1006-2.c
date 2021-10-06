#include<stdio.h>


int main(void){

    int n=0,m=0,grade=0,total=0;
    scanf("%d",&m);
    while(n<m){
        scanf("%d",&grade);
        total += grade;
        n++;
        }
    if(m==0){
        printf("%s","error");
    }
    else {printf("%d",total/m);}

}