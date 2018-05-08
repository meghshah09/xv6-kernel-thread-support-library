#include "types.h"
#include "user.h"
#include "procThread.h"

void *stack;
int tid;
int procThread_create(void)
{
    // add your implementation here ...
	 stack = malloc(4096);
	tid = clone(stack);
	
	//printf(1,"Tid is %d\n", tid);

	if (tid >= 0){
		return tid;
	}
	else{
		return -1;
	}
}


void procThread_exit(int ret_val)
{
    // add your implementation here ...
    thread_exit(ret_val);
    
}


void procThread_join(int tid, int * ret_val_p)
{
    // add your implementation here ...
    
    join(tid,ret_val_p,(void*)stack);
   free(stack);
}
