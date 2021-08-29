#include <stdio.h>
#include <stdlib.h>

/* Made by Dev master */

int main() {

	int filler = 0;
	
	int prev = 1, current = 2, util = 0;
	
	// 1 is in the suit but i've juste choosen to omit that
	
	printf("The following are numbers of Fibonacci suit : > ");
		
		printf("%d ",prev);
		printf(" %d ",current); // these two last lines are just for showing basic numbers of the suit before starting the treatment
	
	for( filler = 0 ; filler < 10 ; filler++){ // this loop is for giving ten Fibonacci numbers, if you swift to 20 it will give you ten more numbers
		
		/*
		
		===========Algorithm==============
		
		-prev is 1 at the start
		-current is 2 at the start
		-the we use util like a viewer to keep the value of current before its value overwriting == this case util = 2
		-then we set current to be sum of prev and itself
		-then we set prev to have the value of util which is the old value of current before overwriting
		
		we start the same process many times we want and we get as much Fibonacci numbers
		
		*/
		
		util = current; 
		
		current = current + prev;
		
		prev = util;
		
		printf("%d ",current);
		
		
		
	}

}
