
/*
Sudoku_Map_IO.c
*/


#ifndef SUDOKU_MAP_IO

#define SUDOKU_MAP_IO


#include <stdio.h>
#include <stdlib.h>

void ScanMap(int *arr, int len)
{
	int z, max=len*len;
	for(z=0; z<max; z++)
		scanf("%d", arr+z);
}

void PrintMap(int *arr, int len)
{
	int z, max=len*len;
	for(z=0; z<max; z++)
	{
		printf("%d ", *(arr+z));
		if( (z+1)%len==0 )printf("\n");
	}
}



void ScanMapF(char *FName, int *arr, int len)
{
	FILE *fp=NULL;
	if( (fp=fopen(FName, "r"))==NULL )
	{
		printf("打开 %s 失败！\n");
		system("pause");
		exit(0); 
	}
	
	int z, max=len*len;
	for(z=0; z<max; z++)
		fscanf(fp, "%d", arr+z);
	
	fclose(fp);
}

void PrintMapF(char *FName, int *arr, int len)
{
	FILE *fp=NULL;
	if( (fp=fopen(FName, "a"))==NULL )
	{
		printf("打开 %s 失败！\n");
		system("pause");
		exit(0); 
	}
	
	int z, max=len*len;
	for(z=0; z<max; z++)
	{
		fprintf(fp, "%d ", *(arr+z));
		if( (z+1)%len==0 )fprintf(fp, "\n");
	}
	
	fclose(fp);
}

void PrintStrF(char *FName, const char *str)
{
	FILE *fp=NULL;
	if( (fp=fopen(FName, "a"))==NULL )
	{
		printf("打开 %s 失败！\n");
		system("pause");
		exit(0); 
	}
	
	fprintf(fp, "%s", str);
	
	fclose(fp);
}


#endif

