# The layout

Modified QWERTZ layout for former iso-de users.

![layout](https://github.com/channel-42/qmk_folder/blob/master/resources/layout.png "Layout")

# Custom Logo on slave side
The custom logo is part of the font-file, located in the `glcdfont_lily.c` file (see lib directory). It can also be found in the FontConverter direcoty under `custom_font.c`. Use the two python scripts to convert the font file and edit it. Then rename your custon font to the lib name and place it in the lib folder.

# New functions
I worte some simple functions to add some additional features to the displays. The list will get update when a new functions was added to the lib. All available functions will be declared in my keymap.c.\

**Additional functions list:**
  - wpm counter on the master side
  - progress bar with custom head and body

# Usage

Copy the Lily58 folder (or just the delukas and lib folder) to `~/qmk_firmware/keyboards/Lily58`.

To flash run the following:
`sudo make kb_name:keymap_name:bootloader_name`

For example `sudo make lily58:delukas:dfu` if you're using an Elite-C

**Don't forget to turn on flashing mode by pressing the reset switch**
