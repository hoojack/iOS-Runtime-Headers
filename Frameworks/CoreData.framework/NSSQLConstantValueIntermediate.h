/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLConstantValueIntermediate : NSSQLIntermediate {
    id _constantValue;
    NSUInteger _type;
}

- (BOOL)_addBindVarForConstId:(id)arg1 ofType:(NSUInteger)arg2 inContext:(id)arg3;
- (BOOL)_addBindVarForConstVal1:(id)arg1 inContext:(id)arg2;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithConstantValue:(id)arg1 inScope:(id)arg2;
- (id)initWithConstantValue:(id)arg1 ofType:(NSUInteger)arg2 inScope:(id)arg3;
- (id)propertyAtEndOfKeyPathExpression:(id)arg1;
- (NSUInteger)sqlTypeForProperty:(id)arg1;

@end