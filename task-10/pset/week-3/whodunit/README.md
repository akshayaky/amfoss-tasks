## Whodunit

Modify the pixels of a bmp file and reveal the name.

### Approach

1. If the red of the pixel is greater than __0xfe__ it is converted into completely blue __0xff0000__.
2. If any pixel has red greater than __0x00__ then that pixel is converted into black that is __0xffffff__.
3. This reveals the Name that was hidden in the bmp file.
