// typedef is a user defined data type , which used to change data type name temparary
// in program.
#include <stdio.h>
typedef long long int lli;
typedef long double ld;
typedef char c;
struct student_of_class_10th_section_b
{
    int rno;
    float per;
};

typedef struct student_of_class_10th_section_b s10b;
void main()
{
    lli a = 90;
    ld b;
    c ch;
    s10b s1;
    s1.rno = 101;
    s1.per = 56;
    printf("size of long long int : %d\n", sizeof(a));
    printf("size of long double : %d\n", sizeof(b));
    printf("size of char : %d\n", sizeof(ch));
}