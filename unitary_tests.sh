#!/bin/bash

cd ./Module04/ex00

clear

for i in 00 01 02
do
  echo
  echo
  echo
  echo
  echo
  echo
  echo $i
	cd ../ex$i
	echo "04_$i :"
	make leaks
done




