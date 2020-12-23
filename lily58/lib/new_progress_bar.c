#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "action.h"

char *progressbar_str = NULL;
int progressbar_indx = 0;

// head is the tip of the bar and body the trailing part
void set_progressbar(char *head, char *body) {
  progressbar_str = (char *)malloc(128 * sizeof(char));
  // clear bar when end of display is reached
  if (progressbar_indx == 20){
    progressbar_str = "";
    progressbar_indx = 0;
  }
  for (int i = 0; i < progressbar_indx; i++) {
    strcat(progressbar_str, body);
  }
  strcat(progressbar_str, head);
  progressbar_indx++;
}

// to print to oled
const char *read_progressbar(void) { return progressbar_str; }
