// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addAttachment
// Entry Point: 0076ad5c
// Size: 96 bytes
// Signature: undefined __thiscall addAttachment(TensionBeltGeometryConstructor * this, MethodInvocation * param_1)


/* TensionBeltGeometryConstructor::addAttachment(MethodInvocation*) */

void __thiscall
TensionBeltGeometryConstructor::addAttachment
          (TensionBeltGeometryConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *(undefined4 *)param_1;
  uStack_34 = *(undefined4 *)(param_1 + 0x10);
  local_30 = *(undefined4 *)(param_1 + 0x20);
  FUN_0076adbc(this + 0x10,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


