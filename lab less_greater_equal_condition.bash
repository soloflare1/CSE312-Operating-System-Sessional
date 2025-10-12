read -p 'Enter two Numbers: ' a b

if ((a > b))
then
   echo 'a is greater than b'
elif ((a < b))
then
   echo 'a is less than b'
else
   echo 'a and b are equal'
fi
