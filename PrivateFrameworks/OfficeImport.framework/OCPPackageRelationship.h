/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSURL, NSString;



@interface OCPPackageRelationship : NSObject 
{
    NSString *mIdentifier;
    NSString *mType;
    NSInteger mTargetMode;
    NSURL *mTargetLocation;
}


- (id)identifier;
- (id)type;
- (void)dealloc;
- (id)initWithXmlElement:(struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 baseLocation:(id)arg2;
- (void)readFromElement:(struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 baseLocation:(id)arg2;
- (NSInteger)targetMode;
- (id)targetLocation;

@end