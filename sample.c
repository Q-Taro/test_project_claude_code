#include <stdio.h>
void functionB();
void functionA() {
    printf("Function A\n");
    functionB();
}

void functionB() {
    printf("Function B\n");
    int* p = NULL;
    *p = 42; // ここでクラッシュする
}

struct Sample {
    int data;
};

int main() {
    functionA();
    functionB();
    struct Sample s = {0};
    return 0;
}




