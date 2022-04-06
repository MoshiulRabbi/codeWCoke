##Write a program to Check Whether a Character is Vowel or Consonant or invalid

d(){
    echo "Enter a character"
    read a
    if [[ $a =~ [aeiou] ]]; then
        echo "Vowel"
    elif [[ $a =~ [bcdfghjklmnpqrstvwxyz] ]]; then
        echo "Consonant"
    else
        echo "Invalid"
    fi

}

d