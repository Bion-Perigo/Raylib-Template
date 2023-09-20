# Raylib-Template
Template to generate a project using Raylib. Windows/Linux. (C/C++)  

# Create New Project
1 - Rename the "Game Name" folder to the name of your game.  
2 - Go to "Programs/Premake5" and run the generator of your choice "/Vs2017/2019/2020.bat" or on Linux "GMake2.sh".  

# Commands for compilation and execution
./App.bat // Update Project  
./App.bat make  
./App.bat run  
./App.bat "make config-release_x64"  
./App.bat "run config-release_x64"  
  
# Linux
./App.sh // Update Project  
make  
make clean  
Please, when using on Linux, install the necessary libraries following the instructions on Raylib's GitHub!  
Link -> https://github.com/raysan5/raylib  
  
# Note
Whenever you add a new file, you need to update the project, running App.* at the root of the project or compiling it.  
This project is only for the Desktop platform and is considered more limited than the original repository that can support several platforms. For full support, please directly use the original repository found at the end of this file.  
This is just an easy and quick way that I create projects with raylib to study the implementations behind this fantastic library.  
  
Your script files should be in the "Source/GameName" folder.  
Your asset files should be in the "Content/" folder.  
Your config files should be in the "Config/" folder.  

# Credits
Raylib -------> https://www.raylib.com/  
Raylib -------> https://github.com/raysan5/raylib  
Raylib Extra -> https://github.com/raylib-extras/game-premake  
My Chanel --> https://www.youtube.com/@bion-perigo
