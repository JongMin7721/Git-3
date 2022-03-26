#include <stdio.h>
#include <stdlib.h>

    void main()
    {
        int list[5];                //list배열 선언
        int *plist[5] = {NULL,};    //포인터형 plist배열을 각 배열에 NULL값을 넣고 생성

        plist[0] = (int *)malloc(sizeof(int));      //plist[0]을 int의 크기인 4바이트로 동적배열선언 -- 1)

        list[0] = 1;        
        list[1] = 100;

        *plist[0] = 200;        //heep에 있는 plist[0]가 가리킨 자리에 200을 넣음

        printf("value of list[0] = %d\n", list[0]);             //list[0]은 방금 넣은 1출력
        printf("address of list[0] = %p\n", &list[0]);          //list[0]의 주소 출력
        printf("value of list = %p\n", list);                   //list는 list[0]을 가리키는 포인터이기 때문에 list[0]을 출력
        printf("address of list (&list) = %p\n", &list);        //&list의 주소는 list[0]의 주소를 출력하는 것과 같음


        printf("----------------------------------------\n\n");
        printf("value of list[1] = %d\n", list[1]);             //list[1]의 값인 100을 출력
        printf("address of list[1] = %p\n", &list[1]);          //list[1]의 주소 출력
        printf("value of *(list+1) = %d\n", *(list + 1));       
        /*  list는 list[0]의 주소를 가리키고 *list는 list[0]의 값을 가리킨다. 그래서 *(list + 1)은 list[1]의 값을 가리키기 때문에 100을 출력*/
        printf("address of list+1 = %p\n", list+1);             //list+1은 &list[1]과 같기 때문에 list[1]의 주소를 가리킨다.


        printf("----------------------------------------\n\n");

        printf("value of *plist[0] = %d\n", *plist[0]);         //plist[0]에 넣은 200을 출력
        printf("&plist[0] = %p\n", &plist[0]);                  //plist[0]의 주소를 출력
        printf("&plist = %p\n", &plist);                        //plist[0]의 주소와 plist의 주소는 같은 말임
        printf("plist = %p\n", plist);                          //plist는 plist[0]의 주소이다.
        printf("plist[0] = %p\n", plist[0]);                    //plist[0]은 1)에서 가리킨 주소이다.
        printf("plist[1] = %p\n", plist[1]);                    //plist[1] ~ plist[4]는 NULL을 넣었기 떄문에 나오지 않는다.
        printf("plist[2] = %p\n", plist[2]);
        printf("plist[3] = %p\n", plist[3]);
        printf("plist[4] = %p\n", plist[4]);

        printf("[----- [Won Jong Min] [2019038014] -----]");

        free(plist[0]);                                 //동적배열을 반환
    }