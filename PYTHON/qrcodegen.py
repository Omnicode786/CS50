import qrcode
img = qrcode.make("https://www.linkedin.com/in/muzammil-alam-b427a0323/")
img.save("qr.png", "PNG")
