import sys
file_data = []
split_data = []

for line in sys.stdin:
    file_data.append(line)

for file in file_data:
    for bit in file.split(" "):
        if bit != "":
            split_data.append(bit)

i = 0

try:
    while (split_data[i] != ""):
        print (split_data[i] + " lines, "
               + split_data[i + 1] + " words, "
               + split_data[i + 2] + " characters, "
               + "in file: " + split_data[i + 3])
        i += 4
except:
    exit()
