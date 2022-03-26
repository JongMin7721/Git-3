#include <stdio.h>

#define MAX_SIZE 100            //MAX_SIZE = 100

float sum(float [], int);       //함수
float input[MAX_SIZE], answer;  //float형 변수 answer와 크기가 MAX_SIZE인 float형 배열 input 선언
int i;                          //int형 i 선언
void main(void)
{
    for(i=0; i < MAX_SIZE; i++) //i가 0부터 MAX_SIZE보다 작을때까지만 1씩 증가하며 반복
        input[i] = i;           //input[i]에 i를 반복 입력

    printf("address of input = %p\n", input);       //input의 주소는 input[0]의 주소이으로 input[0]의 주소 출력

    answer = sum(input, MAX_SIZE);      //함수 호출 후 결과 값을 answer에 입력, input은 주소를 담고 있기 때문에 함수에 주소가 복사됨 -- 1)
    printf("The sum is: %f\n", answer); //sum함수에서 받아온 결과값을 출력

    printf("[----- [Won Jong Min] [2019038014] -----]");
}

float sum(float list[], int n)          //list에 1)에서 받아온 주소가 복사됨
{
    printf("value of list = %p\n", list);       //list의 값은 메인에서 복사된 input의 주소가 출력됨.
    printf("address of list = %p\n\n", &list);  //list의 주소는 메인에 있는 주소와 다른 위치에서 새로 만들어 졌기 때문에 새로운 주소 출력

    int i;                  
    float tempsum = 0;      //float형 변수 선언
    for(i = 0; i < n; i++)  //i는 0부터 n <- 메인에서 받아온 MAX_SIZE 보다 작을 때까지 1씩 증가하며 반복
        tempsum += list[i];     //1부터 n까지 더함
    return tempsum;             //반복이 끝나고 결과값으로 tempsum 출력
}