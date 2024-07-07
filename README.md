# Insta Insight

## Course Information

* Course Name: Algorithmic Problem Solving
* Course Code: 23ECSE309
* Course Instructor: Prakash Hegade

## Personal Information

* Name: Devaj Sanghvi
* USN: 01FE21BCI055
* University: KLE Technological University, Hubballi-31

## Table of Contents
* [👋 Introduction](#introduction)
* [❓ Why Instagram?](#why-instagram)
* [🎯 Objectives](#objectives)
* [💼 Business Cases](#business-cases)
* [📑 References](#references)

## Introduction
Welcome to my Instagram Portfolio, where I present the knowledge I've gained from the Algorithmic Problem Solving (APS) course taught at KLE Technological University. During this course, I explored the various algorithms and data structures, focusing on their practical applications in real-world situations. This portfolio showcases these learnings through various business cases, each highlighting a different aspect of algorithmic problem-solving and its importance in enhancing social media management.

## Why Instagram?
![Instagram-algorithm](https://github.com/devajsanghvi15/devajsanghvi15.github.io/assets/136953523/95ecb0d4-9c47-42e2-8783-44a0a1f029d7)

Instagram is a widely popular social media platform originally launched in 2010, primarily focused on sharing photos and videos. Over the years, Instagram has expanded its features to include stories, IGTV, Reels and many more. With over 2 billion monthly active users [[1]](https://www.statista.com/topics/1882/instagram/){:target="_blank"}, 46,740 photos are posted per minute by users [[2]](https://bernardmarr.com/how-much-data-do-we-create-every-day-the-mind-blowing-stats-everyone-should-read/){:target="_blank"}. Instagram generated an estimated $60.3 billion revenue in 2023, accounting for almost 44% of Facebook’s total revenue [[3]](https://www.businessofapps.com/data/instagram-statistics/){:target="_blank"}. Instagram users watch 17.6 million hours of reels per day [[4]](https://influencermarketinghub.com/instagram-reels-stats/){:target="_blank"}. Leading countries by Instagram users are India, USA, Brazil, Indonesia, Turkey [[5]](https://www.oberlo.com/statistics/instagram-users-by-country){:target="_blank"}.

To handle such amount of large data, Instagram must be using advanced data structures and algorithms under the hood. By examining existing and potential use cases for these technologies, this portfolio aims to provide a comprehensive understanding of their impact on the platform.


## Objectives
* Showcase the algorithms and data structures learned during APS.
* Illustrate how algorithmic problem solving techniques can be applied to optimize and enhance various aspects of social media management.
* Provide a clear understanding of how advanced algorithms and data structures can solve complex problems and improve efficiency in social media platforms.
* Serve as an educational resource for others interested in understanding the application of algorithms and data structures in social media platforms.

## Business Cases

**1. #️⃣ Autocomplete Hashtag Searches**

**Use Case**  
* Users might not want to type the entire hashtag when they search for posts related to it (especially when the hashtag is big). Tries can be used for autocomplete functionality in hashtag searches. They efficiently store and retrieve strings based on prefixes, allowing Instagram to suggest completions as users type.

![one](https://github.com/devajsanghvi15/devajsanghvi15.github.io/assets/136953523/bd8580bc-ee22-4fc9-921b-1a02d64a5c87)

**Challenges**  
* Using tries with very long strings can be impractical.

**Market Benefits**  
* Allows users to find all hashtags that start with a given prefix efficiently.

**DSA Used, Design Technique and Performance Analysis**
* Tries: Tree data structure, Prefix tree
  * Time Complexity: O(L) for insertion, deletion, and lookup operations, where L is the length of the key (typically a word).
  * Space Complexity: O(ALPHABET_SIZE * L) where ALPHABET_SIZE is the number of possible characters and L is the length of the key.
 
[Code for Tries](https://github.com/devajsanghvi15/devajsanghvi15.github.io/blob/main/codes/trie.cpp){:target="_blank"}

<br>

**2. 🌎 Geolocation Services**

**Use Case**  
* Instagram uses KD-Trees to efficiently store and query geotagged content (posts, stories) based on proximity to a user's location, enhancing the user experience by surfacing location-relevant content.

![two](https://github.com/devajsanghvi15/devajsanghvi15.github.io/assets/136953523/cddcc71c-3edb-4a59-9e42-c26d41363d15)

**Challenges**  
* More space required to maintain tree, complexity of tree construction increases if data dimensionality increases (beyond latitude and longitude).

**Market Benefits**  
* Improved user experience by providing location relevant content.

**DSA Used, Design Technique and Performance Analysis**
* KD-Tree: Divide and conquer, Tree data structure
  * Time Complexity: O(logn) on average for insertion and search operations (tree is balanced), O(n) in the worst case (tree is unbalanced), where n is the number of points in the tree.
  * Space Complexity: O(n) where n is the number of points stored in the tree.
 
[Code for KD-Tree](https://github.com/devajsanghvi15/devajsanghvi15.github.io/blob/main/codes/KDTree.cpp){:target="_blank"} [[6]](https://www.geeksforgeeks.org/search-and-insertion-in-k-dimensional-tree/){:target="_blank"}

<br>

**3. 🔔 Event Scheduling and Reminders**

**Use Case**  
* Binary Search Trees are employed to manage and search scheduled events and reminders within Instagram's notification systems. BSTs facilitate efficient insertion, deletion, and retrieval operations based on event timestamps.

![three_mediumcom](https://github.com/devajsanghvi15/devajsanghvi15.github.io/assets/136953523/7e610f5d-c1e4-4dc3-9265-031644f186b0)

**Challenges**  
* Cannot support duplicate keys (in this case same timestamp for two events).

**Market Benefits**  
* Efficient Retrieval and Notification Delivery.

**DSA Used, Design Technique and Performance Analysis**
* Binary Search Tree: Divide and conquer (binary search), Tree data structure
  * Time Complexity: O(logn) on average for insertion, deletion and search operations, O(n) in the worst case, where n is the number of nodes in the tree.
  * Space Complexity: O(n) where n is the number of nodes in the tree.
 
[Code for Binary Search Tree](https://github.com/devajsanghvi15/devajsanghvi15.github.io/blob/main/codes/BST.c){:target="_blank"}

<br>

**4. 🔗 Finding Connections**

**Use Case**  
* Finding all direct connections (followers/following) to understand the immediate network around the user. BFS can be used for this purpose where a node is a user and the nodes connected to it are followers.

![four](https://github.com/devajsanghvi15/devajsanghvi15.github.io/assets/136953523/c37a5b0e-bb5c-4f06-aea4-ae12b0936845)

**Challenges**  
* The graph would consume lot of space.

**Market Benefits**  
* Users can quickly find mutuals.

**DSA Used, Design Technique and Performance Analysis**
* BFS: Level order traversal, queue data structure
  * Time Complexity: O(V + E), where V is the number of vertices (nodes) and E is the number of edges in the graph.
  * Space Complexity: O(V) for the queue used in BFS.
 
[Code for BFS](https://github.com/devajsanghvi15/devajsanghvi15.github.io/blob/main/codes/BFS.cpp){:target="_blank"}

<br>

**5. 🌎 Optimizing Content Delivery Network (CDN) Connections**

**Use Case**  
* Instagram has a network of servers distributed globally. Minimum spanning tree algorithms (Prim's, Kruskal's) can be used to optimize the connections between these servers, minimizing the total communication cost and ensure efficient content delivery.

![mst_medium](https://github.com/devajsanghvi15/devajsanghvi15.github.io/assets/136953523/c5fbd912-622a-4240-b89b-ebe90c73986d)

**Challenges**  
* Dynamic nature of CDN (servers going online/offline).

**Market Benefits**  
* Cost reduction.
* Improved performance.

**DSA Used, Design Technique and Performance Analysis**
* Kruskal's Algorithm: Minimum Spanning Tree (MST), Greedy method
  * Time Complexity: (O(ElogE)).
  * Space Complexity: (O(V+E)).
* Prim's Algorithm: Minimum Spanning Tree (MST), Greedy method
  * Time Complexity: (O((V+E)logV) with priority queue.
  * Space Complexity: (O(V+E)), where V is the number of vertices and E is the number of edges.

[Code for Kruskal's Algorithm](https://github.com/devajsanghvi15/devajsanghvi15.github.io/blob/main/codes/kruskalAlgoritm.c){:target="_blank"} <br>
[Code for Prim's Algorithm](https://github.com/devajsanghvi15/devajsanghvi15.github.io/blob/main/codes/prims.cpp){:target="_blank"}

<br>

**6. 👍 Engagement Metrics Calculation**

**Use Case**  
* Content creators on Instagram might want to know how well their post is performing (likes, comments, shares). The frequency of these queries might be high, so precomputing the number of likes, comments, shares for a particular interval(day, week, month) and storing them in a lookup table might be beneficial.

![six](https://github.com/devajsanghvi15/devajsanghvi15.github.io/assets/136953523/a824990a-b4b0-44d4-a9aa-1a1ddbca7f60)

**Challenges**  
* Requires lot of storage for large number of posts over various time intervals.
* Lookup table needs to be updated frequently to maintain data consistency between source and the table.

**Market Benefits**  
* Faster query response times.
* Reduces computational load.
* Offering fast analytics can differentiate Instagram from other competitors.

**DSA Used, Design Technique and Performance Analysis**
* Hash Map: Efficient data storage and retrieval.
  * Time Complexity: O(1) is the average case complexity for insert and lookup operations, O(n) is the worst case complexity due to hash collisions, where n is the number of entries in the same bucket.
  * Space Complexity: O(m) where m is the number of unique entries in the hash map.

[Code for Lookup Table](https://github.com/devajsanghvi15/devajsanghvi15.github.io/blob/main/codes/lookupTable.cpp){:target="_blank"}

<br>

**7. 1️⃣ Feed Generation and Ranking**

**Use Case**  
* Each post is assigned a priority based on factors such as recency, relevance to the user's interests, and engagement metrics (like likes and comments).  Priority queue can be used to manage and prioritize posts for each user's feed.

![seven](https://github.com/devajsanghvi15/devajsanghvi15.github.io/assets/136953523/04c90b45-3970-4e4d-bde4-0d3625b5a569)

**Challenges**  
* Dynamic nature of data (user preference changes) poses a challenge to decide the priority.

**Market Benefits**  
* Real-time updates as heap supports fast insertion and deletion operations.

**DSA Used and Performance Analysis**
* Priority Queue: Using Binary Heap
  * Time Complexity: O(logn) for all operations except getMax() which has a time compplexity is O(1).
  * Space Complexity: O(n), where n is the number of elements in the queue.

[Code for Priority Queue](https://github.com/devajsanghvi15/devajsanghvi15.github.io/blob/main/codes/priorityQueue.cpp){:target="_blank"} [[7]](https://www.geeksforgeeks.org/priority-queue-using-binary-heap/){:target="_blank"}

<br>

**8. 👀 Story Viewing Sequence**

**Use Case**  
* Instagram employs a deque to manage the sequence of stories that users view, enabling seamless navigation between previous and next stories for an enhanced user experience. New stories are added to the rear of the deque as users start viewing them. Users can navigate through stories using operations to move to the next story (remove from the front) or return to the previous story (add back to the front).

![deque_learnersbucket](https://github.com/devajsanghvi15/devajsanghvi15.github.io/assets/136953523/01bd7123-a495-482b-b1d2-4f5947ecdcd5)

**Challenges**  
* Handling user interactions (such as skips or returns) that affect the story viewing sequence in real-time.

**Market Benefits**  
* Enhanced user experience and user retention.

**DSA Used and Performance Analysis**
* Deque:
  * Time Complexity: Insertion and deletion operations take O(1) time complexity.
  * Space Complexity: O(n), where n is the number of elements in the deque.

[Code for Deque](https://github.com/devajsanghvi15/devajsanghvi15.github.io/blob/main/codes/deque.c){:target="_blank"} [[8]](https://www.javatpoint.com/ds-deque){:target="_blank"}


<br>

**9. 📷 Image and Video Compression**

**Use Case**  
* Shorter codes can be assigned to frequently occurring patterns in pixel data or video frames as part of image and video compression. Huffman coding can reduce file size without sacrificing visual quality significantly.

![nine](https://github.com/devajsanghvi15/devajsanghvi15.github.io/assets/136953523/f0b23aa1-1d4c-4dd8-b322-487e8c6de723)

**Challenges**  
* Quality of image or video might degrade significantly with high compression ratios.

**Market Benefits**  
* Less storage requirements.
* Faster loading time of compressed data.
* Less bandwidth is used.

**DSA Used, Design Technique and Performance Analysis**
* Huffman Coding: Greedy approach, Variable-length encoding
  * Time Complexity: O(nlogn) for building the Huffman tree, where n is the number of symbols.
  * Space Complexity: O(n) for storing the Huffman tree and encoded data.
 
[Code for Huffman Coding](https://github.com/devajsanghvi15/devajsanghvi15.github.io/blob/main/codes/huffmann.cpp){:target="_blank"}

<br>

**10. 🔒 Securing User Data Using Hashing Algorithms**

**Use Case**  
* Securing user data and authenticating accounts is crucial for Instagram to maintain user trust and protect against unauthorized access. Passwords are hashed using cryptographic algorithms before being stored, ensuring protection even if databases are compromised.

![ten](https://github.com/devajsanghvi15/devajsanghvi15.github.io/assets/136953523/a6de1e76-4858-4189-8869-06043ed01ae7)

**Challenges**  
* Protecting user data and authenticating accounts.

**Market Benefits**  
* Increased security and user trust.

**DSA Used, Design Technique and Performance Analysis**
* Hashing: Cryptographic hash function (SHA-256), one-way encryption.
  * Time Complexity: O(n) where n is the length of the input data.
  * Space Complexity: O(1), fixed size output regardless of input.
 
[Code for cryptographic hash function](https://github.com/devajsanghvi15/devajsanghvi15.github.io/blob/main/codes/hashing.cpp){:target="_blank"}

<br>

**11. 📢 Ad placement on Instagram**

**Use Case**  
* Advertising on instagram relies on efficient allocation of ad placements within user feeds, stories, and explore pages to maximize revenue and user engagement. The Assignment Problem can help determine the optimal assignment of advertisements to available ad slots across the platform.

![ad_nanos](https://github.com/devajsanghvi15/devajsanghvi15.github.io/assets/136953523/0e9ece15-61ce-4ca3-917e-b785ca6d3a5f)

**Challenges**  
* Maximize user engagement and ad revenue.

**Market Benefits**  
* Higher revenue.
* Increased ad awareness.

**DSA Used, Design Technique and Performance Analysis**
* Assignment Problem: Optimization technique
  * Time Complexity: O(2<sup>N</sup> * N) where N is the number of tasks or resources.
  * Space Complexity: O(N<sup>2</sup>) where N is the number of tasks or resources.

[Code for Assignment Problem](https://github.com/devajsanghvi15/devajsanghvi15.github.io/blob/main/codes/assignmentProblem.cpp){:target="_blank"}

<br>

**12. ❌ Content Filtering and Moderation**

**Use Case**  
* Bloom filters can be used to store hashes of known inappropriate words, phrases, or patterns. When filtering user-generated content (like comments or posts), new content can be quickly checked against the Bloom filter. If the filter indicates a match, further, more intensive checks can be performed.

![bloomfilter_linkedin](https://github.com/devajsanghvi15/devajsanghvi15.github.io/assets/136953523/ed749ba7-1c80-4c28-8227-ce7989ff48e2)

**Challenges**  
* Due to the probabilistic nature of bloom filters, appropriate content might be marked as inappropriate leading to user frustration.

**Market Benefits**  
* Efficient content moderation.

**DSA Used, Design Technique and Performance Analysis**
* Bloom filters: Use a fixed-size array and hash functions to achieve space-efficient set representation and quick lookups.
  * Time Complexity: O(k) for insertion where k is the number of hash functions.
  * Space Complexity: O(m) where m is the size of the array.

[Code for bloom filters](https://github.com/devajsanghvi15/devajsanghvi15.github.io/blob/main/codes/bloomFilter.cpp){:target="_blank"} [[9]](https://www.geeksforgeeks.org/bloom-filters-introduction-and-python-implementation/){:target="_blank"}

<br>

**13. ⏰ Time Series Data Analysis**

**Use Case**  
* Instagram deals with vast amounts of time-series data, including user activity logs, system performance metrics and engagement analytics. Segment trees can be employed to perform range queries on this data efficiently. For example, segment trees can facilitate queries that analyze user engagement trends over specific time intervals or identify peak usage periods.

**Challenges**  
* Dealing with large amount of data which updates frequently.

**Market Benefits**  
* Better understanding of user behaviour and system performance.

**DSA Used, Design Technique and Performance Analysis**
* Segment Trees: Divide and conquer, Tree data structure
  * Time Complexity: O(logN) for both query and update operations, where N is the number of elements.
  * Space Complexity: O(N) where N is the number of elements.

[Code for Segment Tree](https://github.com/devajsanghvi15/devajsanghvi15.github.io/blob/main/codes/SegmentTree.cpp){:target="_blank"} [[10]](https://www.sanfoundry.com/cpp-program-to-implement-segment-tree/){:target="_blank"}

<br>

**14. 🔍 Content Similarity Analysis**

**Use Case**  
* Longest Common Subsequence (LCS) is used to analyze the similarity between different pieces of content (captions, comments, bios). it helps in recommending similar posts to users, identifying trends, and enhancing search functionalities.

![lcs_boardInfinity](https://github.com/devajsanghvi15/devajsanghvi15.github.io/assets/136953523/c9cc0cd4-3eff-4756-adf3-32c1871e870f)

**Challenges**  
* Computationally expensive for long sequences.

**Market Benefits**  
* Users can find similar content.
* Identify similar content to detect spam.

**DSA Used, Design Technique and Performance Analysis**
* LCS: Dynamic Programming
  * Time Complexity: (O(m*n)), where m and n are lengths of sequences.
  * Space Complexity: (O(m*n)) for storing the LCS table.

[Code for Longest Common Subsequence](https://github.com/devajsanghvi15/devajsanghvi15.github.io/blob/main/codes/longestCommonSubsequence.cpp){:target="_blank"}

<br>

**15. 📶 Sort User's Following List**

**Use Case**  
* Users might want to know the order in which they followed other accounts. Instagram provides the functionality to sort accounts which the user has followed by dates (both latest and earliest). Sorting algorithms like merge sort, quick sort can be used for this purpose.

**Market Benefits**  
* User experience enhancement as faster sorting results.

**DSA Used, Design Technique and Performance Analysis**
* Merge Sort: Divide and conquer
  * Time Complexity: O(nlogn), where n is the number of elements.
  * Space Complexity: O(n), extra array required for merging.
* Quick Sort: Divide and conquer
  * Time Complexity: O(nlogn) is the average time complexity and O(n<sup>2</sup>) is the worst case time complexity due to unbalanced partitions.
  * Space Complexity: O(logn) is average and O(n) is the worst case complexity, due to recursive calls on stack.


[Code for Merge Sort](https://github.com/devajsanghvi15/devajsanghvi15.github.io/blob/main/codes/mergeSort.cpp){:target="_blank"} <br>
[Code for Quick Sort](https://github.com/devajsanghvi15/devajsanghvi15.github.io/blob/main/codes/quickSort.cpp){:target="_blank"}

## References
[1] “Topic: Instagram,” Statista, Apr. 24, 2024. https://www.statista.com/topics/1882/instagram/ <br><br>
[2] B. Marr, “How much data do we create every day? The Mind-Blowing Stats Everyone should read,” Bernard Marr, Jul. 13, 2021. https://bernardmarr.com/how-much-data-do-we-create-every-day-the-mind-blowing-stats-everyone-should-read/ <br><br>
[3] “Instagram Revenue and Usage Statistics (2024) - Business of Apps,” Business of Apps, Apr. 18, 2024. https://www.businessofapps.com/data/instagram-statistics/ <br><br>
[4] J. Santora, “16 key Instagram Reels Statistics for Marketers to know,” Influencer Marketing Hub, Dec. 22, 2023. https://influencermarketinghub.com/instagram-reels-stats/ <br><br>
[5] “Instagram Users by country [Jun 2024 Update] | Oberlo,” Oberlo. https://www.oberlo.com/statistics/instagram-users-by-country <br><br>
[6] GeeksforGeeks, “Search and Insertion in K Dimensional tree,” GeeksforGeeks, Jun. 13, 2023. https://www.geeksforgeeks.org/search-and-insertion-in-k-dimensional-tree/ <br><br>
[7] GeeksforGeeks, “Priority Queue using Binary Heap,” GeeksforGeeks, Jun. 07, 2024. https://www.geeksforgeeks.org/priority-queue-using-binary-heap/ <br><br>
[8] “Deque (Data Structures) - javatpoint,” www.javatpoint.com. https://www.javatpoint.com/ds-deque <br><br>
[9] GeeksforGeeks, “Bloom Filters Introduction and Implementation,” GeeksforGeeks, Apr. 03, 2024. https://www.geeksforgeeks.org/bloom-filters-introduction-and-python-implementation/ <br><br>
[10] Manish, “C++ program to implement segment Tree,” Sanfoundry, May 19, 2022. https://www.sanfoundry.com/cpp-program-to-implement-segment-tree/
