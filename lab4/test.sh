#!/bin/bash
set -x

echo -6   | ./main;
echo 6   | ./main;
echo 2    | ./main;
echo 0.5  | ./main;
echo -1.5 | ./main;
echo 3.5  | ./main;