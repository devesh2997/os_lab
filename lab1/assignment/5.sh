#!/bin/bash

while [ 1 -eq 1 ];
do
    read command arg1 arg2
    case $command in
        "cd")
            cd $arg1
        ;;
        "dir")ls
        ;;
        "type")
            cat $arg1
        ;;
        "del")
            rm $arg1
        ;;
        "ren")
            mv $arg1 $arg2
        ;;
        "copy")
            cp $arg1 $arg2
        ;;
        *)
            echo "$command is not recognised as an external or internal command."
        ;;
    esac
done