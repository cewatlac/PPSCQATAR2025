def swap_and_calculate_sum(a, b, k):
    for i in range(k):
        if b[i] > a[i]:
            a[i], b[i] = b[i], a[i]
        else:
            break
    return sum(a)

def process_test_case(n, k, a, b):
    a.sort()
    b.sort(reverse=True)
    return swap_and_calculate_sum(a, b, k)

def main():
    t = int(input())
    for case_num in range(1, t + 1):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        result = process_test_case(n, k, a, b)
        print(result)

main()
