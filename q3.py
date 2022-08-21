import sys
# For getting input from input.txt file
#sys.stdin = open('input.txt', 'r')
 
# Printing the Output to output.txt file
#sys.stdout = open('output.txt', 'w')

test_cases = int(input())

for tests in range(int(test_cases)):
    n = int(input())
    p = str(input())
    q = str()
    for i in p:
        q +=i
        res = p+q
        if res == res[::-1]:
            break
    out = "Case #"+str(tests +1)+ ": " + q
    print(out)
    
    
