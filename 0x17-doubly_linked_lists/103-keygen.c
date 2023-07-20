#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * biggest_number - finds the biggest number
 * @user: username
 * @len: length of username
 * Return: the biggest number
 */
int biggest_number(char *user, int len)
{
	int c;
	int c1;
	unsigned int rand_num;

	c = *user;
	c1 = 0;

	while (c1 < len)
	{
		if (c < user[c1])
			c = user[c1];
		c1 += 1;
	}

	srand(c ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * multiply - multiplies each char of username
 * @user: username
 * @len: length of username
 * Return: multiplied char
 */
int multiply(char *user, int len)
{
	int c;
	int c1;

	c = c1 = 0;

	while (c1 < len)
	{
		c = c + user[c1] * user[c1];
		c1 += 1;
	}

	return (((unsigned int)c ^ 239) & 63);
}

/**
 * random_char - generates a random char
 * @user: username
 * Return: a random char
 */
int random_char(char *user)
{
	int c;
	int c1;

	c = c1 = 0;

	while (c1 < *user)
	{
		c = rand();
		c1 += 1;
	}

	return (((unsigned int)c ^ 229) & 63);
}

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, c, c1;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	c = c1 = 0;
	while (c1 < len)
	{
		c = c + argv[1][c1];
		c1 = c1 + 1;
	}
	keygen[1] = ((char *)alph)[(c ^ 79) & 63];
	c = 1;
	c1 = 0;
	while (c1 < len)
	{
		c = argv[1][c1] * c;
		c1 = c1 + 1;
	}
	keygen[2] = ((char *)alph)[(c ^ 85) & 63];
	keygen[3] = ((char *)alph)[biggest_number(argv[1], len)];
	keygen[4] = ((char *)alph)[multiply(argv[1], len)];
	keygen[5] = ((char *)alph)[random_char(argv[1])];
	keygen[6] = '\0';
	for (c = 0; keygen[c]; c++)
		printf("%c", keygen[c]);
	return (0);
}
