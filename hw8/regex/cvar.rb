toCheck = gets
if (toCheck =~ /^[a-zA-Z_][a-zA-Z0-9_]*$/) != nil then 
	puts "Found"
else
	puts "Not Found"
end
