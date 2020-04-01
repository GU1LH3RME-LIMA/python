   
def seleca(V,r):
    comp=0
    for i in range(0,r-1):
        for j in range(i,r):
            if V[j]<V[i]:
                comp+=1
                V[i],V[j]=V[j],V[i]
    return comp
__name__ == '__main__':
    n=int(input())  
    for i in range(0,n):
        while True:
            try:
                L=int(input())
                if(L<0 or L>50):raise
                else:break
            except:
                print("")
        V=[]
        while True:
            try:
                V=input().split(' ')
                break
            except:
                print("")
    
        S=seleca(V,L)
        print("Optimal train swapping takes {:d} swaps.".format(S))
