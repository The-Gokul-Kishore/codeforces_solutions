c=0
d={'o':10,'a+':9,'a':8,'b+':7,'b':6}
l=input("Enter your grades as per the oreder of result: ").split()
for i in range(len(l)):
    if i==6:
        continue
    if i==7:
        c+=d[l[i].lower()]
        continue
    c+=d[l[i].lower()]*4
print(c/25)


#use this for calc gpa if you need help
