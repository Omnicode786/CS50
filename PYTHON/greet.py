import sys

if len(sys.argv) != 2:
    print("Missing")
    sys.exit(1)
else:
    print(f"Hello, {sys.argv[1]}")
    sys.exit(0)
