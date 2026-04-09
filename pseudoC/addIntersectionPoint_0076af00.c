// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addIntersectionPoint
// Entry Point: 0076af00
// Size: 112 bytes
// Signature: undefined __thiscall addIntersectionPoint(TensionBeltGeometryConstructor * this, MethodInvocation * param_1)


/* TensionBeltGeometryConstructor::addIntersectionPoint(MethodInvocation*) */

void __thiscall
TensionBeltGeometryConstructor::addIntersectionPoint
          (TensionBeltGeometryConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = *(undefined4 *)param_1;
  uStack_3c = *(undefined4 *)(param_1 + 0x10);
  local_38 = *(undefined4 *)(param_1 + 0x20);
  uStack_34 = *(undefined4 *)(param_1 + 0x30);
  local_30 = *(undefined4 *)(param_1 + 0x40);
  uStack_2c = *(undefined4 *)(param_1 + 0x50);
  FUN_0076af70(this + 0x60,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


