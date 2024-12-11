#include "minishell.h"
extern t_global g	;


void	ft_exit(t_data *data, t_env *envp)
{
	int	exit_s;

	if (data->cmd[1] == NULL)
		exit_s = envp->exit;
	else if (data->cmd[2] != NULL)
	{
		print_error1("minishell", ":exit: too ", "many arguments\n");
		return ;
	}
	else
		exit_s = ft_atoi(data->cmd[1]);
	if (g.flg != 1)
		printf("exit\n");
	free_data(data);
	free_envp(envp);
	free_var(g.var);
	exit(exit_s);
}
