#! /bin/sh
if test $# -ne 1
then
	echo "A"
elif [ -d $1 ]
then
	echo "B"
elif [ ! -s $1 ]
then
        echo "C"
elif [ -x $1 ]
then
        echo "D"
else
	echo "E"
fi
