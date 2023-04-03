#!/usr/bin/perl

print	"Enter a string: ";
chomp($string		= <STDIN>);
$reversed	= reverse("$string");
print	"$reversed\n";
if ($string eq $reversed)
{
	print	"The string is a palindrome!";
}
else
{
	print	"The string is not a palindrome.";
}