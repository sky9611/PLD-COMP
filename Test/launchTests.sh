#! /bin/bash
if [ -e ../bin/cmm ]
then
    echo "executable cmm found."
else
    echo "executable cmm not found. Please compile the source code first."
    exit
fi
for file in ./Files/*.cmm
do
    filename="${file##*/}"
    echo "testing [${filename}]..."
    ../bin/cmm
done
