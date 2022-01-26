#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main (int argc, char *argv[])
{
  char buffer[100] = "";
  int fd = open ("/dev/chardev", O_RDONLY);
  if (fd < 0)
  {
    fprintf (stderr, "Error to open file\n");
    return EXIT_FAILURE;
  }


  read (fd, buffer, sizeof (buffer) - 1);

  printf ("%s\n", buffer);

  return EXIT_SUCCESS;
}
