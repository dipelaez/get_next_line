#include "get_next_line.h"

int	main(void)
{
	int		fd;

	fd = open("text.txt", O_RDONLY);
	
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	
}
