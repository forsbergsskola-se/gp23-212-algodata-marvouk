using System.Collections.Generic;
using System.Drawing;

List<int> numbers = new List<int>{};

numbers.Add(137);
numbers.Add(1000);
numbers.Add(-200);

var iterator = numbers.GetEnumerator();
bool isThereOneMoreItem = iterator.MoveNext();

while (isThereOneMoreItem)
{
    Console.WriteLine(iterator.Current);
    isThereOneMoreItem= iterator.MoveNext();
}

List<Object> difVariants = new List<object>();

difVariants.Add(true); 
difVariants.Add("Forsbergs"); 
difVariants.Add('a'); 
difVariants.Add(1000); 
difVariants.Add(.12f);

foreach (var VARIABLE in difVariants)
{
    Console.WriteLine(VARIABLE);
}