# Write your MySQL query statement below
-- SELECT TWEET_Id FROM TWEETS GROUP BY TWEET_ID HAVING SUM(LENGTH(CONTENT))>15;
SELECT TWEET_ID FROM TWEETS WHERE LENGTH(CONTENT)>15;