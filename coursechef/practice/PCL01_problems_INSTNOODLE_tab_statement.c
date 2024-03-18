//The first and only line of input contains two space-separated integers X and Y — the number of stoves and the number of minutes, respectively.
//Print a single integer, the maximum number of customers Chef can serve in Y minute.
#include <stdio.h>

int main(void) {
	// your code goes here

	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d",x*y);

}
