#include <stdio.h>
int	ft_atoi(char *str);

int	main()
{
	char test[] = "      ---+----+-+23232323";
	printf("%d", ft_atoi(test));
}