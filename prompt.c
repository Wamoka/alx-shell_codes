#include <stdio.h>
int main(void)
{
	char buffer[32];
	char *b = buffer;
	size_t bufsize = 32;
	printf("$");
	getline(&b,&bufsize,stdin);
	printf("%s", buffer);

}	
