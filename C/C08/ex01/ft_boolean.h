#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>

typedef enum { FALSE, TRUE } t_bool;

#define EVEN(n) ((n) % 2 == 0)
#define EVEN_MSG "Nombre paire des arguments. \n"
#define ODD_MSG "Nombre impaire des arguements. \n"
#define SUCCESS 0

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
