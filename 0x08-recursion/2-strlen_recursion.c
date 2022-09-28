
/**
  *_strlen_recursion - prints length of a string
  *@s: string to be checked
  *Return: 0 if there is no string
  *        length of string
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
