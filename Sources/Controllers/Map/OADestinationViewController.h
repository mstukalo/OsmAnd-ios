//
//  OADestinationViewController.h
//  OsmAnd
//
//  Created by Alexey Kulish on 01/03/15.
//  Copyright (c) 2015 OsmAnd. All rights reserved.
//

#import "OAToolbarViewController.h"
#import "OADestinationCell.h"

#define DESTINATIONS_TOOLBAR_PRIORITY 100


@class OADestination;

@protocol OADestinationViewControllerProtocol
@optional

- (void)destinationViewMoveTo:(OADestination *)destination;
- (void)destinationsAdded;
- (void)openHideDestinationCardsView;

@end

@interface OADestinationViewController : OAToolbarViewController<OADestinatioCellProtocol>

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIButton *backButton;

@property (nonatomic, assign) BOOL singleLineOnly;
@property (weak, nonatomic) id<OADestinationViewControllerProtocol> destinationDelegate;

- (void)startLocationUpdate;
- (void)stopLocationUpdate;

- (UIColor *) addDestination:(OADestination *)destination;
- (void) updateDestinations;
- (void) doLocationUpdate;

- (void)updateDestinationsUsingMapCenter;
- (void)updateCloseButton;

@end
