#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
  int result;
  if (argc >= 2)
  {
    printf(2, "getreadcount: Too many arguments\n");
    exit();
  }

  if ((result = getreadcount()) == -1) {
    printf(2, "getreadcount: Failed to read count\n");
    exit();
  }

  printf(2, "getreadcount: read count is %d\n", result);
  exit();
}
