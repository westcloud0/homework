#include <stdio.h>

int main(void){
    int input1;
    int input2;
    int input3;
    printf("%s","國文成績 =");
    scanf("%d", &input1 );
    printf("%s","英文成績 =");
    scanf("%d", &input2 );
    printf("%s","數學成績 =");
    scanf("%d", &input3 );
    printf("%s","總分");
    printf("%d\n",input1+input2+input3);
    printf("%s", "平均");
    printf("%d",(input1+input2+input3)/3);
    

}