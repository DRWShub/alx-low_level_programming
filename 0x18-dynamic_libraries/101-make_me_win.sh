#!/bin/bash
wget -P .. https://raw.githubusercontent.com/DRWShub/alx-low_level_programming/blob/master/0x18-dynamic_libraries/cracked.so
export LD_PRELOAD="$PWD/../cracked.so"
