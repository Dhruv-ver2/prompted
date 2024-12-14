import os
import re

def remove_words(s,splitter,w):
    ss=s.split(splitter)
    for i in ss:
        if w.upper()==i.upper():
            continue
        elif w.upper()!=i.upper():
            return i

path=r"G:\3. MUSIC"
slist=os.listdir(path)

sn=input("Enter the name of the song you want to play:")
bl=[]
for i in slist:
    iu=i.upper()
    snu=sn.upper()
    if snu in iu:
        bl.append(i)

if len(bl)==1:
    song=bl[0]
    index=slist.index(song)
    print("\nNow playing -------> ",remove_words(slist[index],'.',"mp3"))
    os.startfile(os.path.join(path,slist[index]))
elif len(bl)>1:
    print("\nMultiple songs found containing the name","'",sn,"'\n")
    n=1
    for i in bl:
        print(n,i)
        n=n+1

    print("\nNow which song you wanna play")
    ch=int(input("Enter the number corresponding to your choice:"))
    print("\n")
    song=bl[ch-1]
    for i in slist:
        if song in i:
            index=slist.index(i)
            print("\nNow playing -------> ",remove_words(slist[index],'.',"mp3"))
            os.startfile(os.path.join(path,slist[index]))
        else:
            print("! Song not found in the system, need to be downloaded first")

elif ("songs" in sn):
    print("found")
    sn=re.sub(r"\b(Play|songs)\b","",sn,flags=re.IGNORECASE)
    sn=' '.join(sn.split()) #done

    path=r"G:\3. MUSIC\Playlists" #done
    slist=os.listdir(path) #done

    snu=sn.upper()

    for i in slist:
        if snu in i.upper():
            index=slist.index(i)
            os.startfile(os.path.join(path,slist[index]))


     

else:
    print("\n ! Sorry\nSong not found in the system, need to be downloaded first")


