
T = int( input() )

for i in range(0, T):
    data = input()
    (a,b) = data.strip().split(' ')

    a = int(a)
    b = int(b)

    print('Case ' + str(i+1) + ': ' + str(a+b) )
    
