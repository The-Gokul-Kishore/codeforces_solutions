from math import gcd

def operation(l, r):
    count = 0
    nums = [i for i in range(l, r + 1)]
    n = len(nums)
    i = 0
    while i < n - 2:
        for j in range(i + 1, n - 1):
            for k in range(j + 1, n):
                if gcd(nums[i], nums[j]) == 1 and gcd(nums[j], nums[k]) == 1 and gcd(nums[i], nums[k]) == 1:
                    count += 1
                    
                    nums.pop(k)
                    nums.pop(j)
                    nums.pop(i)
                    n -= 3
                    break
            else:
                continue
            break
        i += 1
    return count

t = int(input())
answers = []

for _ in range(t):
    l, r = map(int, input().split())
    answers.append(operation(l, r))

for i in answers:
    print(i)