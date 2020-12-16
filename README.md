# The layout

Modified QWERZ layout for former iso-de users.

![layout](https://github.com/channel-42/qmk_folder/blob/master/resources/layout.png "Layout")

# Custom Logo on slave side
The custom logo is part of the font-file, located in the `glcdfont_lily.c` file (see lib directory). It can also be found in the FontConverter direcoty under `custom_font.c`. Use the two python scripts to convert the font file and edit it. Then rename your custon font to the lib name and place it in the lib folder.

# Usage

Copy the Lily58 folder (or just the delukas folder if you didn't change the font in lib) to `~/qmk_firmware/keyboards/Lily58`.

To flash run the following:
`sudo make kb_name:keymap_name:bootloader_name`

For example `sudo make lily58:delukas:dfu` if you're using an Elite-C

**Don't forget to turn on flashing mode by pressing the reset switch**
