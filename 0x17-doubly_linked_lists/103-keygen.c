#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * findLargest - finds the largest character code from the username
 *
 * @username: username
 * @length: length of username
 *
 * Return: the largest character code
 */
int findLargest(char *username, int length)
{
	int i;
	int largestChar;
	unsigned int randNum;

	i = *username;
	largestChar = 0;

	while (largestChar < length)
	{
		if (i < username[largestChar])
			i = username[largestChar];
		largestChar += 1;
	}

	srand(i ^ 14);
	randNum = rand();

	return (randNum & 63);
}

/**
 * multiplyChars - multiplies each character code of the username
 *
 * @username: username
 * @length: length of username
 *
 * Return: multiplied character code
 */
int multiplyChars(char *username, int length)
{
	int i;
	int multipliedChar;

	i = multipliedChar = 0;

	while (multipliedChar < length)
	{
		i = i + username[multipliedChar] * username[multipliedChar];
		multipliedChar += 1;
	}

	return (((unsigned int)i ^ 239) & 63);
}

/**
 * generateRandomChar - generates a random character
 *
 * @username: username
 *
 * Return: a random character
 */
int generateRandomChar(char *username)
{
	int i;
	int randch;

	i = randch = 0;

	while (randch < *username)
	{
		i = rand();
		randch += 1;
	}

	return (((unsigned int)i ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int length, ch, vch;
	long alphabet[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (length = 0; argv[1][length]; length++)
		;
	/* ----------- findLargest ----------- */
	keygen[0] = ((char *)alphabet)[(length ^ 59) & 63];
	/* ----------- multiplyChars ----------- */
	ch = vch = 0;
	while (vch < length)
	{
		ch = ch + argv[1][vch];
		vch = vch + 1;
	}
	keygen[1] = ((char *)alphabet)[(ch ^ 79) & 63];
	/* ----------- generateRandomChar ----------- */
	ch = 1;
	vch = 0;
	while (vch < length)
	{
		ch = argv[1][vch] * ch;
		vch = vch + 1;
	}
	keygen[2] = ((char *)alphabet)[(ch ^ 85) & 63];
	/* ----------- findLargest ----------- */
	keygen[3] = ((char *)alphabet)[findLargest(argv[1], length)];
	/* ----------- multiplyChars ----------- */
	keygen[4] = ((char *)alphabet)[multiplyChars(argv[1], length)];
	/* ----------- generateRandomChar ----------- */
	keygen[5] = ((char *)alphabet)[generateRandomChar(argv[1])];
	keygen[6] = '\0';

	for (ch = 0; keygen[ch]; ch++)
		printf("%c", keygen[ch]);
	return (0);
}
