def mdc(x,y):
   if x == y: return x
   if x < y: return mdc(y, x)
   return mdc(x-y, y)

print(mdc(6,2))
