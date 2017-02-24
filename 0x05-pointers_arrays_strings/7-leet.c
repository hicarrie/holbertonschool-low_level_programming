/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	char low[] = {'a', 'e', 'o', 't', 'l'};
	char up[] = {'A', 'E', 'O', 'T', 'L'};
	char n[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == low[j] || s[i] == up[j])
				s[i] = n[j];
		}
	}
	return (s);
}
