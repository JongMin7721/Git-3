#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];            //배열이 5개인 list와 포인터plist 를 선언
    int *plist[5];

    list[0] = 10;           //list[0]에 10, list[1]에 11 입력
    list[1] = 11;

    plist[0] = (int*)malloc(sizeof(int));       //plist[0]을 4바이트로 동적배열선언

    printf("list[0] \t= %d\n", list[0]);                //list[0]의 값인 10 출력
    printf("address of list \t= %p\n", list);           //list의 주소 출력      -- 1)
    printf("address of list[0] \t= %p\n", &list[0]);    //list[0]의 주소 출력
    printf("address of list + 0 \t= %p\n", list+0);     //list+0은 list와 같으므로 1)과 같은 값 출력
    printf("address of list + 1 \t= %p\n", list+1);     //list에서 동적배열선언을 4바이트로 선언 했기 때문에
    printf("address of list + 2 \t= %p\n", list+2);     //list+0 부터 1씩 늘어갈 때 마다 4씩 증가
    printf("address of list + 3 \t= %p\n", list+3);     //끝자리가 0C에서 4를 더하면 10이 되고
    printf("address of list + 4 \t= %p\n", list+4);     //순차적으로 더해서 list+4까지 총 16을 더해 끝자리가 1C로 끝나는 주소 출력
    printf("address of list[4] \t= %p\n", &list[4]);    //list[4]의 주소는 list+4의 주소와 같음

    printf("[----- [Won Jong Min] [2019038014] -----]");

    free(plist[0]);             //동적배열 반환
}