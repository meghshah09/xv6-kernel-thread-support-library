#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {

  void *stack = malloc(4096);

  int tid = clone(stack);
  printf(1, "tid: %d\n", tid); // should print two times(0 & x)

  exit();
}