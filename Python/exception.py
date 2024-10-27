try:
    a = input("enter a num : ")
    nums = [3, 6]
    print(nums[a])
except Exception as e:
    print(e)
finally:
    print("try-except ended")

print("end of program")