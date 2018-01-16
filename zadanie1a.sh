#!/bin/bash
cut -d : -f1 /etc/passwd

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
done <<< "$(cut -d : -f1 /etc/passwd)"
echo "long: $long"
echo "short: $short"
