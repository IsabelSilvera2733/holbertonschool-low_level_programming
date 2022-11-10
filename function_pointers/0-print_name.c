void print_name(char *name, (*f)(char *));
{
/*
 * as long as f is not '\0' f runs on f(name)
 */
	if (f)
		f(name);
}
