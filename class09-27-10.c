#include <stdio.h>

int main(void){
    int input1;
    int input2;
    printf("%s","a =");
    scanf("%d", &input1 );
    printf("%s","b =");
    scanf("%d", &input2 );
    printf("%s","a + b =");
    printf("%d\n", input1 + input2);
    printf("%s","a * b =");
    printf("%d\n", input1 * input2);
    printf("%s","a - b =");
    printf("%d\n", input1 - input2);
    printf("%s","a / b =");
    printf("%d",  input1 / input2);
    printf("%s",  "...");
    printf("%d",  input1 % input2);

}