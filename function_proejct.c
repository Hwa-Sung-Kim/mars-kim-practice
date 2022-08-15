#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();


int main(void)
{
    // 문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제
    // 맞히먄 통과, 틀리면 실패

    srand(time(NULL));
    int count =0;
    for (int i=1; i<=5; i++)
    {
        // x * y = ?
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        //printf("%d x %d 의 값은 얼마 입니까?\n", num1, num2);
        showQuestion(i, num1, num2);

        int answer = -1;
        scanf("%d", &answer);
        if (answer == -1)
        {
            printf("프로그램을 종료 합니다\n");
            exit(0); // break; 문을 사용할 경우 for 문은 빠져나오지만 48 line 문장을 실행하기 때문에 exit(0); 를 사용하여 바로 프로그램 종료
        }
        else if (answer == num1 * num2)
        {
            //성공
            success();
            count++;
        }

        else 
        {
            //실패
            fail();
        }

    }

    printf("\n\n 당신은 5개의 비밀번호 중 %d개를 맞혔습니다\n", count);

    return 0;
}


int getRandomNumber(int level)
{
    return rand() % (level * 7) +1;
}
void showQuestion(int level, int num1, int num2)
{
    printf("\n\n\n ####### %d 번째 비밀번호 ####### \n", level);
    printf("\n\t %d x %d 는? \n\n", num1, num2);
    printf("\n 비밀번호를 입력 하세요 (종료: -1) >> ");
}

void success()
{
    printf("\n >> Good 정답 입니다!!!\n");
}

void fail()
{
    printf("\n >> NOT GOOOD 틀렸습니다!!\n");
}