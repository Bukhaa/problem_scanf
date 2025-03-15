#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main() {
   printf("hello");
   //fflush(stdout);
   pid_t pid = fork();

   return 0;
}
