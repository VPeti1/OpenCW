# OpenCW
The linux port of CW-I that uses flatpak 


# How to set up?
## Install flatpak and the flathub repo
Guide at: https://flathub.org/setup
## Download the latest release 
## Make the file executable using chmod
For exaple: sudo chmod +x OpenCW.out
## Run the file
For exaple: ./OpenCW.out
## Enjoy

# What are its system requirements

## A GNU/Linux system with flatpak support
Thats it (no, seriously)

# How to compile with g++?

## Download the "OpenCW.cpp" file 
## Edit the code to your liking
## Type in g++ OpenCW.cpp

# How to compile with VS?

## Clone this repo
## Launch the .sln file
## Edit the code to your liking
## Click build

# Known issues
## Error: ./OpenCW.out: /lib/x86_64-linux-gnu/libc.so.6: version `GLIBC_2.34' not found (required by ./OpenCW.out)
Fix: compile the source code yourself with g++. (This issue is because OpenCW was compiled with desktop ubuntu in mind so for example WSL might not work out of the box)


