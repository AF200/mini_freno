#include "minishell.h"

void	set_word_and_flag(t_split *split)
{
	split->word = 1;
	split->flag *= -1;
}
