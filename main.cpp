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

int main() {
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
            std::cout << "Welcome to CW-I \n";
            //Choice maker 2000
            std::string input;
            std::cout << "Please select install type (basic,gamer,custom,developer): \n";
            std::cout << "Other options: exit,about \n";
            std::cin >> input;
            if (input == "gamer" || input == "Gamer") {
                clear
                //runs command basic and gamer apps
                system("flatpak install org.videolan.vlc com.valvesoftware.Steam com.discordapp.Discord io.github.peazip.peazip -y");
                //browser selector
                std::string input;
                std::cout << "What browser do you want?: \n";
                std::cout << "(chrome or firefox) \n";
                std::cin >> input;
                if (input == "chrome" || input == "Chrome") {
                    system("flatpak install com.google.chrome -y");
                    std::cout << "Install done \n";
                    
                       
                    main();
                }
                else if (input == "firefox" || input == "Firefox") {
                    system("flatpak install org.mozilla.firefox -y");
                    std::cout << "Install done \n";
                    
                       
                    main();

                }
                else {
                    std::cout << "Install done \n";
                    
                       
                    main();
                }

            }
            else if (input == "basic" || input == "Basic") {
                clear
                    //runs command basic apps
                    system("flatpak install org.videolan.vlc io.github.peazip.peazip -y");
                std::string input;
                std::cout << "Do you what libreoffice?: \n";
                std::cin >> input;
                if (input == "yes" || input == "Yes") {
                    system("flatpak install org.libreoffice.libreoffice -y");
                    //install browser
                    std::string input;
                    std::cout << "What browser do you want?: \n";
                    std::cout << "(chrome or firefox) \n";
                    std::cin >> input;
                    if (input == "chrome" || input == "Chrome") {
                        system("flatpak install com.google.chrome -y");
                        std::cout << "Install done \n";
                        
                           
                        main();
                    }
                    else {
                        system("flatpak install org.mozilla.firefox -y");
                        std::cout << "Install done \n";
                        
                           
                        main();

                    }

                }

                else {
                    //browser selector
                    std::string input;
                    std::cout << "What browser do you want?: ";
                    std::cout << "(chrome or firefox) \n";
                    std::cin >> input;
                    if (input == "chrome" || input == "Chrome") {
                        system("flatpak install com.google.chrome -y");
                        std::cout << "Install done ";
                        
                           
                        main();
                    }
                    else if (input == "firefox" || input == "Firefox") {
                        system("flatpak install org.mozilla.firefox -y");
                        std::cout << "Install done ";
                        
                           
                        main();

                    }
                    else {
                        std::cout << "Install done ";
                        
                           
                        main();
                    }


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
                std::cout << "Build number v1.0.0 \n";
                
                   
                main();


            }
            else if (input == "exit" || input == "Exit") {
                clear
                    std::cout << "Goodbye!";
                wait1

            }
            else if (input == "custom" || input == "Custom") {
                clear
                    std::string input;
                std::cout << "Enter packages name(s): ";
                std::cin >> input;
                system(("flatpak install " + input).c_str());
                
                   
                main();


            }

            else if (input == "developer" || input == "Developer") {
                clear
                system("flatpak install org.videolan.vlc com.visualstudio.code io.github.shiftey.Desktop io.github.peazip.peazip -y");
                //browser selector
                std::string input;
                std::cout << "What browser do you want?: ";
                std::cout << "(chrome or firefox) \n";
                std::cin >> input;
                if (input == "chrome" || input == "Chrome") {
                    system("flatpak install com.google.chrome -y");
                    std::cout << "Install done ";
                    
                       
                    main();
                }
                else if (input == "firefox" || input == "Firefox") {
                    system("flatpak install org.mozilla.firefox -y");
                    std::cout << "Install done ";
                    
                       
                    main();

                }




                else {
                    std::cout << "Install done ";
                    
                       
                    main();
                }

            }

            else
            {
                //If the user enters something wrong it resets
                std::cout << "Try again \n";
                
                 // Waits for user to press Enter
                main();
            }
        }

        
    



