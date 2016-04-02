#!/bin/bash 
clear
echo -e "enter year " 
read year 
rem=`expr $year - 1804`
if test `expr $rem % 4` -eq 0 
then 
echo "Leap Year"
else
echo "Not Leap Year"
fi

