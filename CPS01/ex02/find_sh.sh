find . -type f -name '*.sh' | sed 's/\.sh//g' | awk -F '/' '{print $NF}'
