/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@interface SBFolderScrollOffset : _ABAddressBookCopyLocalizedLabel
{
    struct CGPoint _scrollOffset;
    unsigned int _identifier;
    int _orientation;
}

- (void)setIdentifier:(unsigned int)fp8;
- (unsigned int)identifier;
- (void)setOrientation:(int)fp8;
- (int)orientation;
- (void)setScrollOffset:(struct CGPoint)fp8;
- (struct CGPoint)scrollOffset;

@end

