#include <stdio.h>

void print1 (int *ptr, int rows);       //print1 함수

int main()
{
    int one[] = {0, 1, 2, 3, 4};    //값이 0,1,2,3,4인 배열 선언

    printf("one = %p\n", one);          //one의 주소 출력
    printf("&one = %p\n", &one);        //&one은 &one[0]과 같은 주소임.
    printf("&one[0] = %p\n", &one[0]);
    printf("\n");
    
    print1(&one[0], 5);     //print1 함수에 one[0]의 주소를 보냄

    printf("[----- [Won Jong Min] [2019038014] -----]");
    
    return 0;
}
void print1 (int *ptr, int rows)    //one[0]의 주소를 포인터ptr로 받음
{
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)  //i가 0부터 rows보다 작을 떄까지 반복
        printf("%p \t %5d\n", ptr + i, *(ptr + i));
        //ptr는 메인에서 받아온 one[0]의 주소와 같은 값이고, 그것의 포인터는 one[0]의 값이다.
        //그렇기 때문에 ptr+i는 one[i]와 같은 주소이고, *(ptr+i)는 one[i]와 같은 값이 출력된다.
    printf("\n");
}