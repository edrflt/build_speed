#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	for (int i = 0; i < argc; ++i)
	{
		char *test = malloc(rand());
		sprintf(test, "%d %s %lu\n", i, argv[i], strlen(argv[i]));
		printf("%s", test);
		free(test);
	}

	int a = rand();

	while (a > 0)
	{
		printf("%d", a);
		--a;
	}

	return 0;
}
