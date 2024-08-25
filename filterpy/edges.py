# Blurs an image

from PIL import Image, ImageFilter

# Find edges
before = Image.open("yard.bmp")
after = before.filter(ImageFilter.FIND_EDGES)
after.save("out.bmp")
