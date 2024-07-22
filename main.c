# define CHAP 1 //控制章节输出，在对应章节修改数字即可


#include <stdio.h>
#include "01intro/intro.h"
#include "02list/list.h"

int main() {
    int a = 10;
    int b = 12;
    switch (CHAP) {
        case 1:
            printf("recu %d\n", recu(2));
            break;
        case 2:
            printf("helloworld %d\n", add(a, b));
            break;
    }
    return 0;
}