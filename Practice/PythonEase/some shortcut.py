#The individual entities are returned along with their number of occurrences in a tuple 
"""

from collections import Counter
arr=[1, 3, 4, 1, 2, 1, 1, 3, 4, 3, 5, 1, 2, 5, 3, 4, 5] 
counter=Counter(arr)
print(counter)

"""
"""
2.   The n-largest/n-smallest function of the heapq Package

This function helps to return the top n smallest/largest elements in any lists and here again n is a number  specified by the programmer.



import heapq
grades= [110, 25, 38, 49, 20, 95, 33, 87, 80, 90]
print(heapq.nlargest(3,grades))
print(heapq.nsmallest(4,grades))

"""
"""
3.  The Map function.

income=[10,30,75]
def double_money(dollars):
    return dollars*2

new_income=list(map(double_money,income))
print(new_income)

"""

"""
4. Dictionary and concept of zipping Dictionaries


# Python code to demonstrate use of zip. 
import heapq 
  
stocks = { 
    'Goog' : 520.54, 
    'FB' : 76.45, 
    'yhoo' : 39.28, 
    'AMZN' : 306.21, 
    'APPL' : 99.76
    } 
  
zipped_1 = zip(stocks.values(), stocks.keys()) 
  
# sorting according to values 
print(sorted(zipped_1)) 
  
zipped_2 = zip(stocks.keys(), stocks.values()) 
print(sorted(zipped_2)) 
#sorting according to keys 


"""

"""
5. Concatenation of list of strings

string = "" 
lst = ["Geeks", "for", "Geeks"] 
for i in lst: 
    string += i 
print(string) 

This method of joining a list of strings is definitely not the best method because everytime a new string will be created 


lst = ["Geeks", "for", "Geeks"] 
string = ' '.join(lst) 
print(string) 

"""