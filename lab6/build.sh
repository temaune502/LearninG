#! /bin/sh
set -x
clang++ -std=c++20 -Wall -Wextra -pipe -ggdb  ./main.cpp -o main 