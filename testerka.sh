for((i = 0;i <= 1000;i++)); do
    ./generator $i > tmp
    cat tmp
    echo
    ./prog < tmp > out
    cat out
    echo
    echo
done