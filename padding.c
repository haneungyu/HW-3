#include <stdio.h>

struct student //구조체 student 선언
{
    char lastName[13];
    int studentId;
    short grade;
};

int main(){

    printf("[----- [Han Eungyu]]] [2018038010] -----]\n"); // 이름, 학번 출력
    
    struct student pst;
    
    printf("size of student = %ld\n",sizeof(struct student)); 
    //name 13바이트 -> 4바이트씩 3번을 채우고 1바이트 나머지 부분을 padding을 하고있는것임.
    //id 4바이트, grade 2바이트-> 남은 2바이트도 padding
    //name 16바이트 + id 4바이트 + grade 4바이트 하면 24바이트가 됨
    //typedef 안써줬기때문에 struct를 꼭 넣어줘야함
    printf("size of int = %ld\n",sizeof(int)); //int 사이즈 출력
    printf("size of short = %ld\n",sizeof(short)); //short 사이즈 출력

    return 0;
}
