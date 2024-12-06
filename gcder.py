from math import gcd
tests = int(input())
ansarr =[];
def solver(l,r):
    cnt =0
    numero = list(i for i in range(l,r+1))
    lent = len(numero);
    i =0;
    while(i<lent-2):
        for j in range(i+1,lent-1):
            for k in range(j+1,lent):
                if(gcd(numero[i],numero[j])==1 and gcd(numero[i],numero[k])==1 and  gcd(numero[k],numero[j])==1):
                    cnt+=1;
                    numero.pop(k);
                    numero.pop(j);
                    numero.pop(i);
                    lent-=3;
                    break
            else:
                    continue
            break
            
        i+=1
    return cnt
        
for _ in range(tests):
    l,r=map(int,input().split())
    ansarr.append(solver(l,r))
for i in ansarr:
    print(i)
