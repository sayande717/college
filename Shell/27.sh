printf "Enter a number: "
read num
printf "Enter number of digits: "
read dig
num2=$((num))
sum=0
mod=0
pow=1
while [ ! $num2 -eq 0 ]
do
    mod=$((num2%10))
    sum=$((sum+mod**dig))
    num2=$((num2/10))
done
if [ $sum -eq $num ]
then
    printf "$num is an armstrong number"
else
    printf "$num is not an armstrong number"
fi

printf "\n"