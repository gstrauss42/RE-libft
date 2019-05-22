#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcat(char *s1, const char *s2, size_t n)
{
	int i, a, b;
	char *ret;
	i = 0;
	a = 0;
	while(s1[i] != '\0')
		i++;
	while(s2[b] != '\0')
		b++;
	ret = (char *)malloc((i + b + 1) * sizeof(char));
	i = 0;
	while(s1[i] != '\0')
	{
		ret[i] = s1[i];
		i++;
	}
	while(s2[a] != '\0' && a < n)
	{
		ret[i] = s2[a];
		i++;
		a++;
	}
	ret[i] = '\0';
	return(ret);
}

int main()
{
	char a[12] = "Hello there";
	int n;
	n = 1;
	char b[60] = "He                                     llo";
	printf("%s", ft_strcat(a, b, n));
	return(0);
}