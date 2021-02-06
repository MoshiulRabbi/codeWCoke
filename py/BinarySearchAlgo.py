


def BinarySearch(ArrList,SearchItem):
    UpperBound = len(ArrList)-1
    LowerBound = 0
    Midpoint = 0

    while LowerBound <= UpperBound:

        Midpoint = (LowerBound + UpperBound) // 2

        if ArrList[Midpoint] < SearchItem:
            LowerBound = Midpoint + 1

        elif ArrList[Midpoint] > SearchItem:
            UpperBound = Midpoint - 1

        if ArrList[Midpoint] == SearchItem:

            return 'Found'

    return 'Not Found'

RandomList = [24, 45, 64, 44, 32, 45, 11, 4, 5,1,66]

SortedList = sorted(RandomList)

print(BinarySearch(SortedList,32))