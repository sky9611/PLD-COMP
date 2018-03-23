#!/bin/sh

rm src/cmm/*
echo 'Creation de la grammaire'
cd grammaire
java -jar /usr/local/lib/antlr-4.7.1-complete.jar -o ../src/cmm -Dlanguage=Cpp cmm.g4 -no-listener -visitor
cd ../
echo "Finish... Enter for add"
read a
git add .
echo "Finish... Enter for commit"
read a
git commit -m "generate antlr fils"
echo "Finish... Enter for push"
read a
git push
