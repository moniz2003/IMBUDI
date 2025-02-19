#include <stdlib.h>

int	deli(int c)
{
	return(c == ' ' || c == '\t' || c == '\n');
}

char	**ft_split(char *s)
{
	int x;
	int y = 0;
	int len = 0;
	char **m;
	
	while(*s && deli(*str))
		s++;
	while(s[len])
		len++;
	m = malloc(sizeof(char *) * len + 1);
	while(*s)
	{
		x = 0;
		m[y] = malloc(sizeof(char *) * len + 1);
		while(!*s && !deli(*s))
			m[y][x++]
	}
}
