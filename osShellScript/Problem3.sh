echo "Enter an integer:"
    read num
    sum=0
    while [ $num -gt 0 ]
    do
        sum=$(($sum+$num%10))
        num=$(($num/10))
    done
    echo $sum
sum1=0
while [ $sum -gt 0 ]
do
sum1=$(($sum1+$sum%10))
sum=$(($sum/10))
done
echo $sum1