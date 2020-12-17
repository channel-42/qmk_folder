#include <stdio.h>
#include "wpm.h"

char buff[20];

const char* read_wpm(void){
  sprintf(buff, "WPM: %d", get_current_wpm());
  return buff;
}
