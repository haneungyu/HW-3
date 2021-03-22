#include <stdio.h>

void print1 (int *ptr, int rows); //print1함수 선언

int main(){
    printf("[----- [Han Eungyu]]] [2018038010] -----]\n"); // 이름, 학번 출력
    
    int one[] = {0,1,2,3,4}; //one배열에 0,1,2,3,4 저장

    printf("one     = %p\n", one);//one 출력
    printf("&one    = %p\n", &one); //one의 주소 출력
    printf("&one[0] = %p\n", &one[0]); //one[0]의 주소 출력
    printf("\n");

    print1(&one[0], 5); //one[0] 주소부터 1씩 증가한 주소와 값을 출력

    return 0;
}

void print1 (int *ptr, int rows){ //ptr+1의 주소와 가르키는 값을 구하는 함수
    int i;                       //int size만큼 주소값이 점프하게 됨
    printf ("Address \t Contents\n");
    for(i=0; i<rows; i++) //i는 0부터 rows까지 1씩 증가하게 됨
        printf("%p \t %5d\n",ptr+i, *(ptr +i));//주소와 가르키는 값 출력
    printf("\n");
}
