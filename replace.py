def replace_character(sentence):
	sentence = sentence.replace("s","$")  #replacing "s" into "$' and storing it into the variable, sentence
	sentence = sentence.replace("S","$")  #replacing "S" into "$' and storing it into the variable, sentence
	return sentence  #returing the updated string
print(replace_character('subby tubby chubby gubby'))
print(replace_character('1213141516171819'))
