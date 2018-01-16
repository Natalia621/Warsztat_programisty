#!/bin/bash
cut -d : -f1 /etc/passwd > usr_names.txt

short="root"
long="root"

while read nxt_ln 
do
		if [ ${#nxt_ln} -lt ${#short} ]
		then
		short=$nxt_ln
		if [ ${#nxt_ln} -gt ${#short} ]
		then
		long=$nxt_ln
		fi
done < usr_names.txt
echo "long: $long"
echo "short: $short"

