
#1
echo "What are your name, program name, enrollment number? "
read name program enroll


echo "Name: $name"
echo "Program: $program"
echo "Enrollment No: $enroll"





#2
echo "Enter four integers "
read a b c d

sum=$((a+b+c+d))
product=$((a*b*c*d))
average=$((sum/4))

echo "Sum = $sum"
echo "Product = $product"
echo "Average = $average"



#3
echo "Enter two numbers : "
read a b

echo "Before swapping: "
echo " $a and $b "

temp=$a
a=$b
b=$temp

echo "After swapping : "
echo " $a and $b "





#4
echo  "Enter a 5 digit number: "
read n

r=0

while [ $n -gt 0 ]
do
    last_digit=$(( n % 10 ))
    r=$(( r * 10 + last_digit ))
    n=$(( n / 10 ))
done

echo "Reversed number = $r"




