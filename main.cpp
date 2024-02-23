#include <chrono>
#include <cstdlib>
#include <iostream>
#include <string>
#include <thread>
#include <fstream>
#include<stdio.h>
#define wait1 std::this_thread::sleep_for(std::chrono::seconds(1));
#define clear std::cout << "\033[2J\033[1;1H";
using namespace std;

bool checkInternet() {
    int status = system("ping -c 3 google.com");
    return (status == 0);
}

void bs() {
            std::string input;
            std::cout << "What browser do you want?: \n";
            std::cout << "(chrome or firefox) \n";
            std::cin >> input;
            if (input == "chrome" || input == "Chrome") {
                system("flatpak install com.google.chrome -y");
                std::cout << "Install done \n";
            }
            else if (input == "firefox" || input == "Firefox") {
                system("flatpak install org.mozilla.firefox -y");
                std::cout << "Install done \n";

            }
            else {
                std::cout << "No valid browser name was entered! No browser install will be performed! \n";
            }
}


int main() {
    if (checkInternet()) {
            std::cout << "Internet check passed!" << std::endl;
        }
        else {
            // No internet or admin privileges detected
            std::cout << "\033[2J\033[1;1H";
            std::cout << "No internet detected! Retrying" << std::endl;
            main();
        }
        std::cout << "\033[2J\033[1;1H";
        //Intro here
        std::cout << " ________  ___       __                  ___     \n";
        std::cout << "|\\   ____\\|\\  \\     |\\  \\               |\\  \\    \n";
        std::cout << "\\ \\  \\___|\\ \\  \\    \\ \\  \\  ____________\\ \\  \\   \n";
        std::cout << " \\ \\  \\    \\ \\  \\  __\\ \\  \\|\\____________\\ \\  \\  \n";
        std::cout << "  \\ \\  \\____\\ \\  \\|\\__\\_\\  \\|____________|\\ \\  \\ \n";
        std::cout << "   \\ \\_______\\ \\____________\\              \\ \\__\\\n";
        std::cout << "    \\|_______|\\|____________|               \\|__|\n";
        std::cout << "\n";
        std::cout << "By VPeti \n";


        wait1
            wait1
            std::cout << "\033[2J\033[1;1H";
        std::cout << "Loading: 30% \n";
        wait1
            std::cout << "\033[2J\033[1;1H";
        std::cout << "Loading: 60% \n";
        wait1
            std::cout << "\033[2J\033[1;1H";
        std::cout << "Loading: 90% \n";
        wait1
            std::cout << "\033[2J\033[1;1H";
        //if exists it runs the program
        std::cout << "Welcome to OpenCW! \n";
        //Choice maker 2000
        std::string input;
        std::cout << "Please select install type (basic,gamer,custom,developer): \n";
        std::cout << "Other options: exit,about and update \n";
        std::cin >> input;
        if (input == "gamer" || input == "Gamer") {
            clear
                //runs command basic and gamer apps
                system("flatpak install org.videolan.VLC  com.valvesoftware.Steam com.discordapp.Discord io.github.peazip.peazip -y");
                bs();
                system("read -p 'Press Enter to continue...'");
                main();

        }
        else if (input == "basic" || input == "Basic") {
            clear
                //runs command basic apps
                system("flatpak install org.videolan.VLC io.github.peazip.PeaZip -y");
            std::string input;
            std::cout << "Do you what libreoffice?: \n";
            std::cin >> input;
            if (input == "yes" || input == "Yes") {
                system("flatpak install org.libreoffice.LibreOffice -y");
                bs();
                system("read -p 'Press Enter to continue...'");
                main();
            }
            else {
                bs();
                system("read -p 'Press Enter to continue...'");
                main();
            }
        }

        else if (input == "about" || input == "About") {
            //Does the credits thing
            std::cout << "\033[2J\033[1;1H";
            std::cout << "Clean-Wise version 3 (I) Linux port \n";
            std::cout << "By VPeti \n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
            std::cout << "\033[2J\033[1;1H";
            std::cout << "Welcome to 2024 \n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
            std::cout << "\033[2J\033[1;1H";
            std::cout << "A new era a new language \n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
            std::cout << "\033[2J\033[1;1H";
            std::cout << "Using CPP \n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
            std::cout << "\033[2J\033[1;1H";
            std::cout << "Build number v1.2.0 \n";
            system("read -p 'Press Enter to continue...'");
            main();


        }
        else if (input == "exit" || input == "Exit") {
            clear
                std::cout << "Goodbye! \n";
            wait1

        }
        else if (input == "custom" || input == "Custom") {
            clear
                std::string input;
            std::cout << "Enter packages name(s): ";
            std::cin >> input;
            system(("flatpak install " + input).c_str());
            wait1
            wait1
            main();


        }

        else if (input == "developer" || input == "Developer") {
            clear
            system("flatpak install org.videolan.VLC  com.visualstudio.code io.github.shiftey.Desktop io.github.peazip.PeaZip -y");
            bs();
            system("read -p 'Press Enter to continue...'");
            main();
        }

        else if (input == "update" || input == "Update") {
            clear
                std::cout << "Make sure you have WGET installed! \n";
            wait1
                std::cout << "Downloading the latest file and source code \n";
            system("wget https://raw.githubusercontent.com/VPeti1/CWAcces/main/OpenCW/main.cpp -O $HOME/main.cpp ");
            system("wget https://raw.githubusercontent.com/VPeti1/CWAcces/main/OpenCW/OpenCW.out -O $HOME/OpenCW.out ");
            system("chmod +x $HOME/OpenCW.out");
            system("$HOME/OpenCW.out");
            std::cout << "Files downloaded to the home directory of the current user\n";
            system("read -p 'Press Enter to continue...'");
        }

        else
        {
            //If the user enters something wrong it resets
            std::cout << "Try again \n";
            main();
        }
    }







        
    



