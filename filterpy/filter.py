# Blurs an image

from PIL import Image, ImageFilter

# Blur image
before = Image.open("yard.bmp")
after = before.filter(ImageFilter.BoxBlur(22))
after.save("out.bmp")
