printf "Enter a number: "
read num
mod=0
rev=0
for((;num!=0;))
do
    mod=$((num%10))
    rev=$((rev*10+mod))
    num=$((num/10))
done
printf "Reverse: $rev"