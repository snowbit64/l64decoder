// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLastError
// Entry Point: 00ac64ac
// Size: 128 bytes
// Signature: undefined __thiscall setLastError(SpirvReflect * this, SpvReflectResult param_1)


/* SpirvReflect::setLastError(SpvReflectResult) */

void __thiscall SpirvReflect::setLastError(SpirvReflect *this,SpvReflectResult param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(SpvReflectResult *)(this + 0x4a8) = param_1;
  ToStringResult(param_1);
  if (((byte)this[0x4b0] & 1) != 0) {
    operator_delete(*(void **)(this + 0x4c0));
  }
  *(undefined8 *)(this + 0x4b8) = uStack_48;
  *(undefined8 *)(this + 0x4b0) = local_50;
  *(undefined8 *)(this + 0x4c0) = local_40;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


