# 1.  Ternary Operator
"""
condition=True

x=1 if condition else 0

print(x)

"""
# 2. Enumerate function
'''              for printing index and names                 '''

"""
names=['rohan','sabale','shreyash','savita']
for index,name in enumerate(names):
    print(index,name)
    """

# 3. Taking two values from two lists at same time 

# This is the traditional way
"""
names=['Peter','clark','wade','bruce']
heroes=['spiderman','superman','deadpool','batman']

for index,name in enumerate(names):
    hero=heroes[index]
    print(f'{name} is actually {hero}')
    """

#    This is the most effective way
"""

names=['Peter','clark','wade','bruce']
heroes=['spiderman','superman','deadpool','batman']

for name,hero in zip(names,heroes):
    print(f'{name} is actually {hero}')

for value in zip(names,heroes):
    print(value)
"""

# 4. for hiding pass word whilw input  

"""
from getpass import getpass

username=input('Username: ')
password=getpass('password: ')
print('Logging in....')

"""







