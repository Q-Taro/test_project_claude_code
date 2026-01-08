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

int functionC() {
    printf("Function C\n");
    return 0;
}
struct Sample {
    int data;
};

//開発者版 (developer edition) のみ有効 なメソッド
int main() {
    functionA();
    functionB();
    functionA();
    Sample s = {10};
    s.method
        return 0;
}







