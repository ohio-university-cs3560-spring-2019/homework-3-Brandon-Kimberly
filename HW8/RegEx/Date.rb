word = gets
if word =~ /^([1-9]|[1][0-2])\/([1-9]|[1-3][0-9])\/([0-9]\W|[0-9][0-9]\W|[0-9][0-9][0-9]\W|[0-9][0-9][0-9][0-9]\W)/
    puts true
else
    puts false
end