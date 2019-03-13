toCheck = gets
if (toCheck =~ /^[a-z]{2}[0-9]{6}@ohio\.edu$/) != nil then 
	puts "Found"
else
	puts "Not Found"
end
