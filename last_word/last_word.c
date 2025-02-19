#include <unistd.h>

void last_word(char *str)
{
	int i = 0, ti = 0;

	while(str[i])
	{
		if(str[i] == ' ' && (str[i + 1] >= 33 && str[i + 1] < 126))
			ti = i + 1;
		i++;
	}

	while (str[ti] >= 33 && str[ti] <= 127)
	{
		write (1, &str[ti], 1);
		ti++;
	}
}

int main(int ac, char *av[])
{
	if (ac == 2)
		last_word(av[1]);
	write (1, "\n", 1);
	return (0);
}
