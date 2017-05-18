#!/usr/bin/env python

doc1 = "Now is the time for all good men to time the trials of all men."
doc2 = "The New York Times is the newspaper of record where as the Los Angeles Times stands by Stand Fast, Stand Firm, Stand Sure, Stand True"
doc3 = "When in the Course of human events, it becomes necessary for one people to dissolve the political bands which have connected them with another, and to assume among the powers of the earth, the separate and equal station to which the Laws of Nature and of Nature's God entitle them, a decent respect to the opinions of mankind requires that they should declare the causes which impel them to the separation."

corpus = [doc1, doc2, doc3]

# Create a bag of words
def createBigBagOfWords(corpus):
    bag = []

    for doc in corpus:
        # Break the sentence(s) into individual words
        words = doc.split()
        # Create a list of all the words NOT in the bag_of_words already
        not_in_bag = list(set(words) - set(bag))
        # Add new words to the bag
        bag = bag + not_in_bag

    bag.sort()
    return bag


# Convert documents to a bag of words
bag_of_words = createBigBagOfWords(corpus)

print(bag_of_words)
