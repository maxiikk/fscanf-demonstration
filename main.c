#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *p1;
	p1 = fopen("text.txt", "w+");
	fputs("Hey wassup", p1);
	char str1[10], str2[10];
	rewind(p1);
	fscanf(p1, "%s %s", str1, str2);
	FILE *p2;
	p2 = fopen("result.txt", "w+");
	fprintf (p2, "%s %s\n", str1, str2);
	fclose(p1);
	fclose(p2);
	remove("text.txt");
	return 0;
}