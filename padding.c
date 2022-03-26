#include <stdio.h>

struct student {
    char lastName[13];  // 총 13바이트
    int studentId;      // 4바이트
    short grade;        // 2바이트
};

int main()
{

    struct student pst; //student구조체를 pst란 이름의 변수로 선언

    printf("size of student = %ld\n", sizeof(struct student));
    //구조체 student의 크기는 총 19바이트지만 padding(채워넣기)를 통해 4바이트씩 맞춰 결과를 나타냄
    printf("size of int = %ld\n", sizeof(int));             //int의 크기 4바이트
    printf("size of short = %ld\n", sizeof(short));         //short의 크기 2바이트

    printf("[----- [Won Jong Min] [2019038014] -----]");

    return 0;
}