#!/bin/bash

A=5
b=6
z=9
c=`expr $A \* $b`
d=`expr $z \\ $A`
c=`expr $c + $d`
echo $c