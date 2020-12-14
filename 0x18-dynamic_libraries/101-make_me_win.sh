#!/bin/bash
wget -O /tmp/winner.so https://github.com/andylopezr/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/winner.so
export LD_PRELOAD=/tmp/winner.so
