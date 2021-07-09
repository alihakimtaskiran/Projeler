import hashlib as h
while 1:
        h_=h.md5()
        h_.update(input("type here:").encode("utf-8"))
        print(h_.hexdigest())
