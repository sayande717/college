arr=(5 4 3 2 1)
for((i=0;i<5;i++))
do
    for((j=0;j<$((5-i-1));j++))
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
