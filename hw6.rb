full_text = STDIN.read.split().each do |word|
    if word =~ /^f/ or word =~ /^F/
        word = "gh" + word[1..]
    end
    if word =~ /sh$/ or word =~ /SH$/
        word = word[0..-3] + "ti"
    end
    if word =~ /.+i+.+/ or word =~ /.+I+.+/ #Find i's in the middle
        trimmed_word = word[1..-2] #Ensures i's in front and back not replaced
        new_word = word[0] #Put first letter in
        trimmed_word.each_char do |char|
            if char == 'i' or char == 'I'
                char = "o"
            end
            new_word += char
        end
        new_word += word[-1] #Put last letter in
        word = new_word
    end
    puts word
end