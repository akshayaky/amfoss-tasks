##  3. Google Scraping using Ruby
Given a keyword example, ”Linux”, you need to get the top 10 google search results for the
given particular word. You can use Ruby for doing this task. Ruby has a gem (library), nokogiri
which is an HTML, CSS and XML parser.
https://github.com/sparklemotion/nokogiri

### Approach
Completed task-3 google scraping. Successfully filtered and displayed the top 10 links for the search term "Linux". Then I added the input functionality which searches the inputted keyword and shows the top 10 links. The final script accepts an input as keyword for the Google search and prints the top 10 links of the google search along with it's headings.The links are not actually the hyperlinks but the the text shown under the headings in the search results.(' > '  instead of '/'). One of the search terms "Winter" didn't  show ten results and showed an error at the end. So I learned about the exception handling in ruby and implemented the same in the script. So whenever there weren't enough results it would display "end of results" instead of the error.But this problem was rectified when by just increasing the number of results in the link,but at least I learned  the exception handling in ruby.

I made changes to the script as of now.The program now prints the top ten headings along with the actual hyperlink rather than the link like text found in search page.




