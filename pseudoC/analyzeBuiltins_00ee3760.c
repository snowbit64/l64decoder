// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: analyzeBuiltins
// Entry Point: 00ee3760
// Size: 108 bytes
// Signature: undefined __cdecl analyzeBuiltins(DenseHashMap * param_1, DenseHashMap * param_2, DenseHashMap * param_3, CompileOptions * param_4, AstNode * param_5)


/* Luau::Compile::analyzeBuiltins(Luau::DenseHashMap<Luau::AstExprCall*, int,
   Luau::DenseHashPointer, std::__ndk1::equal_to<Luau::AstExprCall*> >&,
   Luau::DenseHashMap<Luau::AstName, Luau::Compile::Global, std::__ndk1::hash<Luau::AstName>,
   std::__ndk1::equal_to<Luau::AstName> > const&, Luau::DenseHashMap<Luau::AstLocal*,
   Luau::Compile::Variable, Luau::DenseHashPointer, std::__ndk1::equal_to<Luau::AstLocal*> > const&,
   Luau::CompileOptions const&, Luau::AstNode*) */

void Luau::Compile::analyzeBuiltins
               (DenseHashMap *param_1,DenseHashMap *param_2,DenseHashMap *param_3,
               CompileOptions *param_4,AstNode *param_5)

{
  long lVar1;
  undefined **local_50;
  DenseHashMap *pDStack_48;
  DenseHashMap *local_40;
  DenseHashMap *pDStack_38;
  CompileOptions *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_50 = &PTR__AstVisitor_01016460;
  pDStack_48 = param_1;
  local_40 = param_2;
  pDStack_38 = param_3;
  local_30 = param_4;
  (***(code ***)param_5)(param_5,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


