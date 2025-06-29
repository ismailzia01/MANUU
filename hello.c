#include<stdio.h>
#include<unistd.h>
int main() {
  char *str;//
  str = malloc(10);
  write(STDIN_FILENO, &str, 10);
  return 0;
}
