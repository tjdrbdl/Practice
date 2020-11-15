a = int(input"size of list:")
n_list = []
count = 0
for i in range(0,a):
    b = 0
    b = int(input("input each number of list"))
    n_list.append(b)

search = int(input("input integer : "))
k = len(n_list)
for i in range(0,k):
    if ((n_list[i]-search)%10) == 0:
        print("location of search sucess:",i+1)
        count = count + 1

if count == 0:
    print("failure of search")
