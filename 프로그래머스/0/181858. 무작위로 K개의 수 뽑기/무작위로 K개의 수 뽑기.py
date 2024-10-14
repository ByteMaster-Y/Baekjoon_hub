def solution(arr, k):
    pre_array = []  
    seen = set()
    
    for num in arr:
        if num not in seen: 
            pre_array.append(num) 
            seen.add(num)
            if len(pre_array) >= k:
                break;
    while len(pre_array) < k:
        pre_array.append(-1)
    
    return pre_array