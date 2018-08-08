#!/bin/bash

while [1];
do
read command
case $command in
"cd")
read loc
cd $loc
;;
"dir")ls
;;
"type")
read file_name
cat $file_name
;;
"del")
read file_name
rm $file_name
"ren")
read old
read new
mv $old $new
;;
"copy")
read src
read dest
cp $src $dest
*)
echo "$command is not recognised as an external or internal command."
done