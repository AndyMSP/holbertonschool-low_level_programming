/**
 * _strpbrk - empty function
 * @s: pointer to character
 * @accept: pointer to character
 *
 * Return: pointer to a character
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == accept)
		return (s);

	return (accept);
}
