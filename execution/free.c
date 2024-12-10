#include "minishell.h"

void	double_free(char **str)
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

void free_file(t_file *file)
{

	t_file	*tmp;

	while (file)
	{
		tmp = file->next;
		free(file->name);
		free(file);
		file = tmp;
	}
}


void	free_exit(char *str, t_us_var var, int n, t_data *data)
{
	(void)data;
	double_free(var.path_spt) ;
	write(2,str,ft_strlen(str)) ;
	exit(n)  ;

}

void	free_var(t_us_var *var)
{
	int	i;

	i = 0;
	if (!var)
		return ;
	if (var->pipe)
	{
		while (var->pipe[i])
		{
			free(var->pipe[i]);
			i++;
		}
		free(var->pipe);
	}
	if (var->id)
		free(var->id);
}

void	free_and_exit(t_data *data, t_us_var var, t_env *envp, int exit_s)
{
	free_data(data);
	free_envp(envp);
	free_var(&var);
	rl_clear_history();
	exit(exit_s);
}



void	free_data(t_data *data)
{
	t_data	*tmp;

	while (data)
	{
		tmp = data->next;
		ft_free1(data->cmd);
		free_file(data->file);
		free(data);
		data = tmp;
	}
	free(data);
}

void	free_envp(t_env *envp)
{
	t_env	*tmp;

	double_free(envp->env);
	while (envp)
	{
		tmp = envp;
		envp = envp->next;
		free(tmp->var);
		if (tmp->value)
			free(tmp->value);
		if (tmp->pwd)
			free(tmp->pwd);
		free(tmp);
	}
}