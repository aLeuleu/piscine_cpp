cmake_minimum_required(VERSION 3.24)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex00 Module00/ex00/megaphone.cpp)
add_executable(ex01  Module00/ex01/phonebook.cpp Module00/ex01/phonebook.hpp)
add_executable(01_00 "Module01/ex00/Zombie.cpp" "Module01/ex00/Zombie.hpp" "Module01/ex00/newZombie.cpp" "Module01/ex00/randomChump.cpp" "Module01/ex00/main.cpp")
add_executable(01_01 "Module01/ex01/Zombie.cpp" "Module01/ex01/zombieHorde.cpp" "Module01/ex01/main.cpp")
add_executable(01_02 "Module01/ex02/main.cpp")
add_executable(01_03 "Module01/ex03/main.cpp" Module01/ex03/Weapon.cpp Module01/ex03/Weapon.hpp Module01/ex03/HumanA.hpp Module01/ex03/HumanA.cpp Module01/ex03/HumanB.cpp)
add_executable(01_04 Module01/ex04/main.cpp)
add_executable(01_05 Module01/ex05/main.cpp Module01/ex05/Harl.hpp Module01/ex05/Harl.cpp)
add_executable(02_00 Module02/ex00/main.cpp Module02/ex00/Fixed.cpp Module02/ex00/Fixed.hpp)
