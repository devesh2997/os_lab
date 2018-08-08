#!/bin/bash

a=1
b=1
c=2

printf "$a $b $c "
n=1
while [ $n -le 15 ];
do
d=$(($a + $b + $c))
printf "$d "
a=$b
b=$c
c=$d
n=$(($n + 1))
done
printf "\n"