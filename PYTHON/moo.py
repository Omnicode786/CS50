import cowsay
import sys
if len(sys.argv) != 2:
    cowsay.cow("This is CS50")
    cowsay.dragon("This is CS50")
    cowsay.meow("This is CS50")
    sys.exit(1)

else:
    cowsay.cow(f"Hello, {sys.argv[1]}")
    cowsay.dragon(f"Hello, {sys.argv[1]}")
    sys.exit(0)

