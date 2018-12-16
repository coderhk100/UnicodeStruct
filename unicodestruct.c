#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>
#include "unicodestruct.h"


//Printing the struct
void print(list* string){
	int size = string->size;
	for(int i = 0; i < size;i++){
		wprintf(L"%lc", string->array[i]);
	}
	wprintf(L"\n");
}

//Returns number of characters stored in struct
int getSize(list *string){
	return string->size;
}

//fills the struct with unicode characters staring with value x
void fill(list *string,size_t size,int x){
	for(int i =0; i < size;i++){
		string->array[i]=x+i;
	}
	string->index+=size;
}

//destroys the struct and free the memory
list* destroy(list *string){
	free(string);
	return NULL;
}

bool contains(list *string,int x){
	int size = string->size; 
	for(int i = 0; i < size;i++){
		if(string->array[i]==x)
			return true;
	}
	return false;
}

bool isEmpty(list *string){
	return (string->index==0?true:false);
}