for((i=1;i<=5;i++))
do
    for((j=1;j<=$((5-i));j++))
    do
        printf " "
    done
    for((k=1;k<=$((2*i-1));k++))
    do
        printf "$k"
    done
    printf "\n"
done