Problem4(){
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
Problem4