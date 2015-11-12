import re
text = ''.join(open('somefile.txt').readlines())
sentences = re.split(r' *[\.\?!][\'"\)\]]* *', text)
print sentences
print "No of sentences: " + str(len(sentences) - 1)
