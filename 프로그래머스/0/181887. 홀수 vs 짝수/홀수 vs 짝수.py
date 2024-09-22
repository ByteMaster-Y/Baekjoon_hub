def solution(num_list):
    even = [num_list[i] for i in range(len(num_list)) if i % 2 == 0]
    sum_even = sum(even)
    odd =  [num_list[i] for i in range(len(num_list)) if i % 2 == 1]
    sum_odd = sum(odd)
    if sum_even > sum_odd:
        return sum_even
    else:
        return sum_odd