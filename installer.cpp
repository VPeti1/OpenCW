#include <chrono>
#include <cstdlib>
#include <iostream>
#include <string>
#include <thread>
#include <fstream>
#include <stdio.h>
#include <unistd.h>
#define clear std::cout << "\033[2J\033[1;1H";
using namespace std;

int main() {
    clear;
    std::cout << "AIOPM Installer" << std::endl;
    std::cout << "By VPeti" << std::endl;
    sleep(2);
    std::cout << "Make sure you have WGET installed!" << std::endl;
    system("read -p 'Press Enter to continue...'");
    system("sudo mkdir /usr/opencw");
    system("sudo wget https://raw.githubusercontent.com/VPeti1/CWAcces/main/OpenCW/OpenCW.out -O /usr/opencw/opencw.out");
    system("sudo cp -r /usr/opencw/opencw.out /bin/opencw");
    system("sudo chmod +x /bin/opencw");
    std::cout << "AIOPM Installer Completed!" << std::endl;
    system("read -p 'Press Enter to continue...'");
    system("exit");
}