//
//  SyncViewController.h
//  OpenPhoto
//
//  Created by Patrick Santana on 18/06/12.
//  Copyright 2012 OpenPhoto
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
// 
//  http://www.apache.org/licenses/LICENSE-2.0
// 
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <AssetsLibrary/AssetsLibrary.h>
#import "AssetsLibraryUtilities.h"
#import "MBProgressHUD.h"
#import "SyncedPhotos+OpenPhoto.h"
#import "ELCAsset.h"
#import "ELCAlbumPickerController.h" 
#import "ELCAssetCell.h"

@interface SyncViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
	ALAssetsGroup *assetGroup;
	
	NSMutableArray *elcAssets;
	int selectedAssets;
	
	id parent;
	
	NSOperationQueue *queue;
    ALAssetsLibrary *library;
    
    NSMutableArray *imagesAlreadyUploaded;
    
    BOOL loaded;
    int assetsNumber;
}

@property (nonatomic, assign) id parent;
@property (nonatomic, retain) ALAssetsGroup *assetGroup;
@property (nonatomic, retain) NSMutableArray *elcAssets;
@property (nonatomic, retain) NSMutableArray *imagesAlreadyUploaded;
@property (retain, nonatomic) IBOutlet UITableView *tableView;
@property (nonatomic, retain) UIButton *buttonHidden;

-(int)totalSelectedAssets;
-(void)preparePhotos;

-(void)doneAction:(id)sender;

@end