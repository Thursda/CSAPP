struct hostent
{
	char *h_Name;
	char **h_aliases;
	int h_addrtype;
	int h_length;
	char **h_addr_list;
};