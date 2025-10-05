#!/bin/bash

# Debian and derivatives (apt)
if cat /etc/os-release | grep -E 'ID=debian|ID_LIKE=(.*)debian' &> /dev/null; then
    supported=true

    echo "Installing packages for Debian or derivative (apt)"


    #install gcc
    sudo apt install -y gcc
    sudo apt-get install -y gcc-mips-linux-gnu

    #install ninja
    sudo wget -qO /usr/local/bin/ninja.gz https://github.com/ninja-build/ninja/releases/latest/download/ninja-linux.zip
    sudo gunzip /usr/local/bin/ninja.gz
    sudo chmod a+x /usr/local/bin/ninja

    #get rest of requirements
    pip install -r requirements.txt
    chmod +x configure
    chmod +x tools/ido_5.3/usr/lib/ #give exec permissions to ido folder (will change in the future)
fi
