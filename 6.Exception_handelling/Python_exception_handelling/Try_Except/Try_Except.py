try:
    with open('filelog.txt','r') as reader:
        reader.read()
except Exception as e:
    print(e)