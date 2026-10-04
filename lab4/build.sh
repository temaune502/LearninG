#!/bin/bash
set -x
clang++ -Wall -Wextra -Werror -pedantic -pipe -O0 -std=c++23  -Wshadow -ggdb3 main.cpp -o main

./main