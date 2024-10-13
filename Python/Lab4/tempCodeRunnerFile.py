def f(rom,dim,era):
    D = dim**2-4*rom*era
    x1 = -(D**0.5 + dim)/4*rom
    x2 = -(D**0.5 - dim)/4*rom
    return x1,x2
a,b,c = map(int,input().split())
print(f(a,b,c))