# Questions

## What's `stdint.h`?

It is a header that declares sets of integer types having specified widths.

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

These are the types in the stdint.h,which help to define an int with a specific bits.

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

1 byte,4 bytes, 4 bytes and 2 bytes respectively.

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

424D in Hexadecimal,16973 in decimal and 34 32 34 64 in ASCII.

## What's the difference between `bfSize` and `biSize`?

bfSize is the size of the whole bmp file, which includes the headerfiles, while biSize is the size of the BITMAPINFOHEADER header file. 

## What does it mean if `biHeight` is negative?

If biHeight is negative, the bitmap is a top-down DIB and its origin is the upper-left corner.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

biBitcount

## Why might `fopen` return `NULL` in `copy.c`?

It might return 'NULL' when the file does not exist in the current directory,does not permission or not enough space to allocate memory.

## Why is the third argument to `fread` always `1` in our code?

So that it reads only one item at a time.('piece by piece')

## What value does `copy.c` assign to `padding` if `bi.biWidth` is `3`?

It would assign a value of 3.

## What does `fseek` do?

It moves the file postion indicator according to the offset and the postion of the file.

## What is `SEEK_CUR`?

It seek the file postion indicator to the current position of the file. 
