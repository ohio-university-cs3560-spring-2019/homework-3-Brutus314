toCheck = gets
if (toCheck =~ /^(0*((2([0-4][0-9]|5[0-5])|1[0-9]{2})|[0-9]{1,2})\.){3}(0*((2([0-4][0-9]|5[0-5])|1[0-9]{2})|[0-9]{1,2}))$/) != nil then 
	puts "Found"
else
	puts "Not Found"
end
