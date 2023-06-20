#include <stdio.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content)
{
    t_list *new;
    new = malloc(sizeof(t_list));
    new->content = content;
    new->next = NULL;
    return (new);
}

int main(void)
{
    printf("%p¥n", ft_lstnew(&"A"));
    return (0);
}