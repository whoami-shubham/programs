import os
import time
data=r"C:\Users\Shubham\Desktop\songs"
print (os.getcwd())
os.chdir(data)
count=0
file=os.listdir(os.getcwd())
print (os.getcwd())
for songs in file:
    
    if songs.endswith(".mp3"):
        print(time.ctime())
        count+=1
        os.startfile(songs)
        time.sleep(2*60)
    
    if count==2:
         break
