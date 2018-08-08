#!/bin/bash

A=$1
b=1
while [ $b -le "$A" ];
do
c=1
while [ $c -le $b ];
do
echo "*"
c=`expr $c + 1`
done
echo '\n'
b=`expr $b + 1`
done

