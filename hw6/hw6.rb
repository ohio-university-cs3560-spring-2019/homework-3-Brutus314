toChange = gets
toChange = toChange.gsub(/\bf/, 'gh').gsub(/\bF/, 'Gh')
toChange = toChange.gsub(/\Bi\B/, 'o').gsub(/\BI\B/, 'O')
toChange = toChange.gsub(/sh\b/, 'ti').gsub(/Sh\b/, 'Ti').gsub(/sH\b/, 'tI').gsub(/SH\b/, 'TI')
puts toChange
