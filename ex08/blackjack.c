#include <stdio.h>

int	main(int ac, char **av)
{
	int		i;
	int		sum;

	i = 0;
	sum = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] == '2')
				sum += 2;
			else if (av[1][i] == '3')
				sum += 3;
			else if (av[1][i] == '4')
				sum += 4;
			else if (av[1][i] == '5')
				sum += 5;
			else if (av[1][i] == '6')
				sum += 6;
			else if (av[1][i] == '7')
				sum += 7;
			else if (av[1][i] == '8')
				sum += 8;
			else if (av[1][i] == '9')
				sum += 9;
			else if (av[1][i] == 'T' || av[1][i] == 'J' || av[1][i] == 'D' || av[1][i] == 'K')
				sum += 10;
			else if (av[1][i] == 'A')
			{
				if (sum > 10)
					sum += 1;
				else
					sum += 11;
			}
			else
				return(1);
			i++;
		}
		if (sum == 21)
			printf("Blackjack!\n");
		else
			printf("%d\n", sum);
	}
	return (0);
}