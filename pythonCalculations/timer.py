#convert prefix to decimal Farad value
def to_Farad(value, prefix):
	if(prefix == "uF"):
		return value * 0.000001
	elif(prefix == "nF"):
		return value * 0.000000001
	elif(prefix == "pF"):
		return value * 0.000000000001
test = to_Farad(0.01, "uF")
print('{:.20f}'.format(test))

#example
Cd = to_Farad(0.01, "uF")
C  = to_Farad(10, "uF")
R1 = 1000	#1k
R2 = 2000	#2k

#test z tem kar mam
Cd = 0.00000001	#0.01uF
C  = 0.000000047#0.047uF
R1 = 100000	#100k
R2 = 470000	#470k

#test z tem kar lahk kupm
Cd = 0.00000001	#0.01uF
C  = 0.0000001 	#100nF
R1 = 1000000 	#1000k
R2 = 4700000	#4700k

#na plosci 
#Cd = 10nF
#C  = 1uF
#R1 = 1k
#R2 = 100k

#kaj lhk kupm na hte
Cd = to_Farad(10, "nF")
C  = to_Farad(10, "uF")	
R1 = 22000	#23k
R2 = 22000	#23k

def calT1(R1, R2, C):
	
	return (0.693 * (R1 + R2) * C)

def calT2(R1, R2, C):
	
	return (0.693 * R2 * C)


t1 = calT1(R1, R2, C)
t2 = calT2(R1, R2, C)

t = t1 + t2
f = 1/t
f2 = 1.44/((R1 + 2*R2)*C)

print(str(t1) + "s + " + str(t2) + "s = " + str(t) + "s = " + str(f2) + "Hz")
