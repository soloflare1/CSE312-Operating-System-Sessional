# without user input
arr=(1 2 3 4 5)
arr_size=${#arr[@]}

read -p 'Enter another number : ' n

count=0
echo 'Print array'

for((i=0;i<arr_size;i++))
do
if((${arr[i]}>n))
then
count=$((count+1))
echo ${arr[i]}
fi
done

echo $count
