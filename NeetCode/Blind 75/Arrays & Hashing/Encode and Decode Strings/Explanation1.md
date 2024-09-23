# Encode and Decode Strings (Medium)
Encoding
- Initialize an empty string to store the encoded result
- For each string in the vector, append its length, followed by the '@' or any symbol like '#',':', followed by the string itself
Decoding
- Initialize a vector to store the decoded strings
- Index to keep track of the current position in the string 's'
- Loop until the entire string is processed
- Make another loop and increment j until '@' is found
- Use value of j to extract the length of next word (appended into the string during encoding)
- Extract a substring from next position after '@' and of length as extracted in the previous step
- Append the extracted substring into the vector
- Move i pointer past the extracted string and the symbol '@'
- Repeat until entire encoded string is processed  
