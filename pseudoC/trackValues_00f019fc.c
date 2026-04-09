// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: trackValues
// Entry Point: 00f019fc
// Size: 104 bytes
// Signature: undefined __cdecl trackValues(DenseHashMap * param_1, DenseHashMap * param_2, AstNode * param_3)


/* Luau::Compile::trackValues(Luau::DenseHashMap<Luau::AstName, Luau::Compile::Global,
   std::__ndk1::hash<Luau::AstName>, std::__ndk1::equal_to<Luau::AstName> >&,
   Luau::DenseHashMap<Luau::AstLocal*, Luau::Compile::Variable, Luau::DenseHashPointer,
   std::__ndk1::equal_to<Luau::AstLocal*> >&, Luau::AstNode*) */

void Luau::Compile::trackValues(DenseHashMap *param_1,DenseHashMap *param_2,AstNode *param_3)

{
  long lVar1;
  undefined **local_40;
  DenseHashMap *pDStack_38;
  DenseHashMap *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = &PTR__AstVisitor_01016d68;
  pDStack_38 = param_1;
  local_30 = param_2;
  (***(code ***)param_3)(param_3,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


