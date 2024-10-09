def solution(myString, pat):
    # TypeError: 'str' object does not support item assignment
    # 문자열 불면이라서 list로 바꿔야됨
    # A <-> B
    # 부분 문자열이 pat에 있어야만 1 아니면 0
    myString = list(myString)
    for i in range(len(myString)):
        if myString[i] == "A":
            myString[i] = "B"
        elif myString[i] == "B":
            myString[i] = "A"
    answer = ''.join(myString)
    if pat in answer:
        return 1
    return 0