#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
//@Author HaydnK
//A struct for holding a string of Unicode
typedef struct{
	int size;
	 wchar_t array[];
}list;


//Printing the struct
void print(list* temp){
	int size = temp->size;
	for(int i = 0; i < size;i++){
		wprintf(L"%lc", temp->array[i]);
	}
	wprintf(L"\n");
}

//Returns number of characters stored in struct
int getSize(list *temp){
	return temp->size;
}

//fills the struct with unicode characters staring with value x
void fill(list *temp,size_t size,int x){
	for(int i =0; i < size;i++){
		temp->array[i]=x+i;
	}
}

//destroys the struct and free the memory
list* destroy(list *temp){
	free(temp);
	return NULL;
}


//driver program
int main (void){
	int size = 1000;//Size of UnicodeString

	list *temp = malloc(sizeof(list)+sizeof(wchar_t)*size);
	setlocale(LC_ALL,"en_US.UTF-8");
	temp->size = size;

	int value = L'\x019b';//Value of starting string
	//printf("%d\n",value );
	fill(temp,size,300);
	print(temp);
	
	destroy(temp);


}