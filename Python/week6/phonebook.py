names = ["Yuliia","David","John"]

name = input("Name: ")

for n in names:
  if n == name:
    print("Found!")
    break
else:
  print("Not found")