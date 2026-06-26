#include <dirent.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (strcmp("--show", argv[1]) == 0) {
    if (argc == 3) {
      if (strcmp("all", argv[2]) == 0) {
        DIR *dr;
        struct dirent *en;

        dr = opendir(".");
        if (dr) {
          while ((en = readdir(dr)) != NULL) {
            printf("%s\n", en->d_name);
          }
          closedir(dr);
        }
        if (strcmp("costume", argv[2]) == 0) {

        } else {
          printf("Could not open directory\n");
        }
      }
    } else {
      printf("You Should Try --show all|custome\nfor more information try "
             "`--help` argument\n");
    }
  } else if (strcmp("--help", argv[1]) == 0) {
    printf("This is The Help Menu\n");
  } else {
    printf("This Command is not available\n");
    printf("Try the `--help` command\n");
  }
}
