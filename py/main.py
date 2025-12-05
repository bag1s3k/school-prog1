# Absolut value
n = float(input("Enter num: "))
if n >= 0:
    print(n)
else:
    print(n * -1)

# Even or Odd
n = int(input("Enter int: "))
if n % 2 == 0:
    print("Even")
else:
    print("Odd")

# Positive, Negative or Zero
n = float(input("Enter num: "))
if n > 0:
    print("Positive")
elif n == 0:
    print("Zero")
else:
    print("Negative")

# Is value in interval?
array = input("Enter interval e.g. (1 5]: ")
n = float(input("Enter num: "))

nums = array[1:-1].split(" ")

if array[0] == "[" and array[-1] == "]":
    if float(nums[0]) <= n <= float(nums[1]):
        print("In")
    elif n < float(nums[0]):
        print("Out below")
    else:
        print("Out above")

elif array[0] == "(" and array[-1] == ")":
    if float(nums[0]) < n < float(nums[1]):
        print("In")
    elif n <= float(nums[0]):
        print("Out below")
    else:
        print("Out above")

elif array[0] == "[" and array[-1] == ")":
    if float(nums[0]) <= n < float(nums[1]):
        print("In")
    elif n < float(nums[0]):
        print("Out below")
    else:
        print("Out above")

elif array[0] == "(" and array[-1] == "]":
    if float(nums[0]) < n <= float(nums[1]):
        print("In")
    elif n <= float(nums[0]):
        print("Out below")
    else:
        print("Out above")

# Which season
n = int(input("Enter month (int): "))
if 3 <= n <= 5:
    print("Spring")
elif 6 <= n <= 8:
    print("Summer")
elif 9 <= n <= 11:
    print("Fall")
elif 1 <= n <= 12:
    print("Winter")
else:
    print("Doesn't exists")