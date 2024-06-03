#include <stdio.h>


struct student{
    int num;
    char name;
    char sex;
};
struct student1{
    int num;
    char name;
    char sex;
};
struct student2{
    int num;
    char name;
    char sex;
};
int main() {
    struct student s1;
    struct student1 s2;
    struct student2 s3;
    printf("sizeof=%d\n",sizeof(s1));
    printf("sizeof=%d\n",sizeof(s2));
    printf("sizeof=%d\n",sizeof(s3));
    return 0;
}
