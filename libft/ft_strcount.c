/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcount.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tide-jon <tide-jon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/30 20:48:03 by tide-jon       #+#    #+#                */
/*   Updated: 2019/03/30 20:48:28 by tide-jon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcount(const char *s, char c)
{
	int	i;
	int strcount;

	strcount = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] != '\0' || s[i - 1] != c)
			strcount++;
	}
	return (strcount);
}
