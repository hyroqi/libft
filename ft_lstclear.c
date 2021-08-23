#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*buf;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		buf = (*lst)->next;
		ft_lsdelone(*lst, del);
		*lst = buf;
	}
}
