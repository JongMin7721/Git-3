#include<stdio.h>
#include<stdlib.h>

void main()
{
    int **x;        //더블 포인터 x 선언

    printf("sizeof(x) = %lu\n", sizeof(x));         //전부 같은 4바이트지만 x는 *x의 주소가 들어가 있음
    printf("sizeof(*x) = %lu\n", sizeof(*x));       //*x는 **x의 주소가 들어가 있음
    printf("sizeof(**x) = %lu\n", sizeof(**x));     //**x는 int형 변수이기 때문에 4바이트가 할당 됨

    printf("[----- [Won Jong Min] [2019038014] -----]");
}