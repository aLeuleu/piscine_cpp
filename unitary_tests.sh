#!/bin/bash

cd ./Module03/ex00

clear

for i in 00 01 02
do
  echo
  echo $i
	cd ../ex$i
	echo "03_$i :"
	make leaks
done




