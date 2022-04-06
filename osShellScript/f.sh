#First print a line “Enter a character.” 
#Then you have to enter a character. 
#Write a program to Check Whether a Character is Vowel or Consonant or invalid with switch case

d(){
    echo "Enter a character."
    read a
    case $a in
        a|e|i|o|u|A|E|I|O|U)
            echo "Vowel"
            ;;
        [bcdfghjklmnpqrstvwxyz])
            echo "Consonant"
            ;;
        *)
            echo "Invalid input"
            ;;
    esac
    
}
d