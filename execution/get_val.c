#include "minishell.h"

char	*get_val(t_env *env, char *str)
{
	char	*s;

	s = NULL;
	if (!str)
		return (NULL);
	while (env)
	{
		if (!ft_strcmp(env->var, str))
			s = env->value;
		env = env->next;
	}
	if (s == NULL)
		return (NULL);
	s = &s[1];
	if (*s == '\0')
		return (NULL);
	return (s);
}