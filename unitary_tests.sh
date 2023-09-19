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
ls -lah
chmod 777 PmergeMe
valgrind ./PmergeMe 55499 7002 1
#./PmergeMe "2 65 0"
#./PmergeMe "2 65 3 0"
#./PmergeMe "2 65 3 6 7 0" #KO
#./PmergeMe "2 65 3 6 7 24 0" #KO
