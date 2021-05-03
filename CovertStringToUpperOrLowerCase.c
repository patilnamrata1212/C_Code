void CovertStringToUpperOrLowerCase(char* s)
{
    int len = strlen(s);
    int count = 0;
    for(int i =0;i<len;i++)
    {
        if(islower(s[i]))
        {
            ++count;
        }
        else
            --count;
    }
    for(int i =0;i<len;i++)
    {
        if(count > 0)
            printf("%c ",tolower(s[i]));
        else
            printf("%c ",toupper(s[i]));
    }
}

// Driver code
int main()
{
	char str[] = "GEEKSFOrgeeks";
	CovertStringToUpperOrLowerCase(str);
    return 0;
}
