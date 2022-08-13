#include <stdio.h>
int main(void)
{
//    int input;
//    printf("값을 입력하세요 : ");
//    scanf_s("%d", &input);
//    printf("입력 된 값은 : %d 입니다\n", input);

char str[256];
printf("아무 말이나 입력 하세요 : ");
scanf("%s", str);
printf("출력 값은 %s 입니다 ", str);

return 0;
}