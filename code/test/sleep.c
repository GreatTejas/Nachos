#include "syscall.h"

int main() {
    PrintString("Start\n");

    Sleep(10000000000);

    PrintString("After sleep\n");

    Exit(0);
}
