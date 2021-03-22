#include <stdio.h>
#include <stdlib.h>
void main(){

printf("[----- [Han Eungyu]]] [2018038010] -----]\n"); // 이름, 학번 출력

int list[5]; //int형 리스트 배열 선언
int *plist[5] = {NULL,}; // int형 plist포인터를 NULL로 초기화

plist[0] = (int *)malloc(sizeof(int)); //int만큼의 사이즈를 받아서 plist에 주소를 넘겨줌

list[0] = 1; //list 0번에 1을 넣음
list[1] = 100; //list 1번에 100을 넣음

*plist[0] = 200; //plist[0]이 가르키는 곳에 200을 넣음

printf("value of list[0] = %d\n", list[0]); //list[0]의 값을 출력
printf("address of list[0] =%p\n", &list[0]); //list[0]의 주소를 출력
printf("value of list= %p\n", list); //list의 값을 출력
printf("address of list (&list) = %p\n", &list); //list의 주소를 출력

printf("-----------------------------\n"); 
printf("value of list[1] = %d\n", list[1]); //list[1]의 값을 출력
printf("address of list[1] = %p\n", &list[1]); //list[1]의 주소를 출력
printf("value of *(list+1) = %d\n", *(list+1)); //list[1]의 값을 출력(int의 크기 만큼 점프)
printf("address of list+1 = %p\n", list+1); //list+1의 값 출력(int의 크기 만큼 점프)

printf("-----------------------------\n");

printf("value of *plist[0] = %d\n", *plist[0]); //plist[0]의 값
printf("&plist[0]          = %p\n", &plist[0]); //plist[0]의 주소
printf("&plist             = %p\n", &plist); //plist의 주소
printf("plist              = %p\n", plist); //plist
printf("plist[0]           = %p\n", plist[0]); //plist[0]의 값
printf("plist[1]           = %p\n", plist[1]);//plist[1]의 값 (NULL 값)
printf("plist[2]           = %p\n", plist[2]);//plist[2]의 값 (NULL 값)
printf("plist[3]           = %p\n", plist[3]);//plist[3]의 값 (NULL 값)
printf("plist[4]           = %p\n", plist[4]);//plist[4]의 값 (NULL 값)

free(plist[0]); //할당했던 메모리 해제
}
