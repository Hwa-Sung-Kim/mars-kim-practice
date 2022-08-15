#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main_condition(void)
{
    // 버스를 탄다고 가정, 학생/일반인으로 구분(일반인 : 20세)

    // int age = 25;
    // // if(조건) {..} else {..}
    // if (age >= 20)
    // {
    //     printf("일반인 입니다.");
    // }
    // else 
    //     {
    //     printf("학생 입니다");
    //     }
    

    // 초등학생(8~13) / 중학생 (14~16) . 고등학생 (17~19)으로 나누면?
    // if / else if / else

    // int age = 7;
    // if (age>=8 && age <=13)
    // {
    //     printf("초등학생 입니다\n");
    // }

    // else if (age>=13 && age<=16)
    // {
    //     printf("중학생 입니다\n");
    // }

    // else if (age>=17 && age <=19 )
    // {
    //     printf("고등학생 입니다\n");
    // }

    // else 
    // {
    //     printf("일반인 입니다\n");
    // }



    // break / continune
    // 1번부터 30번까지 있는 반에서 1번에서 5번까지 조벌 발표를 합니다.
    // 

    // for (int i=1; i<=30; i++)
    // {
    //     if(i >= 6)
    //     {
    //         printf("나머지 학생은 집에 가세요\n");
    //         break; // 조건을 만족할 때 break를 만나면 for문을 탈출한다.

    //     //     1번 학생은 조벌 발표 준비를 하세요
    //     //     2번 학생은 조벌 발표 준비를 하세요
    //     //     3번 학생은 조벌 발표 준비를 하세요
    //     //     4번 학생은 조벌 발표 준비를 하세요
    //     //     5번 학생은 조벌 발표 준비를 하세요
    //     //     나머지 학생은 집에 가세요 
    //     }
    //     printf("%d번 학생은 조벌 발표 준비를 하세요\n", i);
    // }

    // 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
    // 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요

    // for (int i=1; i<=30; i++)
    // {
    //     if (i>=6 && i<=10)
    //     {
    //         if (i == 7)
    //         {
    //             printf("%d번 학생은 결석 입니다\n", i);
    //             continue; // 조건을 만족할 때 continue를 만나면 그 이후의 문장을 실행하지 않고 바로 다음 반복문으로 이동한다.
    //         }

    //         printf("%d번 학생은 발표 준비를 하세요\n", i);
    //     }
    // }

    // && ||
    // int a = 10;
    // int b = 11;
    // int c = 11;
    // int d = 11;

    // if (a == b || c == d)
    // {
    //     printf("a와 b 혹은 c와 d의 값이 같습니다\n");
    // }

    // else
    // {
    //     printf("값이 서로 다릅니다\n");
    // }

    // srand(time(NULL)); // 난수 초기화

    // printf("난수 초기화 이전..\n");
    // for(int i=1; i<10; i++)
    // printf("%d ", rand() % 10);
    

    // 가위0 바위1 보2

    // srand(time(NULL));
    // int i = rand () % 3;
    // if (i==0)
    // {
    //     printf("가위\n");
    // }
    // else if (i==1)
    // {
    //     printf("바위\n");
    // }
    // else if (i==2)
    // {
    //     printf("보\n");
    // }
    // else
    // {
    //     printf("몰라요");
    // }

    
    // 가위0 바위1 보2

    // srand(time(NULL));
    // int i = rand () % 3; // 0-2 반환
    // switch (i) // 어떤 값을 받아서 값을 해당하는 경우를 출력
    // // switch 조건문에서는 break;가 필요함
    // // break가 없을 경우 case 조건이 만족한 이후의 나머지 조건도 다 출력 해버림
    // {
    //     case 0: printf("가위\n"); break;
    //     case 1: printf("바위\n"); break;
    //     case 2: printf("보\n"); break;
    //     default: printf("몰라요\n"); break;
    // }

    // 초등학생(8~13) / 중학생 (14~16) . 고등학생 (17~19)으로 나누면?
    // if / else if / else

    // int age = 19;

    // switch (age)
    // {
        
    //     case 8:
    //     case 9:
    //     case 10:
    //     case 11:
    //     case 12:
    //     case 13:printf("초등학생 입니다\n"); break;
    //     case 14:
    //     case 15: 
    //     case 16:printf("중학생 입니다\n"); break;
    //     case 17:
    //     case 18:
    //     case 19:printf("고등학생 입니다\n"); break;
    //     default: printf("학생이 아닌가봐요\n"); break;

    // }
    // age = 7;
    // if (age>=8 && age <=13)
    // {
    //     printf("초등학생 입니다\n");
    // }

    // else if (age>=13 && age<=16)
    // {
    //     printf("중학생 입니다\n");
    // }

    // else if (age>=17 && age <=19 )
    // {
    //     printf("고등학생 입니다\n");
    // }

    // else 
    // {
    //     printf("일반인 입니다\n");
    // }

    //  프로젝트 up and down
    
    srand(time(NULL));
    int num = rand() % 100 + 1; // 1을 더해서 1-100 사이의 숫자 
    printf("숫자 : %d\n", num);
    int answer = 0;
    int chance = 5;
    while (chance > 0) // 1: 참, 0: 거짓 (1일 경우 무조건 실행)
    {
        printf("남은 기회 %d 번", chance--); // 숫자를 입력 받고 chance의 값을 - 함
        printf("숫자를 맞혀보세요 (1-100) : ");
        scanf("%d", &answer);

        if (answer > num) // 정답 보다 높은 값을 입력 받을 경우 down
        {
            printf("DOWN DOWN\n\n");
        }
        else if (answer < num) // 정답 보다 낮은 값을 입력 받을 경우 up
        {
            printf("UP UP\n\n");
        }
        else if ( answer == num) // 정답 일 경우 printf 후 break; 문을 이용하여 while 문을 빠져 나간다.
        {
            printf("정답 입니다 ! \n\n");
            break;
        }
        else // else 의 값을 입력 받는 경우는 없겠지만 if 구문에서는 else if 다음 else가 있어야 되므로 추가
        {
            printf("알 수 없는 오류가 발생 했습니다\n\n");
        }

        if ( chance == 0) // 사실 없어 되는 부분이지만 남은 chance를 알려주기 위함
        {
            printf("모든 기회를 다 사용하셨네요.\n\n");
            break;
        }

    }


    return 0;
}