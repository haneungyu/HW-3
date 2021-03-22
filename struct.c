#include <stdio.h>

struct student1 { //student1 구조체 선언
    char lastname;
    int studentId;
    char grade;
};

typedef struct{ //student2 구조체 선언
    char lastname;
    int studentId;
    char grade;
} student2;

int main(){
    printf("[----- [Han Eungyu]]] [2018038010] -----]\n"); // 이름, 학번 출력
    
    struct student1 st1 = {'A', 100, 'A'}; //typedef를 쓰지 않았기때문에 struct을 써줘야함

    printf("st1.lastname = %c\n",st1.lastname); //st1에 저장되어있는 값 출력
    printf("st1.studentId = %d\n",st1.studentId); //st1에 저장되어있는 값 출력
    printf("st1.grade = %c\n",st1.grade); //st1에 저장되어있는 값 출력

    student2 st2 = {'B',200,'B'}; //typedef을 해줬기 때문에 struct를 쓸필요 없음

    printf("\nst2.lastname = %c\n",st2.lastname); //st2에 저장되어있는 값 출력
    printf("st2.studentId = %d\n",st2.studentId); //st2에 저장되어있는 값 출력
    printf("st2.grade = %c\n",st2.grade); //st2에 저장되어있는 값 출력

    student2 st3; //student2 타입의 st3 선언

    st3 = st2; //st2를 st3에 대입(구조치환)

    printf("\nst3.lastname = %c\n",st3.lastname); //st3에 저장되어있는 값 출력(st2와 동일)
    printf("st3.studentId = %d\n",st3.studentId); //st3에 저장되어있는 값 출력(st2와 동일)
    printf("st3.grade = %c\n",st3.grade); //st3에 저장되어있는 값 출력(st2와 동일)

    /*
    if(st3 == st2) -> 비교를 할 수가 없음
        printf("equal\n");
    else
        printf("not equal\n");
        */

    return 0;
}
