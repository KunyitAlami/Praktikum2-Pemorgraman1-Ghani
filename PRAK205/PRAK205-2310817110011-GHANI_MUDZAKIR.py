import math

a,b = map(int, input().split())

a_pangkat = pow(a, 2)
b_pangkat = pow(b, 2)
alas = b_pangkat-a_pangkat
c = math.sqrt(alas)

keliling = a+b+c
luas = float(1/2) * c * a

print(f"Alas : {int(c)} cm")
print(f"Tinggi : {a} cm")
print(f"Keliling : {int(keliling)} cm")
print(f"Luas : {int(luas)}  cm^2")


