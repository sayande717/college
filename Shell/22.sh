printf "Enter a number: "
read var
c=1
for ((i=1;i<=var;i++))
do
    c=$((c*i))
done
printf "Result: $c"