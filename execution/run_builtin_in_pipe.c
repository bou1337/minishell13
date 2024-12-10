
#include "minishell.h"


int	run_builtin_in_pipe(t_data *data, t_env **envp, t_us_var var)
{
	int	flag;
	int	exit;

	flag = 0;
	if (!data->cmd || !data->cmd[0])
		free_and_exit(data, var,*envp,0);
	if (!is_builtin_command(data->cmd[0]))
		flag = 1;
	if (flag == 1)
	{
		if (var.outfd != -2)
			dup2(var.outfd, 1);
		else if (var.i < var.count_cmd - 1)
		{
			dup2(var.pipe[var.i][1], 1);
			close(var.pipe[var.i][0]);
			close(var.pipe[var.i][1]);
		}
		if (var.i > 0)
			close(var.pipe[var.i - 1][0]);
		run_builtin(data, envp);
		exit = (*envp)->exit;
		free_and_exit(data, var, *envp, exit);
	}
	return (0);
}