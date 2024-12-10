
#include "minishell.h"
extern  t_global g ;

void	handle_CTRL_C(int sig)
{
	(void)sig;
	printf("\n");
	g.exit_s = 130;
	rl_on_new_line();
	rl_replace_line("", 0);
	rl_redisplay();
	return ;
}

void	f(int sig)
{
	(void)sig;
	free_data(g.data);
	free_envp(g.env);
	clear_history();
	exit(130);
}

void	child_handler(int signum)
{
	(void)signum;
	exit(130);
}

void	child_handler1(int signum)
{
	(void)signum;
	exit(131);
}









