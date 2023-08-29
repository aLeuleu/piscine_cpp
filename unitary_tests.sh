#!/bin/bash

cd ./Module06/ex00

clear

for i in 00 01 02
#for i in 01
do
	cd ../ex$i
	echo "06_$i :"
	make leaks
	echo "------------------"
	cat leaks.txt
	echo "------------------"

done




