# OpenCW
The linux port of CW-I that uses flatpak 


# How to set up?
## Install flatpak and the flathub repo
Guide at: https://flathub.org/setup
## Download the installer.out file or compile it yourself
## Make the file executable using chmod
For exaple: sudo chmod +x installer.out
## Run the file
For exaple: ./OpenCW.out
## Run OpenCW by typing in 'cw' in the terminal

# What are its system requirements

## A GNU/Linux system with flatpak support
Thats it (no, seriously)

# How to compile with g++?

## Download the "main.cpp" file 
## Edit the code to your liking
## Type in g++ main.cpp

# Known issues
## Error: ./OpenCW.out: /lib/x86_64-linux-gnu/libc.so.6: version `GLIBC_2.34' not found (required by ./OpenCW.out)
Fix: compile the source code yourself with g++. (This issue is because OpenCW was compiled with desktop ubuntu in mind so for example WSL might not work out of the box)


