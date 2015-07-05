#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cosql_kv.h"

int main()
{
	char* names[] = {"joe","smith","barney"};
	int values[] = {20,12,33};
	printf("Adding names in the data store ...\n");
	hash_table *q;
	q = init();
	int x=0,i=0;
	for(i=0; i<3; i++)
		add(q, names[i], values[i]);
	x = find(q, names[0]);
	printf("Found %s with value %d in the data store!\n", names[0], x);
	destroy(q);
}

