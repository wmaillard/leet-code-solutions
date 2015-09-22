/* Word Ladder
https://leetcode.com/problems/word-ladder/
Given two words (beginWord and endWord), and a dictionary's word list, find the length of shortest transformation sequence from beginWord to endWord, such that:

Only one letter can be changed at a time
Each intermediate word must exist in the word list
For example,

Given:
beginWord = "hit"
endWord = "cog"
wordList = ["hot","dot","dog","lot","log"]
As one shortest transformation is "hit" -> "hot" -> "dot" -> "dog" -> "cog",
return its length 5.

Note:
Return 0 if there is no such transformation sequence.
All words have the same length.
All words contain only lowercase alphabetic characters. */

    class Solution {
    public:
    int ladderLength(string beginWord, string endWord, unordered_set<string>& wordDict) {
		//Set up
        unordered_set<string> foundWordsF, foundWordsB;
		unordered_set<string>* workingSet = &foundWordsF;
		unordered_set<string>* idleSet = &foundWordsB;
		queue<string> unexploredF;
		queue<string> unexploredB;
		queue<string> *unexplored = &unexploredF;
		queue<string> *unexploredIdle = &unexploredB;

		foundWordsF.insert(beginWord);
        foundWordsB.insert(endWord);
        unexplored->push(beginWord);
		unexploredIdle->push(endWord);


		int distance = 0;
		//Process

		//Removed elements from queue, add neighbors to queue, add element to foundWords
		while(!unexplored->empty())
		{
		    int endNum = unexplored->size();
			for(int i = 0; i < endNum; i++)
			{
				string newElement = unexplored->front();
				unexplored->pop();
				if(workingSet->find(newElement) == workingSet->end() || distance < 2)
                    addNeighbors(unexplored, newElement, &wordDict, workingSet);//could save time by checking to make sure neighbours
																//aren't in workingSet
				//If the current word is in the idle set, then we have found the path
				if(idleSet->find(newElement) != idleSet->end())
					return distance;
				else if(workingSet->find(newElement) == workingSet->end())
                {
					workingSet->insert(newElement);
                }
			}
			distance++;
			if(unexplored->size() >= unexploredIdle->size())
            {
                swap(workingSet, idleSet);
                swap(unexplored, unexploredIdle);
            }
		}
		return 0;

    }


	void addNeighbors(queue<string> *theQueue, string word, unordered_set<string> *wordDict, unordered_set<string>* workingSet)
	{
		for (int i = 0; i < word.size(); i++) {
            for(char c = 'a'; c <= 'z'; c++)
            {
                string test = word;
                if(test[i] != c && c != 'q')
                {
                    test[i] = c;
                    if(wordDict->find(test) != wordDict->end() && workingSet->find(test) == wordDict->end())
                    {
                        theQueue->push(test);
                    }
                }
            }
        }
	}

};