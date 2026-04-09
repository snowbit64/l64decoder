// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeInitializer
// Entry Point: 00c1d210
// Size: 56 bytes
// Signature: undefined __cdecl executeInitializer(GsTSourceLoc param_1, SHC_String * param_2, SHC_Type * param_3, AST_TypedNode * * param_4, AST_SymbolNode * * param_5, GsTVariable * param_6)


/* GISLParserContext::executeInitializer(GsTSourceLoc, SHC_String const*, SHC_Type&,
   AST_TypedNode*&, AST_SymbolNode*&, GsTVariable*) */

uint GISLParserContext::executeInitializer
               (GsTSourceLoc param_1,SHC_String *param_2,SHC_Type *param_3,AST_TypedNode **param_4,
               AST_SymbolNode **param_5,GsTVariable *param_6)

{
  uint uVar1;
  undefined in_w6;
  undefined8 in_x7;
  
  uVar1 = executeInitializer(param_1,param_2,(SHC_String *)param_3,(SHC_Type *)param_4,
                             (AST_TypedNode **)0x0,param_5,param_6,in_w6,in_x7);
  return uVar1 & 1;
}


