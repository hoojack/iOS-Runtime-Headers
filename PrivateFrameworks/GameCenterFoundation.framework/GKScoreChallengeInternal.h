/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKLeaderboardInternal, GKScoreInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal {
    GKLeaderboardInternal *_leaderboard;
    GKScoreInternal *_score;
}

@property(retain) GKLeaderboardInternal * leaderboard;
@property(copy) GKScoreInternal * score;

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (id)leaderboard;
- (id)score;
- (id)serverRepresentationForReceivingPlayer:(id)arg1;
- (void)setLeaderboard:(id)arg1;
- (void)setScore:(id)arg1;
- (unsigned long long)type;

@end