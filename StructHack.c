#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>
#include "unicodestruct.h"
//@Author HaydnK
//Githhub coderhk100
//A struct for holding a string of Unicode




//driver program
int main (void){
	setlocale(LC_ALL,"en_US.UTF-8");

	int size = 1000;//Size of UnicodeString

	list *string = malloc(sizeof(list)+sizeof(wchar_t)*size);
	


	string->size = size;
	string->index = 0;

	int value = L'\x019b';//Value of starting string
	
	fill(string,size,300);
	print(string);

	/*Note: Must use wprintf(L"%lc",args) instead of printf*/
	
	wprintf(L"%d\n",isEmpty(string));

	destroy(string);


}