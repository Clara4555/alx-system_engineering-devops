#!/usr/bin/env ruby

# Check if the argument contains the word "School"
def match_school(arg)
  # Define the regular expression to match "School" (case-insensitive)
  regex = /School/i

  if arg =~ regex
    puts arg
  end
end

if ARGV.empty?
  puts "Please provide an argument."
else
  argn = ARGV[0]
  match_school(arg)
end
