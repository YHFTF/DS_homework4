#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **x;                                        //이중 포인터 x를 선언한다. 
    printf("sizeof(x) = %lu\n", sizeof(x));         //이중포인터 x의 크기를 출력한다.
    printf("sizeof(*x) = %lu\n", sizeof(*x));       //이중포인터 x가 가리키는 주소의 크기를 출력한다.
    printf("sizeof(**x) = %lu\n", sizeof(**x));     //이중포인터 x가 가리키는 주소의 값의 크기를 출력한다.
    printf("----- [Park Younghyeon] [2021041019] -----]");
}