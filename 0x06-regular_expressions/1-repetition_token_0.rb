#!/usr/bin/env ruby

# Define an array of patterns with increasing 't' characters
patterns = ["hbttn", "hbtttn", "hbttttn", "hbtttttn"]

# Get the argument from the command line
if ARGV.empty?
  puts "Please provide an argument."
else
  input = ARGV[0]

  # Loop through each pattern and scan for matches
  patterns.each do |pattern|
    matches = input.scan(/#{pattern}/)
    puts "#{pattern}: #{matches.join}" unless matches.empty?
  end
end
