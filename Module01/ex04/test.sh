#!/bin/bash

echo "Bonjour, je suis un fichier de test. Enchanté." > test1

echo "Voici quelques tests lorsque l'on rentre 0, 1 ou 2 arguments :"
./replace
echo
./replace test1
echo
./replace test1 test
echo
echo "test1 ..."
./replace test1 "Enchanté." "Vous venez de changer le contenu de ce fichier. Qu'est-ce que vous êtes fort !"
echo "test2 ..."
cp test1 test2
./replace test2 "Enchanté." "Vous venez de changer le contenu de ce fichier un deuxième fois. Votre maman doit être fière de vous."
echo
echo "Résultat des tests :"
echo "test1 :"
cat test1
echo
echo "test1.replace :"
cat test1.replace
echo
echo "test2 :"
cat test2
echo
echo "test2.replace :"
cat test2.replace
echo
echo "**********"

