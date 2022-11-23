printf "Enter the number of elements: "
read n
printf "Enter the elements: "
for((i=0;i<n;i++))
do
    read arr[$i]
done
for((i=0;i<n;i++))
do
    for((j=0;j<$((n-i-1));j++))
    do
        if [ ${arr[$((j+1))]} -lt ${arr[$j]} ]
        then
            tmp=${arr[$j]}
            arr[$j]=${arr[$((j+1))]}
            arr[$((j+1))]=$tmp
        fi
    done
done
printf "Sorted array: ${arr[*]}"

printf "\n"