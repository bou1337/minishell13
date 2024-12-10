
#include "minishell.h"

extern t_global	g;
void	handle_signal1(int sig)
{
	(void)sig;
	printf("\n");
	g.exit_s = 130;
	rl_on_new_line();
	rl_replace_line("", 0);
	rl_redisplay();
	return ;
}