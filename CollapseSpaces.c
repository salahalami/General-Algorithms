/*
 *  Copyright (C) 2015 Salah Alami. All rights reserved.
 *	Source name : function to collapse group of spaces to one space.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

char* CollapseSpaces(char* line)
{
	int l = strlen(line);
	if(l > MAX_LINE_LENGTH) return NULL;
	static char clone[MAX_LINE_LENGTH];
	int i, j = 0;
	for(i = 0;i < l;)
	{
		if(line[i] != ' ')
			clone[j] = line[i];
		else
		{
			clone[j] = ' ';
			while(line[i] == ' ')i++;
			i--;
		}
		i++; j++;
	}
	clone[j] = '\0';
	return clone;
}

int main()
{
	char instruction[256];
	gets(instruction);
	char* str = CollapseSpaces(instruction);
	puts(str);
	
	return 0;
}
