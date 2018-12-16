#ifndef UNICODESTRUCT_H
#define UNICODESTRUCT_H
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct{
	int size;
	int index;
	 wchar_t array[];
}list;


void print(list* string);

int getSize(list* string);

void fill(list *string,size_t size,int x);

list* destroy(list *string);

bool contains(list *string,int x);

bool isEmpty(list *string);


#endif