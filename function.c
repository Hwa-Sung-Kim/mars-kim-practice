#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//선언 
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);
int apple(int total, int ate); // 전체 total개에서 ate개를 먹고 남은 수를 int 형으로 반환
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
// int div(int num1, int num2);

//function
//계산기

int main_function(void)
{

// int num = 2;
// //printf("num은 %d 입니다.\n", num);
// p(num);

// // 2+3은?
// num = num + 3; // num -= 3; 과 같다
// //printf("num은 %d 입니다.\n", num);
// p(num);

// // 5-1 은?
// num -= 1; // num = num - 1; 과 같다
// //printf("num은 %d 입니다.\n", num);
// p(num);

// // 4*3 은?
// num *= 3;
// //printf("num은 %d 입니다.\n", num);
// p(num);

// // 12/6 은?
// num /= 6;
// //printf("num은 %d 입니다.\n", num);
// p(num);

// 함수 종류
// 반환 값이 없는 함수
// function_without_return();

// // 반환 값이 있는 함수
// int ret = function_with_return();
// p(ret);

// 전달 값이 없는 함수
// function_without_params();

// 전달 값이 있는 함수
// function_with_params(15,62,83);

// 전달 값, 반환값이 있는 함수
// int ret = apple(10,2); // 5개의 사과 중에서 2개를 먹었어요
// printf("남은 사과의 갯수는 %d 개 입니다.\n", ret);
// printf("사과 %d 개 중에 %d 개를 먹으면? %d개가 남아요\n", 10, 2, apple(10,2));

// 계산기 함수
int num = 2;
num = add(num, 3);
p(num);

num = sub(num, 1);
p(num);

num = mul(num, 3);
p(num);

// num = div(num, 6);
// p(num);

return 0;


}


// 정의
void p(int num)
{
    printf("num은 %d 입니다 \n", num);
}


// 전달 값 : 36
// 함수 : ㅁ + 4
// 반환형 : ?


// 반환형값이 있는 함수 ex) int 함수이름 (전달 값) 맨 앞에 int로 선언 할 경우 전달 받은 값을 함수안에서 문장 실행 후 전달할 값을 반환 해준다

// 반환형값이 없는 함수 ex) void 함수이름 (전달 값)
void function_without_return()
{
    printf("반환 값이 없는 함수 입니다\n");
}


// 반환 값이 있는 함수 ex) 반환 받을 형태(int,float,float) 함수이름 (전달 값)
int function_with_return()
{
    printf("반환 값이 있는 함수 입니다\n");
    return 10;
}

// 전달 값이 없는 함수
void function_without_params()
{
    printf("전달 값이 없는 함수 입니다\n");
}

// 전달 값이 있는 함수
void function_with_params(int num1, int num2, int num3)
{
    printf("전달 값이 있는 함수 이며, 전달 값은 %d, %d, %d 입니다\n", num1, num2, num3);
}

// 전달 값과, 반환형이 있는 함수
int apple(int total, int ate)
{
    printf("전달 값과 반환값이 있는 함수 입니다\n");
    return total - ate;
}

int add(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int mul(int num1, int num2)
{
    return num1 * num2;
}
// int div(int num1, int num2)
// {
//     return num1/num2;
// }