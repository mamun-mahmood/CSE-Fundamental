num = int(input("Enter number "))
#num2 = int(input("Enter number 2"))
for i in range(2, num):
	count = 0
	if i % 2 == 0:
		count += 1
if count == 0 and i != 1:
	print(num, 'is prime')
else:print('Not prime')