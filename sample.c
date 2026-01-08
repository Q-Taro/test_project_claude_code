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

class Sample {
public:
    void method() {
        printf("Sample method\n");

    }

}

int main() {
    functionA();
    functionB();
    Sample s = Sample();
    s.method
        return 0;
}
