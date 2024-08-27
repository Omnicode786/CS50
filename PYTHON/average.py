from cs50 import get_int
def main():
    # [ represents list ]
    scores = []
    for i in range(3):
        score = get_int("score: ")
       #this can be done like this as well
       # scores = scores + [score]
       scores.append(score)
    average = sum(scores) / len(scores)
    print(f"{average:.2f}")
main()
