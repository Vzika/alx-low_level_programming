#!/bin/bash
gcc -shared -o libfunc.so -fPIC func.c
export LD_PRELOAD=./libfunc.so:$LD_LIBRARY_PATH
