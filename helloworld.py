import shutil
import time 

size=shutil.get_terminal_size()
output="Hello World"
animesh=output+" "*(size.columns-len(output))
while True:
    print('\r' + animesh, end='')
    animesh=animesh[-1]+animesh[:-1]
    time.sleep(0.2)
