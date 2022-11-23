printf "Enter the number of elements: "
read n
for((i=0;i<n;i++))
do
    read arr[$i]
done
printf "Array: ${arr[*]}"