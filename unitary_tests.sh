#!/bin/bash

cd ./Module05/ex00

clear

for i in 00
do
  echo
  echo
  echo
  echo
  echo
  echo
  echo $i
	cd ../ex$i
	echo "05_$i :"
	make leaks
done




