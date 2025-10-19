# without user input
arr=(1 2 3 4 5)
echo ${arr}

echo 'Total elements of array : ' ${#arr[@]}

arr_size=${#arr[@]}

sum=0
echo 'Summation of the array is'
for((i=0;i<arr_size;i++))
do
sum=$((sum + arr[i]))
done

echo $sum


# user input
# arr=()

# read -p 'Enter the number of elements ' n 
# for((i=0;i<n;i++))
# do
# read arr[$i]
# done

# echo 'print the array element';
# for((i=0;i<n;i++))
# do
# echo ${arr[i]}
# done









