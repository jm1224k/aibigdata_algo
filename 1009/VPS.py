#!/usr/bin/env python
# coding: utf-8

# In[ ]:


inp_counter = int(input())
while inp_counter!=0:
    inp = input()
    result_counter = 0
    inp_len = len(inp)
    if inp_len % 2 == 1:
        print("NO")
    else:
        for i in inp:
            if i == '(':
                result_counter += 1
            elif i == ')':
                result_counter -= 1
            else:
                pass
            if result_counter < 0:
                break
        if result_counter == 0:
            print("YES")
        else:
            print("NO")
    inp_counter -= 1

