#!/bin/bash
cd $HOME
for file in *
do
	if[ -r "$file" -a -f "$file" ]
	then
		echo "$(ls -l $file)"
	fi


done 
