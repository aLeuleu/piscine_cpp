#!/bin/bash


cd ./Module01/ex00
make --silent
if [ $? -ne 0 ]; then
    echo "Compilation failed"
    exit 1
fi
valgrind --leak-check=full ./Zombie 1>/dev/null 2>/dev/null
if [ $($?) -ne 0 ]; then
    echo "Leaks"
    exit 1
fi
echo "01_00 OK"

cd ../ex01
make --silent
if [ $? -ne 0 ]; then
    echo "Compilation failed"
    exit 1
fi
if [ $(valgrind --leak-check=full ./ZombieHorde 1>/dev/null) -ne 0 ]; then
    echo "Leaks"
    exit 1
fi
echo "01_01 OK"
