paragraph = ''
with open('inputLabTxt.txt','r') as file:
    file_content = file.read()
    paragraph += file_content.replace('/*', '').replace('*/', '')

with open('lab_final_2_output.txt', 'w') as file:
    file.write(paragraph)