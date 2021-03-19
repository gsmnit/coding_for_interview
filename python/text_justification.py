def text_justification(text):
    FINISH = text[len(text-1)]
    start = 0
    text_justified = []
    while(True):
        k=0
        end = start + 10
        if text[end] == ' ':
            a=text[start:start+10]
            text_justified.append(a)
        else:
            while(text[end] != ' '):
                end -= 1
            a = text[start:end]
            text_justified.append(a)
        start = end

    return  text_justtified






