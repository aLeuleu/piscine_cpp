#!/bin/bash


cd /Module00/ex00
make --silent
if [ $? -ne 0 ]; then
    echo "Compilation failed"
    exit 1
fi
if [ $(valgrind --leak-check=full ./Zombie) -ne 0 ]; then
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
if [ $(valgrind --leak-check=full ./ZombieHorde) -ne 0 ]; then
    echo "Leaks"
    exit 1
fi
echo "01_01"
