#include <iostream>
#include "format.h"
#include <string>
#include <algorithm>
#include <vector>
#include <unistd.h>
using namespace std;
int main ()
{
    int a,b,turbo;
    string ip,command,interface;
    const char* newDir;
    banner();
    options();
    cout << "=>\tChoose your option : ";
    cin >> a;
    banner();
    upgrade(a);
    function(a);
    cout << "=>\tChoose your option : ";
    cin >> b;
    tbomb(a,b);
    bomber(a,b);
    PyPhisher(a,b);
    Storm_Breaker(a,b);
    Nmap(a,b,ip,command);
    Arp(a,b,command);
    wifite(a,b);
    WiFi_hacking(a,b);
    DDoS(a,b);
    MHDDoS(a,b);
    return 0;
}