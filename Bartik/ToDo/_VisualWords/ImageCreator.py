from PIL import Image

# toHex = lambda x:"".join([hex(ord(c))[2:].zfill(2) for c in x])

# String should be divisible by 3
daHex = "flag_HidingSomeFunStuffInThisImage!!"
# print(daHex)
imageWidth = 100
imageHeight = 50
imageIndex = 0
im = Image.new("RGB", (imageWidth, imageHeight))
pix = im.load()

for y in range(imageHeight):
	for x in range(imageWidth):
		pix[x,y] = (ord(daHex[imageIndex])*2, ord(daHex[imageIndex+1])*2, ord(daHex[imageIndex+2])*2)
		imageIndex+=3
		imageIndex%=len(12)

im.save("test.png", "PNG")