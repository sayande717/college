c=1
until [ ! $c -le 10 ]
do
    printf "$c "
    c=$((c+1))
done 
