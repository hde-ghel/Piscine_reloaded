ifconfig | grep "ether " | awk -F " " '{print $NF}'
