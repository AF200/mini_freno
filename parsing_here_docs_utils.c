#include "minishell.h"

int	dup_stdin_back(int tmp_fd_in)
{
	if (g_exit_status == 130)
	{
		dup2(tmp_fd_in, STDIN_FILENO);
		return (ERROR);
	}
	return (OK);
}
