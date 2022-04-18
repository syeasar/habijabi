#taking input in a 2D list

rows = int(input("enter row no.: "))
cols = int(input("enter col no.: "))
list2D = []
for i in range (rows):
    col = []
    for j in range(cols):
        x = int(input(f"input number for {i+1}th row and {j+1}th column :"))
        col.append(x)
    list2D.append(col)

for i in range (rows):
    print(list2D[i])
