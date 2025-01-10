#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int		*ptr;
	int		a;
	char	*dir;
	int 	i;

	i = 0;
	a = 4;
	ptr = &a;
	*dir = &ptr;
	while (dir[i] != 0)
	{
		write(1, &dir[i], 1);
		i++;
	}
	printf("Direccion de memoria el puntero %p", ptr);
}