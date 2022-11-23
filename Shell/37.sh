search()
{
    for((i=0;i<n;i++))
    do
        if [ ${a[$i]} -eq $k ]
        then
            printf "Position: $((i+1))"
            return
        fi
    done
    printf "Element not present in array."
}
printf "Enter the number of elements: "
read n
for((i=0;i<n;i++))
do
    read a[$i]
done
printf "Enter the element to be searched: "
read srch
search $a $n $srch