word = gets
if word =~ /^[a-z]{2}[1-9]{6}@ohio\.edu/
    puts true
else
    puts false
end