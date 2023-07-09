#!/bin/bash
distro=$(lsb_release -si)

if [ "$distro" == "Arch" ]; then
    sudo pacman -S wifite nmap arp-scan
elif [ "$distro" == "Debian" ]; then
    sudo apt install wifite nmap arp-scan
else
    echo "Unknown distribution. Please manually install the packages."
fi
git clone https://github.com/TheSpeedX/TBomb.git
cd TBomb
pip3 install -r requirements.txt
chmod +x TBomb.sh
cd ..
git clone https://github.com/jatinkalwar/m-bomber2.O
git clone https://github.com/KasRoudra/PyPhisher
cd PyPhisher
pip3 install -r files/requirements.txt --break-system-packages
cd ..
git clone https://github.com/ultrasecurity/Storm-Breaker
cd Storm-Breaker
sudo bash install.sh
sudo python3 -m pip install -r requirements.txt
cd ..
git clone https://github.com/palahsu/DDoS-Ripper
git clone https://github.com/MatrixTM/MHDDoS.git
cd MHDDoS
pip install -r requirements.txt
cd ..
