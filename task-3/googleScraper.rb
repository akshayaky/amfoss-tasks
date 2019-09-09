require 'nokogiri'
require 'open-uri'

print "Enter the keyword :"
keyword = gets
doc = Nokogiri::HTML(open('https://www.google.com/search?num=15&q='+ keyword).read)

links = doc.xpath('//div//a/div')

a=0
b=0

pr = false
pr1 = false
while b<20 do
    begin
        pr = links[a].text.strip.include? "https"
        pr1 = links[a+1].text.strip.include? "https"
       
        if pr1
            k =  links[a].text.strip.delete('\"')
            p k.tr('>',"/")
            pr1 = false
            b = b + 1
            
        end
        if pr
            p links[a].text.strip.delete(' ').tr('›','/')
            b = b+1
            pr = false
            puts "\n"
        end
        
    
rescue
      puts "end of result"
      break
end
    
    a=a+1
end
