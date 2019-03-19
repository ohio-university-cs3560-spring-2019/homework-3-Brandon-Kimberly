word = gets
if word =~ /(^_|^\w)[a-z]*[A-Z]*_*[0-9]*$/
    puts true
else
    puts false
end