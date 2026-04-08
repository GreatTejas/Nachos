/* exec.c
 *	Simple program to test the exec system call.
 */

#include "syscall.h"
#define stdin 0
#define stdout 1

int main() {
    int pid;
    int i;
    pid = Exec("num_io");
    if (pid == 0) {
        for(i=0;i<10000000;i++)
        	PrintNum(pid);
    } 
    else
    {
	    for(i=0;i<10000000;i++)
		    PrintNum(pid);
    }
}
