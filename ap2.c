#include <stdio.h>

void main(){
    
    printf("[----- [Han Eungyu]]] [2018038010] -----]\n"); // 이름, 학번 출력

    int list[5]; //int형 리스트 배열 선언
    int *plist[5]; // int형 plist 배열 선언

    list[0] = 10; //list[0]을 10으로 선언
    list[1] = 11; //list[1]을 11로 선언

    plist[0] = (int*)malloc(sizeof(int)); //int만큼의 size를 받아서 plist에 넘겨줌

    printf("list[0] \t= %d\n",list[0]); //list[0]의 값 출력
    printf("address of list \t=%p\n",list); //list의 주소 출력
    printf("address of list[0] \t=%p\n",&list[0]); //list[0]의 주소 출력
    printf("address of list + 0 \t=%p\n",list+0);  //list+0(변화없음)주소 출력
    printf("address of list + 1 \t=%p\n",list+1); //list주소에서 1*int크기 만큼 주소 점프
    printf("address of list + 2 \t=%p\n",list+2); //list주소에서 2*int크기 만큼 주소 점프
    printf("address of list + 3 \t=%p\n",list+3); //list주소에서 3*int크기 만큼 주소 점프
    printf("address of list + 4 \t=%p\n",list+4); //list주소에서 4*int크기 만큼 주소 점프
    printf("address of list[4] \t=%p\n",&list[4]); //list+4의 주소랑 같음

    free(plist[0]); //할당했던 메모리 해제
}
