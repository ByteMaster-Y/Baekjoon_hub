def solution(arr):
    stk = []
    i = 0
    # 일단 arr배열안에 있는 모든 요소들이 한 번씩 거쳐가야 끝난다.
    while i < len(arr):
        if not stk:
            stk.append(arr[i])
            i+=1
        elif stk[-1] == arr[i]:
            stk.pop()
            i+=1
        else:
            stk.append(arr[i])
            i+=1
    return stk if stk else [-1]
