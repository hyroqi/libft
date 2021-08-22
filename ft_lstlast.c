#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;

	i = (ft_lstsize(lst) - 1);
	while(--i)
	{
		lst = lst->next;
	}
	return (lst);
}