//
//  CoreSDK.h
//  CoreSDK
//
//  Created by Mikael Lechat on 23/01/2019.
//  Copyright © 2019 Poq Commerce. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for CoreSDK.
FOUNDATION_EXPORT double CoreSDKVersionNumber;

//! Project version string for CoreSDK.
FOUNDATION_EXPORT const unsigned char CoreSDKVersionString[];


#import <CoreSDK/EMSRequestManager.h>
#import <CoreSDK/EMSRequestModelBuilder.h>
#import <CoreSDK/EMSRequestModel.h>
#import <CoreSDK/EMSResponseModel.h>
#import <CoreSDK/EMSCompositeRequestModel.h>
#import <CoreSDK/EMSRequestModelRepositoryProtocol.h>
#import <CoreSDK/EMSRequestModelRepository.h>
#import <CoreSDK/EMSLogRepositoryProtocol.h>
#import <CoreSDK/EMSLogHandlerProtocol.h>
#import <CoreSDK/EMSRepositoryProtocol.h>
#import <CoreSDK/EMSSQLSpecificationProtocol.h>
#import <CoreSDK/EMSSQLiteHelper.h>
#import <CoreSDK/EMSModelMapperProtocol.h>
#import <CoreSDK/EMSRequestContract.h>
#import <CoreSDK/EMSLogger.h>
#import <CoreSDK/EMSLoggerSettings.h>
#import <CoreSDK/NSError+EMSCore.h>
#import <CoreSDK/NSDate+EMSCore.h>
#import <CoreSDK/NSDictionary+EMSCore.h>
#import <CoreSDK/EMSDictionaryValidator.h>
#import <CoreSDK/EMSAuthentication.h>
#import <CoreSDK/EMSDeviceInfo.h>
#import <CoreSDK/EMSCoreCompletion.h>
#import <CoreSDK/EMSRESTClient.h>
#import <CoreSDK/EMSTimestampProvider.h>
#import <CoreSDK/EMSUUIDProvider.h>
