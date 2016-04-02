#!/bin/bash
clear

echo "Enter distance between city A and city B"
read a
echo "Enter distance between city B and city C"
read b
echo "Enter distance between city A and city C"
read c

if [ $a -le $b -a  $a -le $c ] 
then
echo " Distance between city A and city B is smallest"
elif [ $b -le $a -a  $b -le $c ] 
then
echo " Distance between city B and city C is smallest"
else
echo " Distance between city A and city C is smallest"
fi

