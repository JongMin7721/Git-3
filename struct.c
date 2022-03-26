#include <stdio.h>

struct student1 {       //구조체 student1 선언
    char lastName;
    int studentId;
    char grade;
};

typedef struct {        //typedef 문장을 이용해서 구조체 student2 선언
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {

    struct student1 st1 = {'A', 100, 'A'};
    //typedef를 사용하지 않았기 때문에 struct를 붙여주고 st1란 이름으로 각 변수에 A, 100, A를 입력

    printf("st1.lastName = %c\n", st1.lastName);        //st1란 이름의 student1 구조체의 lastName변수 출력
    printf("st1.studentId = %d\n", st1.studentId);      //st1의 stundentId 출력
    printf("st1.grade = %c\n", st1.grade);              //st1의 grade 출력

    student2 st2 = {'B', 200, 'B'};         //typedef문장을 사용했기 때문에 구조체 이름만으로 st2란 변수 선언 후 B, 200, B 입력

    printf("\nst2.lastName = %c\n", st2.lastName);      //st2에 있는 변수 lastName에 넣었던 B 출력
    printf("st2.studentId = %d\n", st2.studentId);      //st2의 studentId 출력
    printf("st2.grade = %c\n", st2.grade);              //st2의 grade 출력

    student2 st3;   //student2 형식의 이름이 st3인 변수 선언

    st3 = st2;      //st3에 st2를 입력

    printf("\nst3.lastName = %c\n", st3.lastName);      //st3에 st2를 입력했기 때문에 st2와 결과가 같음
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    printf("[----- [Won Jong Min] [2019038014] -----]");

    /* if(st3 == st2)          //작동하지 않음     GCC컴파일러는 전체 구조의 동등성 검사를 하지 못함
        printf("equal\n");
    else
        printf("not equal\n");
    return 0;       */
}