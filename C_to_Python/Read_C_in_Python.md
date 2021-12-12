1. Write down a c file. 'test.c'

2. In terminal, 'gcc -c test.c'
(-c only compiles, not link. Generate an object file(test.o).)

3. In terminal, 'gcc -shared -o test.dll test.o'
(then, test.dll is generated.)

4. Use the function by

```python
from ctypes import cdll
test = cdll.LoadLibrary('test.dll')

test.<function_name>
```
