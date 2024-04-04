#include <stdio.h>
struct student1 {           //구조체 student1을 선언한다.
    char lastName;
    int studentId;
    char grade;
};
typedef struct {            //구조체 student2를 선언한다.
    char lastName;
    int studentId;
    char grade;
} student2;
int main() {
    struct student1 st1 = {'A', 100, 'A'};          //구조체 student1의 변수 st1을 선언하고 초기화한다.  
    printf("st1.lastName = %c\n", st1.lastName);    //st1의 lastName을 출력한다.
    printf("st1.studentId = %d\n", st1.studentId);  //st1의 studentId를 출력한다.
    printf("st1.grade = %c\n", st1.grade);          //st1의 grade를 출력한다.

    student2 st2 = {'B', 200, 'B'};                 //구조체 student2의 변수 st2를 선언하고 초기화한다.
    printf("\nst2.lastName = %c\n", st2.lastName);  //st2의 lastName을 출력한다.
    printf("st2.studentId = %d\n", st2.studentId);  //st2의 studentId를 출력한다.
    printf("st2.grade = %c\n", st2.grade);          //st2의 grade를 출력한다.

    student2 st3;                                   //구조체 student2의 변수 st3를 선언한다.
    st3 = st2;                                      //st3에 st2를 대입한다.
    printf("\nst3.lastName = %c\n", st3.lastName);  //st3의 lastName을 출력한다.
    printf("st3.studentId = %d\n", st3.studentId);  //st3의 studentId를 출력한다.
    printf("st3.grade = %c\n", st3.grade);          //st3의 grade를 출력한다.

    /* equality test */
    // st3와 st2가 가 같은지 비교한다.
    if(st2.grade == st3.grade && st2.lastName == st3.lastName && st2.studentId == st3.studentId)        
        printf("equal\n");
    else
        printf("not equal\n");
        
    return 0;
}