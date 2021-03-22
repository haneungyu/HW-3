#include <stdio.h>
#include <stdlib.h>

void main(){

    printf("[----- [Han Eungyu]]] [2018038010] -----]\n"); // 이름, 학번 출력
    
    int **x;

    printf("sizeof(x) = %lu\n", sizeof(x)); //주소를 가지고 있기 때문에 4바이트
    printf("sizeof(*x) = %lu\n", sizeof(*x)); // 주소를 저장하기 때문에 4바이트
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //int의 크기를 나타내서 4바이트
}
