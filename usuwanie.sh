#!/bin/bash

for file in * .html
do
	sed "s/<\*>/ /" $file
	
done
