#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
/* fork a child process */
fork();
/* fork another child process */
fork();
/* and fork another */
fork();
printf("PID = %d\n", getpid());
  
return 0;
}

/*
  ~/fork$ gcc main.cpp
  ~/fork$ ./a.out 
  PID = 102
  PID = 104
  PID = 106
  ~/fork$ PID = 103
  PID = 107
  PID = 109
  PID = 105
  PID = 108
*/