#!/bin/bash

n=$1
fac=1
if [ $n -eq 0 ]
    then echo 1
fi
while [ $n -ge 1 ];
do
    fac=$(($fac \* $n))
    n=$(($n - 1))
done
if [ $fac -ne 1 ];
    then echo $fac
fi