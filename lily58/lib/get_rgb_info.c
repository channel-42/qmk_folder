#include <stdio.h>
#include <stdlib.h>

#include "rgblight.h"

char rgb_str[24];

char *mode_to_str(int mode) {
  //converts mode int to string for oled
  if (!mode) {
    return "off";
  } else if (mode == 1) {
    return "static";
  } else if (2 <= mode && mode <= 4) {
    return "rainbow";
  }else if (5 <= mode && mode <= 14) {
    return "gradient";
  }
  return "";
}

const char *get_rgb_info_str(void) {
  snprintf(rgb_str, sizeof(rgb_str), "RGB: %s %d", mode_to_str(rgblight_get_mode()), rgblight_get_mode());
  // rgblight_get_hue(), rgblight_get_sat());
  // rgblight_get_val());
  return rgb_str;
}
