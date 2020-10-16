
def solveFizzBuzz(x):
    
    if(x % 15 == 0):
        print ("Fizz Buzz", end='')
        return

    if(x % 3 == 0):
        print ("Fizz", end='')
        return

    if(x % 5 == 0):
        print ("Buzz", end='')
        return

    print (x, end='')


n = int(input())

for i in range(1, n+1):
    solveFizzBuzz(i)
    if(i == n):
        print (".")
    else:
        print(",", end=' ')
