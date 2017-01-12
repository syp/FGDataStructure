//
//  FGConnectingGraphIII.h
//  FGDataStructure
//
//  Created by Stephen Zhang on 12/01/2017.
//  Copyright © 2017 Feng Guo. All rights reserved.
//

#import <Foundation/Foundation.h>

//Given n nodes in a graph labeled from 1 to n. There is no edges in the graph at beginning.
//
//You need to support the following method:
//1. connect(a, b), an edge to connect node a and node b
//2. query(), Returns the number of connected component in the graph
//
//Example
//5 // n = 5
//query() return 5
//connect(1, 2)
//query() return 4
//connect(2, 4)
//query() return 3
//connect(1, 4)
//query() return 3

@interface FGConnectingGraphIII : NSObject

- (instancetype)initWithN:(NSInteger)n NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;
- (void)connect:(NSInteger)a with:(NSInteger)b;
- (NSInteger)query;

@end
