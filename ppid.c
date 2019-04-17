#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  printf("pid: %d -> ppid: %d\n", getpid(), getppid());

  exit();		
}
