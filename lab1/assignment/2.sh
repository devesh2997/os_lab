#!/bin/bash

file_name = $1
file_name_second = $2

cat > $file_name
cat > $file_name_second

chmod 777 $file_name
chmod 777 $file_name