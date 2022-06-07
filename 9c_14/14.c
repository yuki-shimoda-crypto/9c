#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	foo;

	foo = 'A';
	printf("foo == A\n");
	if (isalnum(foo))
		printf("foo == alnum\n");
	else
		printf("foo != alnum\n");
	if (isalnum(foo))
		printf("foo == isalnum\n");
	else
		printf("foo != isalnum\n");
	if (isdigit(foo))
		printf("foo == isdigit\n");
	else
		printf("foo != isdigit\n");
	if (isxdigit(foo))
		printf("foo == isxdigit\n");
	else
		printf("foo != isxdigit\n");
	if (isalpha(foo))
		printf("foo == isalpha\n");
	else
		printf("foo != isalpha\n");
	if (isupper(foo))
		printf("foo == isupper\n");
	else
		printf("foo != isupper\n");
	if (islower(foo))
		printf("foo == islower\n");
	else
		printf("foo != islower\n");
	if (ispunct(foo))
		printf("foo == ispunct\n");
	else
		printf("foo != ispunct\n");
	if (isspace(foo))
		printf("foo == isspace\n");
	else
		printf("foo != isspace\n");
}
// isalnum 	英数字 	A～Z a～z 0～9
// isdigit 	10進数 	0～9
// isxdigit 	16進数 	A～F a～f 0～9
// isalpha 	英字 	A～Z a～z
// isupper 	英大文字 	A～Z
// islower 	英小文字 	a～z
// ispunct 	記号 	!"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
// isspace 	スペース 	0x09～0x0D 0x20
