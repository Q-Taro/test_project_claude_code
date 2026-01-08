import sys

def another():
    print("Hello Another func")

def main(args):
    for arg in args:
        print(f"Argument: {arg}")

if __name__ == "__main__":
    main(sys.argv[1:])
    another()
    print("AAA", sys.argv)

