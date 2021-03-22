#include <stdio.h>

#define MAX_SIZE 100 // MAX_SIZE를 100으로 정의

float sum(float [], int); //sum함수 선언
float input[MAX_SIZE], answer; //float형 변수 선언
int i; //int형 변수 선언

void main(void){

    printf("[----- [Han Eungyu]]] [2018038010] -----]\n"); // 이름, 학번 출력
    
    for(i=0; i < MAX_SIZE; i++)  // i를 MAX_SIZE인 100까지 1씩 증가
        input[i]=i; //input[i]~input[MAX_SIZE]까지 증가

    printf("address of input = %p\n",input); //input의 주소 출력

    answer =sum(input, MAX_SIZE);  //input 원소들의 합을 구하는 함수인 sum을 실행하여 그 결과값을 answer에 대입
    printf("The sum is : %f\n",answer); // 합계 출력
}

float sum(float list[], int n){ //float형 함수 정의
    printf("value of list = %p\n",list); //list의 값 출력(input을 담고있음)
    printf("address of list = %p\n\n", &list); //list의 주소값 출력

    int i; //int형 변수 i선언
    float tempsum = 0; // 실수형 변수 tempsum을 0으로 초기화
    for(i=0; i<n; i++) //i를 0부터 n까지 1씩 증가하면서 더함
        tempsum +=list[i]; //tempsum에 누적해줌
    return tempsum; //tempsum 반환
}
