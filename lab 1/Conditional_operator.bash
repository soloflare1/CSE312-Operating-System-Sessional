# Conditional operator
a=20
b=12

if [ $a -gt $b ]
then
	echo a is grater than b
elif [ $a -lt $b ]
then
	echo a is less than
else
    echo a and b are equal
fi
