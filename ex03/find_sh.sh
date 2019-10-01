find . -name "*.sh" | awk -F. '{print $(NF-1)}' | awk -F/ '{print $NF}'
