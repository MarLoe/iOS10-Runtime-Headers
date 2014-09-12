/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsHingeJoint : SCNPhysicsBehavior  {
    struct { 
        SCNPhysicsBody *bodyA; 
        SCNPhysicsBody *bodyB; 
        struct SCNVector3 { 
            float x; 
            float y; 
            float z; 
        } anchorA; 
        struct SCNVector3 { 
            float x; 
            float y; 
            float z; 
        } anchorB; 
        struct SCNVector3 { 
            float x; 
            float y; 
            float z; 
        } axisA; 
        struct SCNVector3 { 
            float x; 
            float y; 
            float z; 
        } axisB; 
    } _definition;
    struct btHingeConstraint { int (**x1)(); int x2; int x3; union { int x_4_1_1; void *x_4_1_2; } x4; float x5; boolx6; boolx7; int x8; struct btRigidBody {} *x9; struct btRigidBody {} *x10; float x11; float x12; struct btJointFeedback {} *x13; struct btJacobianEntry { struct btVector3 { union { float x_1_3_1[4]; } x_1_2_1; } x_14_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_14_1_2; struct btVector3 { union { float x_1_3_1[4]; } x_3_2_1; } x_14_1_3; struct btVector3 { union { float x_1_3_1[4]; } x_4_2_1; } x_14_1_4; struct btVector3 { union { float x_1_3_1[4]; } x_5_2_1; } x_14_1_5; float x_14_1_6; } x14[3]; struct btJacobianEntry { struct btVector3 { union { float x_1_3_1[4]; } x_1_2_1; } x_15_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_15_1_2; struct btVector3 { union { float x_1_3_1[4]; } x_3_2_1; } x_15_1_3; struct btVector3 { union { float x_1_3_1[4]; } x_4_2_1; } x_15_1_4; struct btVector3 { union { float x_1_3_1[4]; } x_5_2_1; } x_15_1_5; float x_15_1_6; } x15[3]; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_16_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_16_1_2; } x16; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_17_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_17_1_2; } x17; float x18; float x19; struct btAngularLimit { float x_20_1_1; float x_20_1_2; float x_20_1_3; float x_20_1_4; float x_20_1_5; float x_20_1_6; float x_20_1_7; boolx_20_1_8; } x20; float x21; float x22; float x23; float x24; boolx25; boolx26; boolx27; boolx28; boolx29; float x30; int x31; float x32; float x33; float x34; } *_constraint;
    SCNPhysicsWorld *_world;
}

@property(readonly) SCNPhysicsBody * bodyA;
@property struct SCNVector3 { float x1; float x2; float x3; } axisA;
@property struct SCNVector3 { float x1; float x2; float x3; } anchorA;
@property(readonly) SCNPhysicsBody * bodyB;
@property struct SCNVector3 { float x1; float x2; float x3; } axisB;
@property struct SCNVector3 { float x1; float x2; float x3; } anchorB;

+ (id)jointWithBody:(id)arg1 axis:(struct SCNVector3 { float x1; float x2; float x3; })arg2 anchor:(struct SCNVector3 { float x1; float x2; float x3; })arg3;
+ (id)jointWithBodyA:(id)arg1 axisA:(struct SCNVector3 { float x1; float x2; float x3; })arg2 anchorA:(struct SCNVector3 { float x1; float x2; float x3; })arg3 bodyB:(id)arg4 axisB:(struct SCNVector3 { float x1; float x2; float x3; })arg5 anchorB:(struct SCNVector3 { float x1; float x2; float x3; })arg6;
+ (id)SCNJSExportProtocol;

- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (void)_addToPhysicsWorld:(id)arg1;
- (void)setAnchorB:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })anchorB;
- (void)setAxisB:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })axisB;
- (void)setAnchorA:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })anchorA;
- (void)setAxisA:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })axisA;
- (id)initWithBody:(id)arg1 axis:(struct SCNVector3 { float x1; float x2; float x3; })arg2 anchor:(struct SCNVector3 { float x1; float x2; float x3; })arg3;
- (id)initWithBodyA:(id)arg1 axisA:(struct SCNVector3 { float x1; float x2; float x3; })arg2 anchorA:(struct SCNVector3 { float x1; float x2; float x3; })arg3 bodyB:(id)arg4 axisB:(struct SCNVector3 { float x1; float x2; float x3; })arg5 anchorB:(struct SCNVector3 { float x1; float x2; float x3; })arg6;
- (id)bodyB;
- (id)bodyA;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id).cxx_construct;

@end