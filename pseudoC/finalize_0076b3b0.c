// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finalize
// Entry Point: 0076b3b0
// Size: 204 bytes
// Signature: undefined __thiscall finalize(TensionBeltGeometryConstructor * this, MethodInvocation * param_1)


/* TensionBeltGeometryConstructor::finalize(MethodInvocation*) */

void __thiscall
TensionBeltGeometryConstructor::finalize
          (TensionBeltGeometryConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  long lVar2;
  float local_30;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 1;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 4;
  if (((ulong)*(TransformGroup **)(this + 0x28) | (ulong)*(TransformGroup **)(this + 0x30)) != 0) {
    lVar2 = TensionBeltGeometryUtil::create
                      (*(float *)this,*(float *)(this + 4),*(float *)(this + 0xc),
                       *(float *)(this + 8),(vector *)(this + 0x10),
                       *(TransformGroup **)(this + 0x28),*(TransformGroup **)(this + 0x30),
                       (vector *)(this + 0x48),*(GsMaterial **)(this + 0x40),
                       *(TransformGroup **)(this + 0x38),(vector *)(this + 0x60),&local_2c,&local_30
                      );
    if (lVar2 != 0) {
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined4 *)(param_1 + 0x108) = 1;
      *(uint *)(param_1 + 0x110) = local_2c;
      *(undefined4 *)(param_1 + 0x118) = 1;
      *(float *)(param_1 + 0x120) = local_30;
      *(undefined4 *)(param_1 + 0x128) = 4;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


