import csv

with open('test.csv','r') as csvfile:
    opencsv = csv.reader(csvfile, delimiter=' ')
    for line in opencsv:
        print(" ".join(line))