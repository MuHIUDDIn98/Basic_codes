numbers = [12,13,14,45,656,7,8,89]


odd_num = [num for num in numbers if num %2 == 1]
print(odd_num)

even_number = [num for num in numbers if num%2 ==0]
print(even_number)

names = ['Anik', 'sabbir','salman']
ages = [37,38,39]

pairs = [(name,age) for name in names for age in ages]
print(pairs)
