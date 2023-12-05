#include "bsq.h"

void	ft_file(void)
{
	int		r;
	int		fd;
	char	buf[4096];

	fd = open("temddp", O_CREAT | O_RDWR | O_TRUNC, S_IWUSR | S_IRUSR);
	while ((r = read(0, buf, 4096)) > 0)
	{
		write(fd, buf, r);
	}
	close(fd);
}
