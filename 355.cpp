class Twitter {
public:
    class user
    {
        public:
        int userId;
        unordered_set<int> follow_p;
    };
    unordered_map<int,user> users;
    unordered_map<int,int> who_post;
    vector<int> data;//总的时间线
    /** Initialize your data structure here. */
    Twitter() {

    }
    
    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {
        who_post[tweetId] = userId;
        data.push_back(tweetId);
    }
    
    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId) {
        vector<int> ans;
        for(int i=data.size()-1;i>=0;i--)
        {
            if(ans.size()==10)  return ans;
            if(userId==who_post[data[i]]||users[userId].follow_p.count(who_post[data[i]])==1)  ans.push_back(data[i]);
        }
        return ans;
    }
    
    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
        users[followerId].follow_p.insert(followeeId);
    }
    
    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
        users[followerId].follow_p.erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */
