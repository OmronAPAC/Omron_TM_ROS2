import rclpy
import time
import sys
import json
import math
from math import radians

def distance_finder(one,two) :
    [x1,y1,z1] = one[0:3]  # first coordinates
    [x2,y2,z2] = two[0:3]  # second coordinates

    return (((x2-x1)**2)+((y2-y1)**2)+((z2-z1)**2))**(1/2)

data = []
with open('scripts/Vive/positions.txt') as json_file:
    data = json.load(json_file)
max = len(data)
print("Number of points: " + str(max))
print("Time between points: " + str(round(3/max, 3)))

largest_dist = 0
prev = []
for i in data:
    if not prev:
        prev = i
        continue

    dist = distance_finder(i, prev)
    if dist > largest_dist:
        largest_dist = dist

print("Largest distance: " + str(largest_dist))
