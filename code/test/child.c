#include "syscall.h"

int main() {
    int i;

    for (i = 0; i < 20; i++) {
        PrintNum(i);
    }

    Exit(0);
}
