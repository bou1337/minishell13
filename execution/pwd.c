#include "minishell.h"


int	pwd(t_data *data, t_env *env)
{
	char	*path;

	path = getcwd(NULL, 0);
	if (data->cmd[1] && data->cmd[1][0] == '-')
	{
		printf("minshell: pwd: %s: invalid option\n", data->cmd[1]);
		return (1);
	}
	if (path == NULL)
	{
		printf("%s\n", env->pwd);
		return (0);
	}
	printf("%s\n", path);
	free(path);
	return (0);
}