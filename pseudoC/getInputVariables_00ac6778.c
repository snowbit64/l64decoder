// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInputVariables
// Entry Point: 00ac6778
// Size: 300 bytes
// Signature: undefined __thiscall getInputVariables(SpirvReflect * this, vector * param_1)


/* SpirvReflect::getInputVariables(std::__ndk1::vector<SpvReflectInterfaceVariable*,
   std::__ndk1::allocator<SpvReflectInterfaceVariable*> >&) */

void __thiscall SpirvReflect::getInputVariables(SpirvReflect *this,vector *param_1)

{
  int iVar1;
  long lVar2;
  SpvReflectResult SVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_64 = 0;
  SVar3 = spvReflectEnumerateInputVariables(this + 8,&local_64,0);
  *(SpvReflectResult *)this = SVar3;
  *(SpvReflectResult *)(this + 0x4a8) = SVar3;
  ToStringResult(SVar3);
  if (((byte)this[0x4b0] & 1) != 0) {
    operator_delete(*(void **)(this + 0x4c0));
  }
  iVar1 = *(int *)(this + 0x4a8);
  *(undefined8 *)(this + 0x4b8) = uStack_58;
  *(undefined8 *)(this + 0x4b0) = local_60;
  *(undefined8 *)(this + 0x4c0) = local_50;
  if (iVar1 == 0) {
    lVar4 = *(long *)param_1;
    uVar5 = (ulong)local_64;
    uVar6 = *(long *)(param_1 + 8) - lVar4 >> 3;
    if (uVar6 < uVar5) {
      std::__ndk1::
      vector<SpvReflectInterfaceVariable*,std::__ndk1::allocator<SpvReflectInterfaceVariable*>>::
      __append((vector<SpvReflectInterfaceVariable*,std::__ndk1::allocator<SpvReflectInterfaceVariable*>>
                *)param_1,uVar5 - uVar6);
      lVar4 = *(long *)param_1;
    }
    else if (uVar5 < uVar6) {
      *(ulong *)(param_1 + 8) = lVar4 + uVar5 * 8;
    }
    SVar3 = spvReflectEnumerateInputVariables(this + 8,&local_64,lVar4);
    *(SpvReflectResult *)this = SVar3;
    *(SpvReflectResult *)(this + 0x4a8) = SVar3;
    ToStringResult(SVar3);
    if (((byte)this[0x4b0] & 1) != 0) {
      operator_delete(*(void **)(this + 0x4c0));
    }
    iVar1 = *(int *)(this + 0x4a8);
    *(undefined8 *)(this + 0x4b8) = uStack_58;
    *(undefined8 *)(this + 0x4b0) = local_60;
    *(undefined8 *)(this + 0x4c0) = local_50;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


