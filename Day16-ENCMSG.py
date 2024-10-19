# cook your dish here
# cook your dish here
num = int(input())

for x in range(num):
    length = int(input())
    string = input()
    lst = list(string)
    
    if (length % 2 != 0):
        lengthx = length - 1
    else:
        lengthx = length
    
    for y in range(0, lengthx, 2):
        temp = lst[y]
        lst[y] = lst[y + 1]
        lst[y + 1] =  temp
    
    #string = ''.join(lst)
    
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    for x in range(0, length):
        lst[x] = alphabet[25 - alphabet.index(lst[x])]
    
    string = ''.join(lst)
    print(string)
    
    