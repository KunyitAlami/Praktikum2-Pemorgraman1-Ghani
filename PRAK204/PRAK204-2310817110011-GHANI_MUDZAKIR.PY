import math


jari,tinggi = map(float, input().split())

phi = float(22/7)
volume = (phi * jari * jari * tinggi)
luas = (2*phi * (jari)* (jari + tinggi))
keliling = (2 * phi * jari)


print(f"\nVolume : {volume:.2f}")
print(f"Luas : {luas:.2f}")
print(f"Keliling : {keliling:.2f}")





