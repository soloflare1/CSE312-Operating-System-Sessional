# note
# numeric -> (())
# string -> [[]] ,but remember space sensitive []


#  problem 1

# str1='nosratee'
# str2='naba'

read str1 str2

# if [ $str1 == 'naba']
# if [ $str1 == $str2 ]

if ( $str1 == $str2 )
then 
    echo 'YES'

else 
    echo 'NO'
fi


# problem 2


# str1='nosratee'
# str2='naba'

read first_name last_name

# if [ $str1 == 'naba']
# if [ $str1 == $str2 ]

# [[]], {{}},(()), [],() valid
# {} invalid
if ( $first_name == $last_name )
then 
    echo 'Two string are equal'

else 
    echo 'Two string are not equal'
fi




# str1='nosratee'
# str2='naba'
# if [ $str1 == 'naba']
# if [ $str1 == $str2 ]

read first_name last_name

if [[ $first_name > $last_name ]]
then 
    echo 'first_name is greater than last_name'
elif [[ $first_name < $last_name ]]
then
    echo 'first_name is less than last_name'
else 
    echo 'Two string are equal'
fi
