//
//  EXTAspectTest.h
//  extobjc
//
//  Created by Justin Spahr-Summers on 25.11.11.
//  Released into the public domain.
//

// see EXTAspect.h
#if HAVE_LIBFFI

#import <SenTestingKit/SenTestingKit.h>
#import "EXTAspect.h"

@interface EXTAspectTest : SenTestCase
@end

@aspect(TestAspect);
@aspect(OtherTestAspect);

#endif
