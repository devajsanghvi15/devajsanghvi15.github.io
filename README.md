# Instagram Portfolio

## Course Information

* Course Name: Algorithmic Problem Solving
* Course Code: 23ECSE309
* Course Instructor: Prakash Hegade

## Personal Information

* Name: Devaj Sanghvi
* USN: 01FE21BCI055
* University: KLE Technological University, Hubballi-31

## Table of Contents
* [Introduction](#introduction)
* [Objectives](#objectives)
* [Business Cases](#business-cases)

## Introduction
Welcome to my Instagram Portfolio, where I present the knowledge I've gained from the Algorithmic Problem Solving (APS) course taught at KLE Technological University. During this course, I explored the various algorithms and data structures, focusing on their practical applications in real-world situations. This portfolio showcases these learnings through various business cases, each highlighting a different aspect of algorithmic problem-solving and its importance in enhancing social media management.

## Objectives
* Showcase the algorithms and data structures learned during APS.
* Illustrate how algorithmic problem solving techniques can be applied to optimize and enhance various aspects of social media management.
* Provide a clear understanding of how advanced algorithms and data structures can solve complex problems and improve efficiency in social media platforms.
* Serve as an educational resource for others interested in understanding the application of algorithms and data structures in social media platforms.

## Business Cases

**1. Autocomplete Hashtag Searches**

**Use Case**  
* Users might not want to type the entire hashtag when they search for posts related to it (especially when the hashtag is big). Tries can be used for autocomplete functionality in hashtag searches. They efficiently store and retrieve strings based on prefixes, allowing Instagram to suggest completions as users type.

**Challenges**  
* Using tries with very long strings can be impractical.

**Market Benefits**  
* Allows users to find all hashtags that start with a given prefix efficiently.

**DSA Used, Design Technique and Performance Analysis**
* Tries: Tree data structure, Prefix tree
  * Time Complexity: O(L) for insertion, deletion, and lookup operations, where L is the length of the key (typically a word)
  * Space Complexity: O(ALPHABET_SIZE * L) where ALPHABET_SIZE is the number of possible characters and L is the length of the key
 
Code

<br>

**2. Geolocation Services**

**Use Case**  
* Instagram uses KD-Trees to efficiently store and query geotagged content (posts, stories) based on proximity to a user's location, enhancing the user experience by surfacing location-relevant content.

**Challenges**  
* More space required to maintain tree, complexity of tree construction increases if data dimensionality increases (beyond latitude and longitude).

**Market Benefits**  
* Improved user experience by providing location relevant content.

**DSA Used, Design Technique and Performance Analysis**
* KD-Tree: Divide and conquer, Tree data structure
  * Time Complexity: O(logn) for insertion and search operations, where n is the number of points in the tree.
  * Space Complexity: O(n) where n is the number of points stored in the tree.
 
code

<br>

**3. Event Scheduling and Reminders**

**Use Case**  
* Binary Search Trees are employed to manage and search scheduled events and reminders within Instagram's notification systems. BSTs facilitate efficient insertion, deletion, and retrieval operations based on event timestamps.

**Challenges**  
* Cannot support duplicate keys (in this case same timestamp for two events).

**Market Benefits**  
* Efficient Retrieval and Notification Delivery.

<br>

**4. Finding Connections**

**Use Case**  
* Finding all direct connections (followers/following) to understand the immediate network around the user. BFS can be used for this purpose where a node is a user and the nodes connected to it are followers.

**Challenges**  
* The graph would consume lot of space.

**Market Benefits**  
* Users can quickly find mutuals.

<br>

**5. Optimizing Content Delivery Network (CDN) Connections**

**Use Case**  
* Instagram has a network of servers distributed globally. Minimum spanning tree algorithms (Prim's, Kruskal's) can be used to optimize the connections between these servers, minimizing the total communication cost and ensure efficient content delivery.

**Challenges**  
* Dynamic nature of CDN (servers going online/offline).

**Market Benefits**  
* Cost reduction
* Improved performance

<br>

**6. Engagement Metrics Calculation**

**Use Case**  
* Content creators on Instagram might want to know how well their post is performing (likes, comments, shares). The frequency of these queries might be high, so precomputing the number of likes, comments, shares for a particular interval(day, week, month) and storing them in a lookup table might be beneficial.

**Challenges**  
* Requires lot of storage for large number of posts over various time intervals.
* Lookup table needs to be updated frequently to maintain data consistency between source and the table.

**Market Benefits**  
* Faster query response times.
* Reduces computational load.
* Offering fast analytics can differentiate Instagram from other competitors.

<br>

**7. Feed Generation and Ranking**

**Use Case**  
* Each post is assigned a priority based on factors such as recency, relevance to the user's interests, and engagement metrics (like likes and comments).  Priority queue (heap) can be used to manage and prioritize posts for each user's feed.

**Challenges**  
* Dynamic nature of data (user preference changes) poses a challenge to decide the priority.

**Market Benefits**  
* Real-time updates as heap supports fast insertion and deletion operations.

<br>

**8. Story Viewing Sequence**

**Use Case**  
* Instagram employs a deque to manage the sequence of stories that users view, enabling seamless navigation between previous and next stories for an enhanced user experience. New stories are added to the rear of the deque as users start viewing them. Users can navigate through stories using operations to move to the next story (remove from the front) or return to the previous story (add back to the front).

**Challenges**  
* Handling user interactions (such as skips or returns) that affect the story viewing sequence in real-time.

**Market Benefits**  
* Enhanced user experience and user retention.

<br>

**9. Image and Video Compression**

**Use Case**  
* Shorter codes can be assigned to frequently occurring patterns in pixel data or video frames as part of image and video compression. Huffman encoding can reduce file size without sacrificing visual quality significantly.

**Challenges**  
* Quality of image or video might degrade significantly with high compression ratios.

**Market Benefits**  
* Less storage requirements
* Faster loading time of compressed data
* Less bandwidth is used

<br>

**10. Securing User Data Using Hashing Algorithms**

**Use Case**  
* Securing user data and authenticating accounts is crucial for Instagram to maintain user trust and protect against unauthorized access. Passwords are hashed using cryptographic algorithms before being stored, ensuring protection even if databases are compromised.

**Challenges**  
* Protecting user data and authenticating accounts.

**Market Benefits**  
* Increased security and user trust.

<br>

**11. Ad placement on Instagram**

**Use Case**  
* Advertising on instagram relies on efficient allocation of ad placements within user feeds, stories, and explore pages to maximize revenue and user engagement. The Assignment Problem can help determine the optimal assignment of advertisements to available ad slots across the platform.

**Challenges**  
* Maximize user engagement and ad revenue.

**Market Benefits**  
* Higher revenue.
* Increased ad awareness.

<br>

**12. Content Filtering and Moderation**

**Use Case**  
* Bloom filters can be used to store hashes of known inappropriate words, phrases, or patterns. When filtering user-generated content (like comments or posts), new content can be quickly checked against the Bloom filter. If the filter indicates a match, further, more intensive checks can be performed.

**Challenges**  
* Due to the probabilistic nature of bloom filters, appropriate content might be marked as inappropriate leading to user frustration.

**Market Benefits**  
* Efficient content moderation

<br>

**13. Time Series Data Analysis**

**Use Case**  
* Instagram deals with vast amounts of time-series data, including user activity logs, system performance metrics and engagement analytics. Segment trees can be employed to perform range queries on this data efficiently. For example, segment trees can facilitate queries that analyze user engagement trends over specific time intervals or identify peak usage periods.

**Challenges**  
* Dealing with large amount of data which updates frequently.

**Market Benefits**  
* Better understanding of user behaviour and system performance.

<br>

**14. Content Similarity Analysis**

**Use Case**  
* Longest Common Subsequence (LCS) is used to analyze the similarity between different pieces of content (captions, comments, bios). it helps in recommending similar posts to users, identifying trends, and enhancing search functionalities.

**Challenges**  
* Computationally expensive for long sequences.

**Market Benefits**  
* Users can find similar content.
* Identify similar content to detect spam.

<br>

**15. Sort User's Following List**

**Use Case**  
* Users might want to know the order in which they followed other accounts. Instagram provides the functionality to sort accounts which the user has followed by dates (both latest and earliest). Sorting algorithms like merge sort, quick sort can be used for this purpose.

**Market Benefits**  
* User experience enhancement as faster sorting results.

<br>
