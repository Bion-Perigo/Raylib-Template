# Raylib-Template
Template to generate a project using Raylib. Windows/Linux. (C/C++)  

# Macros
DEBUG_MODE   = In Debug mode  
RELEASE_MODE = In Release mode  
CONFIG_PATH  = Path to configuration folder  
CONTENT_PATH = Path to Assets folder  
GAME_NAME    = Game Name  
To use in Vim or Neovim, change the compilers in the makefile to clang and clang++.  
Clang------>https://releases.llvm.org/download.html  
It is necessary to have W64devkit in the path in the case of Windows for commands and gcc/g++.  
W64devkit -> https://www.mingw-w64.org/downloads/  
  
Note: To use macros it is necessary to convert to a string, an example of this in main.cpp  
Bug: when using visual studio code, sometimes a file is generated in the root folder like std=c++17, -g but it doesn't interfere with use at all.  

# Credits
Raylib -------> https://www.raylib.com/  
Raylib -------> https://github.com/raysan5/raylib  
Raylib Extra -> https://github.com/raylib-extras/game-premake  
My Chanel --> https://www.youtube.com/@bion-perigo
