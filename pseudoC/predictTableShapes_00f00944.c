// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: predictTableShapes
// Entry Point: 00f00944
// Size: 192 bytes
// Signature: undefined __cdecl predictTableShapes(DenseHashMap * param_1, AstNode * param_2)


/* Luau::Compile::predictTableShapes(Luau::DenseHashMap<Luau::AstExprTable*,
   Luau::Compile::TableShape, Luau::DenseHashPointer, std::__ndk1::equal_to<Luau::AstExprTable*> >&,
   Luau::AstNode*) */

void Luau::Compile::predictTableShapes(DenseHashMap *param_1,AstNode *param_2)

{
  long lVar1;
  undefined **local_c8;
  DenseHashMap *pDStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  void *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  void *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = 0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_88 = 0;
  local_90 = (void *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_58 = 0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
                    /* try { // try from 00f0099c to 00f009a7 has its CatchHandler @ 00f00a04 */
  local_c8 = &PTR__ShapeVisitor_01016b70;
  pDStack_c0 = param_1;
  (***(code ***)param_2)(param_2,&local_c8);
  local_c8 = &PTR__ShapeVisitor_01016b70;
  if (local_60 != (void *)0x0) {
    operator_delete(local_60);
    local_60 = (void *)0x0;
    uStack_58 = 0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete(local_90);
    local_90 = (void *)0x0;
    uStack_88 = 0;
  }
  if (local_b8 != (void *)0x0) {
    operator_delete(local_b8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


