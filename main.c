#include <stdio.h>
#include <string.h>
#include <>

int main(int argc, char *argv[]) {
  if (strcmp("--show", argv[1]) == 0) {
    if (strcmp("all", argv[1]) == 0) {
      // TODO CODE THE FUNCTION OF THIS
    } else {
      // TODO CODE THE FUNCTION OF THIS
    }
  } else if (strcmp("--help", argv[1]) == 0) {
    printf("This is The Help Menu\n");
  } else {
    printf("This Command is not available\n");
    printf("Try the `--help` command\n");
  }
}
