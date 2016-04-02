#!/bin/bash

clear

echo "Enter a number"
read input
if test `expr $input % 2`  -eq 0
then
echo "Even"
else
echo "Odd"
fi
