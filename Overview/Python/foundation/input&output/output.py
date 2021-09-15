# -*- codeing = utf-8 -*-
# @Time : 2021/9/15 16:35
# @Author:Carl
# @File :  output.py
# @Software:PyCharm

#   ①两种基本输出表达方式 单引号 or 双引号
print('输出字符串1') #输出字符串1
print("输出字符串2") #输出字符串2

#   ②变量输出
a = 5
print('var:',a) #var: 5

#   ③格式化输出1
age = 5
print('今年%d岁'%age)
age+=2  #age+=2  ==  age = age + 2
print('今年%d岁'%age)

#格式化输出2
name = 'Carl'
print('i am %s, %d years old!'%(name,age))  # i am Carl, 7 years old!
print(f'Hello {name}')   # python3.6 version added  f-string formatting

print("hello",end="")  #表示不换行
print("world",end="\t") #转义字符  相当于tab


