fact()
{
    printf "Enter a number: "
    read n
    result=1
    for((i=1;i<=n;i++))
    do
        result=$((result*i))
    done
    printf "Factorial: $result"
}
fact

printf "\n"