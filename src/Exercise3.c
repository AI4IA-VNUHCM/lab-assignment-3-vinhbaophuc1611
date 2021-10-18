/*
3.	Input an array of n integers. Find the largest sorted sub array
(sorted array increasing/decreasing and has the largest number of elements)
Ex:
 _____________________________________________
| Input: 2 5 3 4 8 9 7 6 10                   |
| Output: Increasing 3 4 8 9 Decreasing 9 7 6 |
|_____________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printLogestIncSubArr(int arr[], int n){
    
    int max = 1, len = 1, maxIndex = 0;
    for (int i = 1; i < n; i++){
        if (arr[i] > arr[i - 1])
            len++;
        else{
            if (max < len){
                max = len;
                maxIndex = i - max;
            }
                    
            len = 1;   
        }   
    }
    
    if (max < len){
        max = len;
        maxIndex = n - max;
    }
 
    for (int i = maxIndex; i < max + maxIndex; i++) printf("%d ", arr[i]);
}

void printLogestDecSubArr(int arr[], int n){
    
    int max = 1, len = 1, maxIndex = 0;
    for (int i = 1; i < n; i++){
        if (arr[i] > arr[i + 1])
            len++;
        else{
            if (max < len){
                max = len;
                maxIndex = i - max;
            }
                    
            len = 1;   
        }   
    }
    
    if (max < len){
        max = len;
        maxIndex = n - max;
    }
 
    for (int i = maxIndex + 1; i < max + maxIndex + 1; i++) printf("%d ", arr[i]);
}

void Ex3(int in_arr[], int n){
	
	printf("Increasing ");
	printLogestIncSubArr(in_arr, n);
	printf("Decreasing ");
	printLogestDecSubArr(in_arr, n);

}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex3(testcase, argc);
	
	return 0;
}
