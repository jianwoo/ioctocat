#import <UIKit/UIKit.h>


@interface iOctocatAppDelegate : NSObject <UIApplicationDelegate> {
	NSMutableDictionary *users;
  @private
    IBOutlet UIWindow *window;
    IBOutlet UINavigationController *navigationController;
	BOOL isDataSourceAvailable;
}

@property (nonatomic, readonly) BOOL isDataSourceAvailable;
@property (nonatomic, retain) NSMutableDictionary *users;

@end

