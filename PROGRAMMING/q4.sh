#!/bin/bash
clear
echo  -n "Enter cost_price:"
read c
echo -n "Enter selling_price:"
read s
if test `expr $s - $c` -gt 0
then 
echo "Profit"
else
echo "loss"
fi
