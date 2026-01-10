import sys

def another():
    print("Hello Another func")
def another2():
    print("Hello Another func2")

def main(args):
    for arg in args:
        print(f"Argument: {arg}")
//-------------------------------------
// 新しいRP 用 2 for PR repeated test
// 議論の結果、もっと詳しいコメントをここに書きます。
// すごーく詳しいせいつ名を日本語で
//-------------------------------------

if __name__ == "__main__":
    main(sys.argv[1:])
    another()
    another2()
    print("AAA", sys.argv)

#
