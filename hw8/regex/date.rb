toCheck = gets
if (toCheck =~ /^(0[1-9]|[12][0-9]|3[01])\/(0[1-9]|1[012])\/([0-9]{4})$/) != nil then 
	puts "Found"
else
	puts "Not Found"
end
