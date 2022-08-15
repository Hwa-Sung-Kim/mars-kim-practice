#include <stdio.h>

int main_loop(void)

{
    // int a = 10;
    // printf("a는 %d\n", a);
    // a++;
    // printf("a는 %d\n", a);

    // int b = 20;
    // printf("b는 %d\n", ++b);
    // printf("b는 %d\n", b++);
    // printf("b는 %d\n", b);

    // int i = 1;
    // printf("Hello World %d\n", i++);
    // printf("Hello World %d\n", i++);
    // printf("Hello World %d\n", i++);
    // printf("Hello World %d\n", i++);
    // printf("Hello World %d\n", i++);
    // printf("Hello World %d\n", i++);
    // printf("Hello World %d\n", i++);
    // printf("Hello World %d\n", i++);
    // printf("Hello World %d\n", i++);
    // printf("Hello World %d\n", i++);


    // 반복문
    // for, while, do while
    // for (선언, 조건, 증감){}
    // for (int i=1; i<=10; i++)
    
    // {
    //     printf("Hello World %d\n", i);
    // }

    // while (조건) {}
    // int i = 1;
    // while (i <= 10)
    // {
    //     printf("Hello World %d\n", i++);
    // }

    // do 

    // do {} while (조건)
    // int i = 1;
    // do { 
    //     printf("Hello World %d\n", i++);
    // } while(i <=10 );
    // return 0;


    // 2중 반복문
    // for (int i=1; i<=3; i++)
    // {
    //     printf("첫 번째 반복 문 : %d\n", i);

    //     for (int j=1; j<=5; j++)
    //     {
    //         printf("    두 번째 반복 문 : %d\n", j);
    //     }
    // }

    // 구구단 
    // for (int i=1; i<=9; i++)
    // {
    //     printf(" --- %d단 ---\n", i);
    //         for (int j = 1; j <= 9; j++)
    //         {
    //             printf("%d x %d = %d\n", i, j, i*j);
    //         }
    //         printf("\n");
    // }

    // for문을 이용하여 아래와 같이 출력 하기
    //*
    //**
    //***
    //****
    //*****
    // for (int i=0; i<5; i++)
    // {
    //     for (int j=0; j<=i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    /* 출력하기
    SSSS*
    SSS**
    SS***
    S****
    *****
    */

//    for (int i=0; i<5; i++)
//    {
//     for (int j=i; j<5-1; j++)
//     {
//         printf("S");
//     }

//     for (int k=0; k <=i; k++)
//     {
//         printf("*");
//     }
//     printf("\n");
//    }


// 피라미드를 쌓아라 - 프로젝트

//SSSS* 1
//SSS*** 3
//SS***** 5
//S******* 7 
//********* 9

int floor;
printf("몇층으로 쌓겠느냐?");
scanf("%d", &floor); // 몇층으로 쌓을지에 대한 입력 값 
// window 환경에서는 scanf_s("%d", &floor, sizeof(floor);
// scanf와 scanf_s의 차이점
// scanf는 형식 지정자에 맞춰서 값을 입력 받고 할당된 메모리에 값을 넣는데 overflow가 발생할 경우 에러 발생
// scanf_s는 scanf의 오버플로우를 방지하고자 미리 형식 지정자의 sizeof를 지정하여 에러를 방지
// mac 환경에서는 scanf_s가 안되는 것 같음.... 더 찾아봐야 됨

for (int i=0; i<floor; i++) // 몇 층으로 쌓을건지 for문을 통해 조건 지정
{
   for (int j=i; j<floor-1; j++) // 두번째 피라미드 조건인 공백 대신 S를 출력 값으로 대체 
   {
    printf("S");
   } 
   for (int k =0; k < (i*2)+1; k++) // 쌓을 피라미드를 *로 표기하여 조건을 k < (i*2)+1로 지정함으로써 피라미드 모양 구성
   {
    printf("*");
   }
   printf("\n");
}

    return 0;
}