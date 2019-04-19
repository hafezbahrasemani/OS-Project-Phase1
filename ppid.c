#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  int childpid = fork();
  
  if(childpid < 0){
    printf(1, "fork failed!\n");
  }
  else if(childpid > 0)
  {
    printf(1, "I am parent %d \n", getpid());
    wait();		
  } 	
  else
  { 
     printf(1, "child : %d -> parent: %d\n", getpid(), getppid());	
  } 
 
  exit();		
}
