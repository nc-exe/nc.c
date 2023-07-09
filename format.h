#ifndef FORMAT_H
#define FORMAT_H


#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <unistd.h>

using namespace std;

//press enter to continue....
auto enter()
{
        std::cin.ignore();
}

// Banner
void banner(void)
{
    system("clear");

    cout << "███╗   ██╗ ██████╗     ███████╗██╗  ██╗███████╗\n";
    cout << "████╗  ██║██╔════╝     ██╔════╝╚██╗██╔╝██╔════╝\n";
    cout << "██╔██╗ ██║██║          █████╗   ╚███╔╝ █████╗  \n";
    cout << "██║╚██╗██║██║          ██╔══╝   ██╔██╗ ██╔══╝  \n";
    cout << "██║ ╚████║╚██████╗ ██╗ ███████╗██╔╝ ██╗███████╗\n";
    cout << "╚═╝  ╚═══╝ ╚═════╝ ╚═╝ ╚══════╝╚═╝  ╚═╝╚══════╝\n";

    cout << endl;
}

//options to select:-
void options()
{
    cout << "[*] Menu :- " << endl;

    cout << "1.SMS_Bombing attack." << endl;
    cout << "2.Phishing attack." << endl;
    cout << "3.Network Scaning." << endl;
    cout << "4.Wifi_hacking attack." << endl;
    cout << "5.DDoS attack." << endl;
    cout << "6.Update system... " << endl;

    cout << endl;
}

//function to do after selecting options
auto function(int a)
{
    //sms Bombing attack
    if(a==1)
    {
        system("clear");
        banner();
        cout << "\t\t SMS_Bombing selected :-" << endl;
        cout << endl;
        cout << "1. TBomb." << endl;
        cout << "2. Beast_Bomber(email,sms,telegram,discord)." << endl;
        cout << endl;
    }
    // Phishing attack :-
    else if(a==2)
    {
        system("clear");
        banner();
        cout << "\t\t Phishing attack selected :-" << endl;
        cout << endl;
        cout << "1. PyPhisher." << endl;
        cout << "2. Storm-Breaker." << endl;
    }
    //Network Scaning :-
    else if(a==3)
    {
        system("clear");
        banner();
        cout << "\t\t Network Scanner selected :-" << endl;
        cout << endl;
        cout << "1. Nmap." << endl;
        cout << "2. Arp scan" << endl;
    }
    // Wifi hacking :- 
    else if(a==4)
    {
        system("clear");
        banner();
        cout << "\t\t WiFi_hacking selected :-" << endl;
        cout << endl;
        cout << "1. wifite."<< endl;
        cout << "2. Wireshark." << endl;
    }
    // DDoS attack:-
    else if(a==5)
    {
        system("clear");
        banner();
        cout << "\t\t DDoS attack selected :-" << endl;
        cout << endl;
        cout << "1. DDoS-Ripper." << endl;
        cout << "2. MHDDoS." << endl;
    }
    
    else
    {
        banner();
        cout << "\t\tERROR...Invalid option :" << endl;
    }

}
/*
int fun1(int , int)
{
    if(a==1 && b==1 ) 
    {
        banner();
        std::cout << "\t\tWelcome to TBomb :- " << std::endl;
        system("git clone https://github.com/TheSpeedX/TBomb");
        system("cd TBomb");
        system(" pip3 install -r requirements.txt");
        system("./TBomb.sh");
    }

}
*/


// upgrade your system:-
int upgrade(int a)
{
    if (a == 6) 
    {
        std::system("clear");
        banner();

        std::string distro;
        std::cout << "Enter your Linux distribution (debian/arch): ";
        std::cin >> distro;

        if (distro == "debian") 
        {
            std::system("sudo apt update");
            exit(0);
        } 
        else if (distro == "arch") 
        {
            std::system("sudo pacman -Syu");
            exit(0);
        }
        else 
        {
            std::cout << "Unknown distro. Please manually update your system." << std::endl;
        }

        return 0;
    }
    return 0;
}

// Main function to do after selecting (function):-
int tbomb(int a, int b)
{
        // git clone https://github.com/TheSpeedX/TBomb
        if(a==1 && b==1 ) 
    {
        banner();
        std::cout << "\t\tWelcome to TBomb :- " << std::endl;
        system("./TBomb/TBomb.sh");
    }
    return 0;
    exit(0);
}
int bomber(int a, int b)
{
    if(a==1 && b==2) 
    {
        banner();
        std::cout << "\t\tWelcome to Bomber2.0 :- " << std::endl;
        //git clone git clone https://github.com/jatinkalwar/m-bomber2.O
        system("chmod +x m-bomber2.0/bomber.sh");
        system("python3 m-bomber2.0/bomb.py");
    }
    return 0;
    exit(0);
}
int PyPhisher(int a, int b)
{
    if(a==2 && b==1) 
    {
        banner();
        cout << "\t\tWelcome to PyPhisher :-" << endl;
        //git clone https://github.com/KasRoudra/PyPhisher
        system("chmod +x PyPhisher/pyphisher.py");
        system("python3 PyPhisher/pyphisher.py");
    }
    return 0;
}
int Storm_Breaker(int a, int b)
{
    if(a==2 && b==2) 
    {
        banner();
        std::cout << "\t\tWelcome to Storm_Breaker :- " << std::endl;
        //git clone https://github.com/ultrasecurity/Storm-Breaker
        system("sudo ./Storm-Breaker/install.sh");
        system("python3 Storm-Breaker/st.py");
    }
    return 0;
    exit(0);
}
int Nmap(int a, int b, string ip, string command)
{
    if(a==3 && b==1) 
    {
        banner();
        std::cout << "\t\tWelcome to nmap :- " << std::endl;
        cout << "Enter an IP address : ";
        cin >> ip;
        banner();
        std::string command = "nmap " + ip;
        int result = system(command.c_str());
    }
    return 0;
}
int Arp(int a, int b, string interface)
{
    if(a==3 && b==2) 
    {
        system("ifconfig");
        system("sleep 7");
        banner();
        std::cout << "\t\tWelcome to Arp scan :- " << std::endl;
        cout << "Enter your interface : ";
        cin >> interface;
        banner();
        std::string command = "arp-scan --interface=" +interface+ " --localnet";
        int result = system(command.c_str());
    }
    return 0;
}
int wifite(int a, int b)
{
    if(a==4 && b==1) 
    {
        banner();
        std::cout << "\t\tWelcome to Wifite :- " << std::endl;
        cout << "Run this with supper user:-" << endl;
        //exit(0);
        system("sudo wifite");
    }
    return 0;
}
int WiFi_hacking(int a, int b)
{
    if(a==4 && b==2)
    {
        banner();
        std::cout << "\t\tWelcome to wireshark :- " << std::endl;
        std::string distro;
        std::cout << "Enter your Linux distribution (debian/arch): ";
        std::cin >> distro;
        if (distro == "debian") 
        {
            std::system("sudo apt-get install wireshark");
            system("wireshark");
            exit(0);
        } 
        else if (distro == "arch") 
        {
            std::system("sudo pacman -S wireshark");
            system("wireshark");
            exit(0);
        }
        else 
        {
            std::cout << "Unknown distro. Please manually update your system." << std::endl;
        }
        return 0;

    }
    return 0;
}
int DDoS(int a, int b) {
    if (a == 5 && b == 1) {
        banner();
        std::cout << "\t\tWelcome to DDoS_Reaper :- " << std::endl;
        // git clone https://github.com/palahsu/DDoS-Ripper
        std::string ip;
        int turbo;
        std::cout << "Enter your IP: ";
        std::cin >> ip;
        std::cout << "Enter turbo (default 135,443): ";
        std::cin >> turbo;

        std::string command = "python3 DDoS-Ripper/DRipper.py -s " + ip + " -t " + std::to_string(turbo);
        int result = system(command.c_str());
    }
    return 0;
}
int MHDDoS(int a, int b)
{
    if(a==5 && b==2)
    {
        banner();
        std::cout << "\t\tWelcome to MHDDoS :- " << std::endl;
        // git clone https://github.com/MatrixTM/MHDDoS.git
        system("chmod +x MHDDos/start.py");
        system("python3 MHDDoS/start.py");
    }
    return 0;
}

#endif
