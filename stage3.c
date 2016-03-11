#include "types.h"
#include "stat.h"
#include "user.h"
#include "signal.h"

static int numTraps=0;
static int totalTrapTime=0;
void handle_signal(int signum)
{
 numTraps++;
totalTrapTime+= uptime();
if(totalTrapTime == 10000){
   printf(1,"Traps performed: %d\n",numTraps);
  printf(1,"Total Elapsed Time:\n",totalTrapTime);
  print(1,"Average Time Per Trap\n");
 }
}

int main(int argc, char *argv[])
{
	signal(SIGFPE, handle_signal);
	
	printf(1, "Traps Performed: XXXX\n");
	printf(1, "Total Elapsed Time: XXXX\n");
	printf(1, "Average Time Per Trap: XXXXX\n");

	exit();
}
