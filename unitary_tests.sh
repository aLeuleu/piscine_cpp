#!/bin/bash

cd ./Module09/ex00

clear

#for i in 00 01 02
##for i in 01
#do
#	cd ../ex$i
#	ls -lah
#	echo "09_$i :"
#	make leaks
#	echo "------------------"
#	cat leaks.txt
#	echo "------------------"
#
#done

cd ../ex02
make
./PmergeMe "2 65 3"
./PmergeMe "2 65 3 6"
./PmergeMe "2 65 3 6 7 24"
./PmergeMe "2 65 3 6 7 24 76"




