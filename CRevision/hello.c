#include<stdio.h>
#include<stdbool.h>
#include "stdlib.h"
#include "myfunctions.c"
#define PIE 3.14
#define merge(a,b) a ## b 
extern int x2;
int x2 = 100;
int fun5(int x, int y);
void fun1(){
    //Data Types and Variables
    //char c, int d, float f, double lf, short h, signed d, unsigned u, long l, long long ll, long double ld.
    int a=5,b=4;
    printf("Sum=%d  Sub=%d Mul=%d", add(a,b), sub(a,b), mul(a,b));
    int c1=PIE;
    printf("c1=%d",c1);
    int RamaKrishna = 10;
    printf("\n Merge Rama and Krishna = %d \n", merge(Rama,Krishna));
    printf("File Name: %s \t Date: %s \t Time: %s \t Line Number: %d \n",__FILE__, __DATE__, __TIME__, __LINE__);
    bool a1[] = {true, false};
    printf("Boolean values of b1: %d %d", a1[0], a1[1]);
    return;
}
void fun2(){
    //inputs and outputs
    char s1[120];
    printf("Enter the String:");
    scanf("%[^\n]s",s1);
    printf("Recieved String: %s\n", s1);

    puts("Geeksfor ");
    puts("Geeks");

    fputs("Geeksfor ", stdout);
    fputs("Geeks", stdout);
    //storage_modifiers types
    auto float x1=0.5;
    register int x3=130;
    static int x4=140;
    float x=0.1;
    printf("x1=%lf, x2=%d, x3=%d, x4=%d ", x1, x2, x3, x4);
    if(x==0.5) printf("IF");
    else if(x==0.5f) printf("ELIF");
    else printf("ELSE");
}
void fun3(){
    //pointers
    int a = 4;
    int b = 5;
    int const *ptr = &a;
    printf("Val of ptr: %d", *ptr);
    ptr = &b;
    printf("Val of ptr: %d", *ptr);
    return;
}
void swap(int* x, int* y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    return;
}
void array1(int a[], int n){
    for(int i=0;i<n;i++)printf("\t %d", a[i]);
    printf("Inside the array1");
    printf("\n Size of the array: %d \n", n);
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    return ;
}
int fun5(int x, int y){
    return x+y;
}
int fun6(){
    int x = 2;
    void *ptr;
    printf("Wild Pointer declared (uninitialized)\n");
    ptr = malloc(sizeof(int));      // heap allocation (void pointer)
    *(int*)ptr = 10;                // cast required before dereferencing
    printf("Void Pointer: value = %d\n", *(int*)ptr);
    free(ptr);                      // frees heap memory
    printf("After free: ptr is dangling\n");
    ptr = NULL;
    printf("ptr set to NULL — safe now\n");
    return 0;
}
struct student {
    char *name;
    int id;
    int age;
};
int main() {
    struct student s1 = { "Raju", 1, 21 };
    printf("Name: %s\n", s1.name);
    printf("ID: %d\n", s1.id);
    printf("Age: %d\n", s1.age);
    return 0;
}