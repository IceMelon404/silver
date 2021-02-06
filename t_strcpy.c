char *t_strcpy(char* dest,char* src) {

	char *ret = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
}

char *t_strncpy(char* dest,char* src, unsigned int n)
{
	unsigned int idx = 0;
	char *ret = dest;
	while (idx++ < n && *src)
		*dest++ = *src++;
	if (idx != n)
		*dest = '\0';
	return ret;

}
