#!/bin/bash

M=$1

if [ $M -ge 90 -a $M -le 100 ];
then echo A
elif [ $M -ge 70 -a $M -le 89 ];
then echo B
elif [ $M -ge 40 -a $M -le 69 ];
then echo C
else
echo F
fi
