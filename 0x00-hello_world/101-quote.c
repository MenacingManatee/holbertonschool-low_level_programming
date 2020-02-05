#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
	char *dora={"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"};
	fwrite(dora,strlen(dora),1,stderr);
	return 1;
}
