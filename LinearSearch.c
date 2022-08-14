/*
 ============================================================================
 Name        : Stack.c
 Author      : Ammar Moataz
 Version     :
 Copyright   :
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 6

int linearSearchArray(int arr[], int size,int key){
	for(int i = 0; i< size; i++){
		if(arr[i] == key)
			return i;
	}
	return -1;
}


int main(void) {
	int arr[ARR_SIZE]={2,3,1,9,7,8};
	printf("%d", searchArray(arr, ARR_SIZE, 9));


	return 0;
}
