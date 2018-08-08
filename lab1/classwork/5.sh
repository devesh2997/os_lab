#!/bin/bash

echo "1. Make a file"
echo "2. Display content"
echo "3. Rename file"
echo "4. Delete file"
echo "5.Exit"

ch=-1

while [ $ch -ne 5 ]
do
read -p "Select choice :" ch
case $ch in
"1")read arg
touch $arg
;;
"2")read arg2
cat $arg2
;;
"3")read arg31
read arg32
mv $arg31 $arg32
;;
"4")read arg4
rm $arg4
;;
"5");; 
esac
done
