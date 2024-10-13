def solution(arr, flag):
    X = []  # 빈 배열 X

    for i in range(len(arr)):
        if flag[i]:  # flag[i]가 True일 경우
            X.extend([arr[i]] * (arr[i] * 2))  # arr[i]를 arr[i] * 2번 추가
        else:  # flag[i]가 False일 경우
            # X에서 마지막 arr[i]개의 원소 제거
            X = X[:-arr[i]] if arr[i] <= len(X) else []  # 안전하게 제거

    return X

