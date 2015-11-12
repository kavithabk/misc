import base64


n = int(raw_input())
while n > 0:
    s = raw_input()
    a = base64.b32decode(s, casefold=False, map01=None)
    print base64.b64encode(a)
    n -= 1
