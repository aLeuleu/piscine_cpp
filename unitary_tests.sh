#!/bin/bash

cd ./Module09/ex00

clear

for i in 00 01 02
#for i in 01
do
	cd ../ex$i
	ls -lah
	echo "09_$i :"
	make leaks
	echo "------------------"
	cat leaks.txt
	echo "------------------"

done




