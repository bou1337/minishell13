
#include "minishell.h"


void	ft_free1(char **str)
{
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}



void	free_lexer(t_lexer *lexer)
{
	t_lexer	*next;

	next = lexer;
	if (!lexer)
		return ;
	while (next != NULL)
	{
		lexer = next->next;
		if (next->data)
			free(next->data);
		free(next);
		next = lexer;
	}
}