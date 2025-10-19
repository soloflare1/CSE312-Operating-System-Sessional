# # str='bangladesh'
# # # take first 2 chars
# # a=${str:0:2}

# # echo $a

# # add_letter=${str:0:5}A${str:5}
# # echo $add_letter

# # name='Nosratee Naba'
# # add_Jahan=${name:0:8}Jahan${name:8}
# # echo $name



# # user input


# read -p 'Enter the number of elements ' n 

# arr=()
# for((i=0;i<n;i++))
# do
# read arr[$i]
# done

# mx=${arr[0]}
# for((i=0;i<n;i++))
# do
# if(( ${arr[i]} > mx ))
# then
#   mx=${arr[i]} 
# fi
# done

# echo $mx



#!/bin/bash

read -p "Enter the number of elements: " n

arr=()
echo "Enter $n elements:"
for ((i=0; i<n; i++))
do
  read arr[i]
done

mx=${arr[0]}  

for ((i=1; i<n; i++))
do
  if (( ${arr[i]} > mx ))
  then
    mx=${arr[i]}
  fi
done

echo "Maximum value: $mx"











