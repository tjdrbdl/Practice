#이진 탐색 알고리즘

def binary_search(n_List,number):
    start_value = 0
    end_value = len(n_List) - 1
    value = 0
    if number in n_List:
        while True:
            mid_value = (start_value + end_value) // 2
            if n_List[mid_value] == number: #발견했을경우
                print(mid_value)
                break
            
            elif number > n_List[mid_value]:
                start_value = mid_value + 1
            else:
                end_value = mid_value -1
        
    else:
        print("failure of search")