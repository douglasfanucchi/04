int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isspace(char c)
{
	return (c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
		|| c == ' ');
}

void	trim(char *str)
{
	int	count;
	int	i;
	int	j;

	count = 0;
	i = 0;
	while (ft_isspace(str[i++]))
		count++;
	i = 0;
	while (str[count + i])
	{
		str[i] = str[count + i];
		i++;
	}
	str[i] = '\0';
	j = ft_strlen(str) - 1;
	while (ft_isspace(str[j]))
		j--;
	str[j + 1] = '\0';
}

int	ft_is_nbr(char c)
{
	return (c >= 48 && c <= 57);
}

int	ft_atoi(char *str)
{
	int	store;
	int	signal;

	store = 0;
	signal = 1;
	trim(str);
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	while (*str)
	{
		if (ft_isspace(*str))
		{
			str++;
			continue ;
		}
		if (!ft_is_nbr(*str))
			return (0);
		store *= 10;
		store += *str++ - '0';
	}
	return (store * signal);
}
