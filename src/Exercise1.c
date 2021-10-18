/*
1.	Input an array of n integers. Write a function to check whether
the array is symmetric or not (optional: use recursive)
Ex:
 ____________________________________ 
| Input: 1 2 3 2 1                   |
| Output: symmetric                  |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int arr[], int n){

	int i, j;
	int sym = 1;

	for(i = 0, j = n - 1; (i <= floor((n - 1) / 2)) && (j >= ceil((n - 1) / 2)); i++, j--){
		if(((arr[i] < arr[i + 1]) && (arr[j] > arr[j - 1])) || ((arr[i] > arr[i + 1]) && (arr[j] < arr[j - 1]))) sym = 0;
	}

	if(sym == 0) printf("asymmetric");
	else printf("symertric");
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex1(testcase, argc);
	
	return 0;
}
