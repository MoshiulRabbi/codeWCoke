problem2(){
    echo "Enter days:"
    read days
    years=`expr $days / 365`
    weeks=`expr $days % 365 / 7`
    days=`expr $days % 365 % 7`
    echo "Days: $days"
    echo "Weeks: $weeks"
    echo "Years: $years"
    echo "Solution: $years years, $weeks weeks and $days days"
    echo "Solution2: $years years, $weeks weeks and $days days" >> Solution2
}
problem2