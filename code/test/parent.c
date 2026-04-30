#include "syscall.h"

int main() {
    int i;

    // Create children with different priorities
    ExecWithPriority("../test/child", 50);  // low
    ExecWithPriority("../test/child", 30);  // high
    ExecWithPriority("../test/child", 10);  // medium

    // Parent work (to observe scheduling)
    for (i = 0; i < 20; i++) {
        PrintString("Hi");   // distinguish parent output
    }

    Exit(0);
}
