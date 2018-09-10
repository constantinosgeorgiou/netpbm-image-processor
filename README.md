# Netpbm image processor

Part of coursework of my Intro to Programming class at my university :mortar_board:

## Getting Started

The whole purpose of this, is to turn a pixmap(RGB) image (which is of netpbm format) to grayscale and a grayscale image to black and white.

### How to use it
1. Open a terminal
2. Compile the netpbm.c file using a compiler of your choice (I use gcc here)
```bash
$ gcc -o netpbm netpbm.c
```
3. If no errors pop up :joy: run this command
```bash
$ ./netpbm < YOUR_INPUT_IMAGE.ppm > YOUR_OUTPUT_IMAGE.pgm
```
> for example: **$ ./netpbm < colorsasc.ppm > colorsasc.pgm**
4. Have a cookie 'cause you're done! :cookie:


### How it works
It reads the image given as input, character by character.
Each file starts with a two-byte **magic number** (in ASCII) that identifies the type of file it is (PBM, PGM, and PPM) and its encoding (ASCII or binary). The magic number is a capital **P** followed by a **single-digit number**.

P# | Type, Encoding | Extension
------------ | ------------- | -------------
P1 | Black & White, ASCII | .pbm
P2 | Grayscale, ASCII | .pgm
P3 | RBG, ASCII | .ppm
P4 | Black & White, Binary | .pbm
P5 | Grayscale, Binary | .pgm
P6 | RBG, Binary | .ppm

After the magic number, follows the **width** (in ASCII).

After the width, follows the **height** (in ASCII).

After the width, follows the **max** value (in ASCII) that a given character can have.

:exclamation::exclamation: **CAUTION** :exclamation::exclamation: Between the values above there most likely will be white space... you know... tabs, spaces, enters and stuff like that... We *ignore* them. Just like that. They are not cool enough to deal with. :sunglasses:

To turn a Pixmap(RBG) image to grayscale, it reads the R, the G, and the B and then using this function it calculates how gray the pixel should be.

> GRAYSCALE_PIXEL = floor(0.299*R + 0.587*G + 0.114*B)

To turn a Graymap(Grayscale) image to BitMap(Black & White), it reads a pixel and then using this function it calculates if it should be black or white.

> BIT_PIXEL = floor((max+1)/2)

### Examples with images

#### ASCII

![colorsasc.ppm to colorsasc.pgm](https://github.com/constantinosgeorgiou/netpbm-image-processor/blob/master/imgs/examples/AscPPMtoAscPGM.png)
```bash
$ ./netpbm < colorsasc.ppm > colorsasc.pgm
```
![colorsasc.pgm to colorsasc.pbm](https://github.com/constantinosgeorgiou/netpbm-image-processor/blob/master/imgs/examples/AscPGMtoAscPBM.png)
```bash
$ ./netpbm < colorsasc.pgm > colorsasc.pbm
```

#### Binary

![SWbin.ppm to SWbin.pgm](https://github.com/constantinosgeorgiou/netpbm-image-processor/blob/master/imgs/examples/BinPPMtoBinPGM.png)
```bash
$ ./netpbm < SWbin.ppm > SWbin.pgm
```

![SWbin.pgm to SWbin.pbm](https://github.com/constantinosgeorgiou/netpbm-image-processor/blob/master/imgs/examples/BinPGMtoBinPBM.png)
```bash
$ ./netpbm < SWbin.pgm > SWbin.pbm
```
