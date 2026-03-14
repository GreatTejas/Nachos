#include "syscall.h"

int main() {
    int i= -15;
    int result = Abs(i);
    PrintNum(result);
    Halt();
    /* not reached */
}
