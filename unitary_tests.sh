#!/bin/bash


cd ./Module01/ex00

for i in {00..02}
do
  echo
  echo $i
	cd ../ex$i
	echo "01_$i :"
	make leaks
done





