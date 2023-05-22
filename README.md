# dd7to9

### Introduction

Converts DirectDraw & Direct3D to Direct3D9

### Features

 - Conversion of DirectDraw 1-7 (ddraw.dll) to Direct3D 9 (d3d9.dll) using [Dd7to9](https://github.com/elishacloud/dxwrapper/wiki/DirectDraw-to-Direct3D9-Conversion)
 - Conversion of Direct3D 1-7 (ddraw.dll) to Direct3D 9 (d3d9.dll) using [Dd7to9](https://github.com/elishacloud/dxwrapper/wiki/DirectDraw-to-Direct3D9-Conversion)

### Compatibility List for Games on Windows 10

Check out the [Compatible Games wiki](https://github.com/elishacloud/dxwrapper/wiki/Compatible-Games) and the [Dd7to9 Supported Games wiki](https://github.com/elishacloud/dxwrapper/wiki/DirectDraw-to-Direct3D9-Conversion#supported-2d-games-directdraw) for a list.

### Installation

1. Download the latest binary release from the repository's [Release](https://github.com/elishacloud/dd7to9/releases) page and unzip it to a folder.
2. Copy ddraw.dll file into the game's installation directory, next to the main executable file.  For some games the main executable is in a subdirectory (like 'Bin', 'Exe' or 'App') so the files will need to be copied it into that directory.  Overwriting of any existing game files is not recommended.

Do not attempt to overwrite any .dll in a Windows system directory as it is currently not supported and will not work.

### Uninstallation

Delete the ddraw.dll and .ini files from the game's directory. You can also delete the log file, if there is one.

### Configuration

There is currently no configuration for this.  Check out my other project [dxwrapper](https://github.com/elishacloud/dxwrapper) for more options,

### Logging

The log file will be created in the same folder where the game executable is located.  It will be named 'draw' with the name of the game executable appended to it.  So if you are running the file `game.exe` then the log file will be called `dxwrapper-game.log`.

### Donations

All my work here is free and can be freely used.  For more details on how you can use this module see the [license](#license) section below.  However, if you would like to donate then check out my [donations page](https://PayPal.me/elishacloud).  All donations are for work already completed!  Please don't donate for future work or to try and increase my development speed.  Thanks!

### License

Copyright (C) 2022 Elisha Riedlinger

This software is provided 'as-is', without any express or implied warranty. In no event will the author(s) be held liable for any damages arising from the use of this software. Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.

### Development

DxWrapper is written mostly in C++ using Microsoft Visual Studio 2022.

The project requires both the Windows 10 SDK. The exact version required can be seen in the project properties in Visual Studio.

GitHub Link: https://github.com/elishacloud/dd7to9

Thanks for stopping by!
