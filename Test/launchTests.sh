#! /bin/bash
if [ -e ../bin/cmm ]
then
    echo "executable cmm found."
else
    echo "executable cmm not found. Please compile the source code first."
    exit
fi
for file in ./Files2/*.cmm
do
    filename="${file##*/}"
    basename="${filename%.cmm}"
    echo "testing [${filename}]..."
    echo "-----------------"
    ../bin/cmm ${file} -a >>/dev/null
    echo "cmm executed with return code $?"
    echo "----"
    gcc "${file/.cmm/.s}" -o "${file/.cmm/.o}"
    echo "gcc executed with return code $?"
    echo "----"
    exe="${file/.cmm/.o}"
    ./${exe}
    echo "executable $exe executed with return code $?"
    echo "-----------------"
done
echo "========================================="
echo "END OF TESTS"
echo "Do you wish to delete all generated files (.s & .o) ? (y/n)"
read input
if [ ${input} = "y" ]
then
    find ./Files2 -name "*.s" -type f -print0 | xargs -0 /bin/rm -f
    find ./Files2 -name "*.o" -type f -print0 | xargs -0 /bin/rm -f
fi
exit