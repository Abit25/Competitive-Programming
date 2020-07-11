def checkMagazine(magazine, note):
    dic_mag = {}
    dic_note = {}
    for i in range(len(magazine)):
        if(magazine[i] in dic_mag.keys()):
            dic_mag[magazine[i]] += 1
        else:
            dic_mag[magazine[i]] = 1
    for j in range(len(note)):
        if(note[j] in dic_note.keys()):
            dic_note[note[j]] += 1
        else:
            dic_note[note[j]] = 1
    print(dic_mag)
    print(dic_note)
    count = 0
    for k in dic_note.keys():
        if(k in dic_mag.keys()):
            if(dic_mag[k] >= dic_note[k]):
                count += 1
    if(count == len(dic_note.keys())):
        print("Yes")
    else:
        print("No")


magazine = ["give", "me", "one", "grand", "today", "night"]
note = ["give", "one", "grand", "today"]

print(checkMagazine(magazine, note))
