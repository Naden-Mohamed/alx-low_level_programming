/**                                                                                                                                         
 * _puts_recursion - prints a string, followed by a new line                                                                                
 * @s: pointer to a string                                                                                                                  
 * Return: void                                                                                                                             
 */
void _puts_recursion(char *s);
{
  if(*s =='\0')
{
      _putchar('\n');
}
  else
    {
      _putchar(*s);
      _putchar_recursion(s + 1);
    }
}
