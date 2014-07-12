//
//  MTViewController.h
//  CustomPhotoAlbumDemo
//
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>

@interface MTViewController : UIViewController <UIImagePickerControllerDelegate>

@property (strong, atomic) ALAssetsLibrary* library;

@end
