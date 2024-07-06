#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

struct PostMetrics {
    int likes;
    int comments;
    int shares;
};

unordered_map<string, PostMetrics> metricsLookupTable;

void updateMetrics(const string& postId, int newLikes, int newComments, int newShares) {
    if (metricsLookupTable.find(postId) != metricsLookupTable.end()) {
        metricsLookupTable[postId].likes += newLikes;
        metricsLookupTable[postId].comments += newComments;
        metricsLookupTable[postId].shares += newShares;
    } else {
        metricsLookupTable[postId] = { newLikes, newComments, newShares };
    }
}

PostMetrics getMetrics(const string& postId) {
    if (metricsLookupTable.find(postId) != metricsLookupTable.end()) {
        return metricsLookupTable[postId];
    } else {
        return { 0, 0, 0 };
    }
}

int main() {
    string postId = "example_post_id";
    updateMetrics(postId, 10, 5, 3);
    PostMetrics metrics = getMetrics(postId);
    cout << "Likes: " << metrics.likes << ", Comments: " << metrics.comments << ", Shares: " << metrics.shares << endl;
    metrics = getMetrics("unavailable_record");
    cout << "Likes: " << metrics.likes << ", Comments: " << metrics.comments << ", Shares: " << metrics.shares << endl;

    return 0;
}
