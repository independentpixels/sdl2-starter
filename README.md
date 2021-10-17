# SDL2-Starter

A SDL2 project template ready to be used with VSCode on a Mac.

A video tutorial is available in case you want to follow through the steps and create it by yourself. It's easy and fun! I encourage you to do it by yourself.

[![Video Tutorial](https://user-images.githubusercontent.com/1257133/119228064-7e231a80-bb11-11eb-8c4c-4957450a81d4.png)](https://youtu.be/Dyz9O7s7B8w)

## Pre-requisites

The project template comes with the links already setup pointing to the original location of the SDL2 and SLD2_image libraries.

You can use the commands below to install both libraries to the default location.

`$ brew install sdl2 sdl2_image`

Both libraries will be installed to `/urs/local/Cellar` and their paths will be already linked in the project.

## Building the application

This template uses as Makefile that was configured to build our application into the `build/debug` directory.

In order to build the application, type:

`$ make`

## Running the application

In order to run the application, type:

`$ ./build/debug/play`

You should see the string "Hello SDL2!" being printed to the console output.

## LICENSE

[MIT](https://mit-license.org)
