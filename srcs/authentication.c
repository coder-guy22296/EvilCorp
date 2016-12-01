#include "fdf.h"

t_user  *new_user(char *fullname, char *username, char *password, char *role)
{
    t_user *user = (t_user *)malloc(sizeof(t_user));
    user->fullname = fullname;
    user->username = username;
    user->password = password;
    user->role = role;
    return (user);
}

int is_authenticated(t_user *user, char *username, char *password)
{
    if (ft_strcmp(username, user->username) == 0
        && ft_strcmp(password, user->password) == 0)
    {
        return (1);
    }
    return (0);
}

t_user *login(t_list *users, char *username, char *password)
{
    t_list	*tmp;
    t_list  *lst;
    t_user  *user;
    
    lst = users;
    while (lst != NULL)
    {
        user = ((t_user  *)lst->content);
        tmp = lst->next;
        if (is_authenticated(user, username, password))
            return (user);
        lst = tmp;
    }
    return (NULL);
}
