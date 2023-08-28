#!/bin/bash

cd ./Module05/ex00

clear

for i in 00 01 02 03
#for i in 01
do
	cd ../ex$i
	echo "05_$i :"
	make leaks
	echo
	cat leaks.txt
done




