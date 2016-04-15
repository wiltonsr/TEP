#!/bin/bash
./a.out < in
echo -e "\n"
./a.out < in | cat > outP
diff out outP
