#import "OBAApplicationDelegate.h"
#import "OBANavigationTargetAware.h"
#import "OBATripDetailsV2.h"
#import "OBATripInstanceRef.h"
#import "OBAProgressIndicatorView.h"


@interface OBATripDetailsViewController : UITableViewController <OBANavigationTargetAware,OBAModelServiceDelegate> {
    OBAApplicationDelegate * _appDelegate;
    OBATripInstanceRef * _tripInstance;
    OBATripDetailsV2 * _tripDetails;
    OBAServiceAlertsModel * _serviceAlerts;
    id<OBAModelServiceRequest> _request;
    OBAProgressIndicatorView * _progressView;
}

- (id) initWithApplicationDelegate:(OBAApplicationDelegate*)appDelegate tripInstance:(OBATripInstanceRef*)tripInstance;

@property (nonatomic,strong) OBATripDetailsV2 * tripDetails;
@property (nonatomic,strong) NSString * currentStopId;

@end
