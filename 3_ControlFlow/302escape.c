/**
 * escape: expand newline and tab into visible sequences
 * while copying the string t to s
*/
void escape(char s[], char t[]){
    int i, j;

    for (i = j = 0; t[i] != '\0'; i++){
        switch (t[i]){
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\t':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            default:
                s[j++] = t[i];
                break;
        }
    }
    s[j] = '\0';
}

/*unescape: conver escape sequences into real characters
* while copying the string t to s
*/
void unescape(char s[], char t[]){
    int i, j;

    for(i = j = 0; t[i] != '\0'; i++){
        if (t[i] != '\\')
            s[j++] = t[i];
        else
            switch (t[++i]){
                case 'n':
                    s[j++] = '\n';
                    break;
                case 't':
                    s[j++] = '\t';
                    break;
                default:
                s[j++] = '\\';
                s[j++] = t[i];
                break;
            }
    }
    s[j] = '\0';
}
