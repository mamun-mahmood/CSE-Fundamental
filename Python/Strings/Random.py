#name='Python for beginner'
#color=input("What is favourite color?")
#print(name[1:-1 ]+' like\'s the color '+color)
first='john'
last='smith'
message=first+'['+last+']is a coder'
msg=f'{first}    [{last}]  is a coder'
name=first[0:0]
print(msg+ name)
user=input('Enter some character....')
print(l5en(user))
print(user)
print(user.upper()+'(printed to upper case all)')
print(user.lower()+('printed to lower case all'))
print(user.capitalize()+(' capitalized.'))
print(user.capitalize()[0:-1])
print(user.replace('user[0:2]','Mam'))
print(user.find('P'))
num1=input("Enter a number")
num2=input("Enter another number")
if num1>num2:print(num1+' is larger between two')
elif num2>num1:print(num2+' is larger between two')
elif num1==num2:print("Numbers are equal")