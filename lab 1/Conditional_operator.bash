# Conditional operator

# a=20
# b=12

read a b

if [ $a -gt $b ]
then
    echo "a is greater than b"
elif [ $a -lt $b ]
then
    echo "a is less than b"
else
    echo "a and b are equal"
fi

