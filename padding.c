#include <stdio.h>

struct student {                    //구조체 student를 선언한다.
char lastName[13]; /* 13 bytes */
int studentId; /* 4 bytes */
short grade; /* 2 bytes */
};

int main()
{
    struct student pst;                                             //구조체 student의 변수 pst를 선언한다.
    printf("size of student = %ld\n", sizeof(struct student));      //구조체 student의 크기를 출력한다.
    printf("size of int = %ld\n", sizeof(int));                     //int의 크기를 출력한다.
    printf("size of short = %ld\n", sizeof(short));                 //short의 크기를 출력한다.
    return 0;
}
//구조체 student의 크기는 24바이트이다. 하지만 실제 데이터 크기는 (lastName은 13바이트, studentId는 4바이트, grade는 2바이트이다(총 19바이트))이다.
//구조체 패딩이란 컴퓨터에서 cpu가 접근 하기 좋은 위치에 데이터를 배치하는 것을 말한다. 패딩 비트의 크기만큼 메모리를 낭비하게 되지만, cpu가 데이터에 접근하는 속도가 빨라진다.
//64비트 컴퓨터에서는 8바이트 단위로 데이터를 배치한다. 때문에 19바이트의 데이터를 24바이트로 패딩하는 것이다.