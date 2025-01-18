import math


def divisors(a):
    divs = []
    for i in range(1, int(math.sqrt(a)) + 1):
        if a % i == 0:
            divs.append(i)
            if a // i != i:
                divs.append(a // i)
    return divs


def search(a, divs):
    left, right = 0, len(divs) - 1
    while left <= right:
        mid = left + (right - left) // 2
        if a % divs[mid] != 0:
            right = mid - 1
        else:
            left = mid + 1
    return right


def main():
    test = int(input())
    for _ in range(test):
        n, k = map(int, input().split())
        nums = list(map(int, input().split()))

        divs = divisors(k)
        divs.sort()
        scores = 0
        for num in nums:
            scores += search(num, divs) + 1
        print(scores)


if __name__ == "__main__":
    main()
