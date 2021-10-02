import re
def toJadenCase(string):
    return  " ".join(char.capitalize() for char in re.findall (r'(\S+)\s?' , string ) )

print toJadenCase("Are you ready?")
