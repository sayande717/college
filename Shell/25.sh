printf "Enter a number: "
read var
c=0
for ((i=2;i<var;i++))
do
    if [ $((var%i)) -eq 0 ]
    then
        printf "$var is not a prime number"
        exit
    fi
done
printf "$var is a prime number"
