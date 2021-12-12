from ctypes import cdll

test = cdll.LoadLibrary('test.dll')

print(test.fibo(40))
