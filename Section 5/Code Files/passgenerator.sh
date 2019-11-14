#!/bin/bash
echo "This is a shell password generator"
echo "Enter the pass length of the password"

read PASS_LENGTH

for p in $(seq 1 5);
do
	openssl rand -base64 48 | cut -c1-$PASS_LENGTH
done
