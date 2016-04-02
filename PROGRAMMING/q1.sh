#!/bin/sh
echo "Type a word"
read word
echo $word is $(echo -n $word | wc -c) letters long
echo or $word is ${#word} letters long
