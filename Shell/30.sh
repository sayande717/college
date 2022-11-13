#!/bin/sh
printf "Enter a number: "
read num
num2=$num
mod=0
rev=0
while [ ! $num2 -eq 0 ]
do
    mod=$((num2%10))
    rev=$((rev*10+mod))
    num2=$((num2/10))
done
if [ $num -eq $rev ]
then
    printf "$num is a palindrome number"
else
    printf "$num is not a palindrome number"
fi