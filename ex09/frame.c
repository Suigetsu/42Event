#include <stdio.h>

int main(int ac, char **av)
{
	int word_len;
	int count;
	int	word_c;
	int i;
	int j;
	int	frame;

	count = 0;
	word_len = 0;
	word_c = 0;
	i = 1;
	j = 0;
	frame = 0;
	if (ac > 1)
	{
		while (av[i])
		{
			count = 0;
			j = 0;
			while (av[i][j] && av[i][j] != ' ')
			{
				count++;
				j++;
			}
			if (count > word_len)
				word_len = count;
			i++;
			word_c++;
		}
		frame = word_len + 2;
		i = 0;
		while (i < frame)
		{
			printf("*");
			i++;
		}
		printf("\n");
		i = 1;
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			printf("*%s*\n", av[i++]);

		}
		i = 0;
		while (i < frame)
		{
			printf("*");
			i++;
		}
		printf("\n");
		return (0);
	}
}