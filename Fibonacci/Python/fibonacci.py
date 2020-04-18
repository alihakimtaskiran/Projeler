def fibonacci(x):
    if x==0:
        return 0
    elif x==1:
        return 1
    elif x>1:
        return fibonacci(x-1)+fibonacci(x-2)

a=int(input("Enter a number:"))
print(fibonacci(a))
