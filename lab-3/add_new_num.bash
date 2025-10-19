number=(10 12 6)

echo 'Original array: '${number[@]}
read -p 'Enter a number to add ' new

number+=($new)
echo 'Updated array ' ${number[@]}

