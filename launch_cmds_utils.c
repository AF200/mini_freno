#include "minishell.h"

void	child_routine(t_data *data)
{
	prep_fd_in(data);
	prep_fd_out(data);
	execute_cmd(data);
	free_data(data);
	if (data->envp != NULL)
		free_two_d_arr(data->envp);
	exit (0);
}

void	wait_routine(int pid)
{
	int	wstatus;

	waitpid(pid, &wstatus, 0);
	pid = 0;
	while (pid >= 0)
		pid = wait(NULL);
	if (WIFEXITED(wstatus))
		g_exit_status = WEXITSTATUS(wstatus);
}
