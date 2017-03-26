from PIL import Image

im = Image.open('static/trees.png')
cols, rows = im.size
im1 = Image.new("RGB", (cols,rows))
image_revealed = im1.load()
trees = im.load()
for r in range(rows):
    for c in range(cols):
        image_revealed[c,r] = (int(bin(trees[c,r][0])[2:].zfill(8)[-3:], 2)*32,
                               int(bin(trees[c,r][1])[2:].zfill(8)[-3:], 2)*32,
                               int(bin(trees[c,r][2])[2:].zfill(8)[-3:], 2)*32)
im1.save('image_revealed.png')
