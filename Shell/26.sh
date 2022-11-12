a=0
b=1
printf "$a $b"
for ((i=1;i<=10;i++))
do
    c=$((a+b))
    a=$b
    b=$c
    printf " $c"
done
printf "\n"