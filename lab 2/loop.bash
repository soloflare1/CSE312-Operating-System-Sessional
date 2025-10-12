# while loop

i=1
while((i<=10))
do 
  echo $i
  
# i=$((i+1))
i=$((++i))
# i=$((i++))  error

done


#  for loop

for((i=1;i<=15;i++))
do 
  echo $i
done
