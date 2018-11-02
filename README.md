# FunnyStories

## The Idea
The fun times in school when there was a story the teacher wrote,
but the verbs and adjectives etc were missing. The students would fill in those
gaps without knowing the context or story, 
the result would be hilarious and make absolutely no sense.

## How to use
In the `omg.DTA` file write your story but replace anything you want, such as
verbs, nouns, and adjectives, with `<tag>`.
The `<tag>` will be visible in the console, but not the rest of the story.
The user fills in the tags until the file has reached the end.
The result is stored in `result.DTA`.
All sentences must end either with ".", "!", or "?".

### Convention

For a better experience name tags with names according to the gramatical context.
For example you would want to know the tense of the verb that is expected, or
whether a noun should come in as plural. Here is an example:

````
Once upon a time, there were two <nouns>.
Yesterday one of them <verbed> his <noun>.
Why is he <verbing> so much?
````

There are no preserved tag names, you can name tags whatever you want them to be.

### Caution

For stable experience, don't use newline if the sentence has not finished. (ie. ending with "!", "?", or ".")
