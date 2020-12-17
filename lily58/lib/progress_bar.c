#include <stdio.h>
#include "action.h"

char progressbar_str[21] = {};
int progressbar_indx = 0;

// head is the tip of the bar and body the trailing part
void set_progressbar(char head, char body) {
  // clear bar when end of display is reached
  if (progressbar_indx == sizeof(progressbar_str) - 1) {
    progressbar_indx = 0;
    for (int i = 0; i < sizeof(progressbar_str) - 1; i++) {
      progressbar_str[i] = ' ';
    }
  }
  if (progressbar_indx == 0) {
    progressbar_str[0] = head;
  } else {
    progressbar_str[progressbar_indx-1] = body;
    progressbar_str[progressbar_indx] = head;
  }
  progressbar_indx++;
}

// to print to oled
const char *read_progressbar(void) { return progressbar_str; }
