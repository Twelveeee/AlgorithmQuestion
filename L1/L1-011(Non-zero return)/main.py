import re
dele=[]
str1 = input()
dele = input()
for i in range(len(dele)):
    str1=re.sub(str(dele[i]),"",str1)
print(str1)