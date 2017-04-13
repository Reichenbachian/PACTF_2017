from PIL import Image

# toHex = lambda x:"".join([hex(ord(c))[2:].zfill(2) for c in x])

# String should be divisible by 3
string = ""
# print(daHex)
imageWidth = 100
imageHeight = 50
imageIndex = 0
im = Image.open('test.png')
pix = im.load()

for y in range(imageHeight):
	for x in range(imageWidth):
		string += ''.join((chr(int(pix[x,y][0]/2)),
			chr(int(pix[x,y][1]/2)),
			chr(int(pix[x,y][2]/2))))
		imageIndex+=3
		#You know length of key by counting repititions in image
		imageIndex%=12

print("Flag: ", string)