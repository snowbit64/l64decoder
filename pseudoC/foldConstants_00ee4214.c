// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: foldConstants
// Entry Point: 00ee4214
// Size: 160 bytes
// Signature: undefined __cdecl foldConstants(DenseHashMap * param_1, DenseHashMap * param_2, DenseHashMap * param_3, DenseHashMap * param_4, AstNode * param_5)


/* Luau::Compile::foldConstants(Luau::DenseHashMap<Luau::AstExpr*, Luau::Compile::Constant,
   Luau::DenseHashPointer, std::__ndk1::equal_to<Luau::AstExpr*> >&,
   Luau::DenseHashMap<Luau::AstLocal*, Luau::Compile::Variable, Luau::DenseHashPointer,
   std::__ndk1::equal_to<Luau::AstLocal*> >&, Luau::DenseHashMap<Luau::AstLocal*,
   Luau::Compile::Constant, Luau::DenseHashPointer, std::__ndk1::equal_to<Luau::AstLocal*> >&,
   Luau::DenseHashMap<Luau::AstExprCall*, int, Luau::DenseHashPointer,
   std::__ndk1::equal_to<Luau::AstExprCall*> > const*, Luau::AstNode*) */

void Luau::Compile::foldConstants
               (DenseHashMap *param_1,DenseHashMap *param_2,DenseHashMap *param_3,
               DenseHashMap *param_4,AstNode *param_5)

{
  long lVar1;
  undefined **local_70;
  DenseHashMap *pDStack_68;
  DenseHashMap *local_60;
  DenseHashMap *pDStack_58;
  DenseHashMap *local_50;
  undefined local_48;
  void *local_40;
  void *local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_48 = (*(ulong *)(param_1 + 0x10) | *(ulong *)(param_3 + 0x10)) == 0;
  local_40 = (void *)0x0;
  local_70 = &PTR__ConstantVisitor_01016658;
  pDStack_68 = param_1;
  local_60 = param_2;
  pDStack_58 = param_3;
  local_50 = param_4;
                    /* try { // try from 00ee4270 to 00ee427b has its CatchHandler @ 00ee42b4 */
  (***(code ***)param_5)(param_5,&local_70);
  local_70 = &PTR__ConstantVisitor_01016658;
  if (local_40 != (void *)0x0) {
    local_38 = local_40;
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


