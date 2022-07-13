#!/bin/bash
wget -P /tmp https://github.com/patty12334/alx-low_level_programming/raw/master/0x18-dynamic_libraries/library.so
export LD_PRELOAD=/tmp/library.so
