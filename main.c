#include "monty.h"
/**

*/
int main(int argc, char *argv[])
{
	char *cualquiercosa;
	(void) argc;

	cualquiercosa = openfile(argv[1]);
	printf("%s\n", cualquiercosa);
	return (0);
}