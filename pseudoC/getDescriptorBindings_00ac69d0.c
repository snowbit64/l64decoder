// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDescriptorBindings
// Entry Point: 00ac69d0
// Size: 316 bytes
// Signature: undefined __thiscall getDescriptorBindings(SpirvReflect * this, vector * param_1)


/* SpirvReflect::getDescriptorBindings(std::__ndk1::vector<SpvReflectDescriptorBinding*,
   std::__ndk1::allocator<SpvReflectDescriptorBinding*> >&) */

void __thiscall SpirvReflect::getDescriptorBindings(SpirvReflect *this,vector *param_1)

{
  long lVar1;
  SpvReflectResult SVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_64 = 0;
  SVar2 = spvReflectEnumerateDescriptorBindings(this + 8,&local_64,0);
  *(SpvReflectResult *)this = SVar2;
  *(SpvReflectResult *)(this + 0x4a8) = SVar2;
  ToStringResult(SVar2);
  if (((byte)this[0x4b0] & 1) != 0) {
    operator_delete(*(void **)(this + 0x4c0));
  }
  iVar4 = *(int *)(this + 0x4a8);
  *(undefined8 *)(this + 0x4b8) = uStack_58;
  *(undefined8 *)(this + 0x4b0) = local_60;
  *(undefined8 *)(this + 0x4c0) = local_50;
  if (iVar4 == 0) {
    lVar3 = *(long *)param_1;
    uVar5 = (ulong)local_64;
    uVar6 = *(long *)(param_1 + 8) - lVar3 >> 3;
    if (uVar6 < uVar5) {
      std::__ndk1::
      vector<SpvReflectDescriptorBinding*,std::__ndk1::allocator<SpvReflectDescriptorBinding*>>::
      __append((vector<SpvReflectDescriptorBinding*,std::__ndk1::allocator<SpvReflectDescriptorBinding*>>
                *)param_1,uVar5 - uVar6);
      lVar3 = *(long *)param_1;
    }
    else if (uVar5 < uVar6) {
      *(ulong *)(param_1 + 8) = lVar3 + uVar5 * 8;
    }
    SVar2 = spvReflectEnumerateDescriptorBindings(this + 8,&local_64,lVar3);
    *(SpvReflectResult *)this = SVar2;
    *(SpvReflectResult *)(this + 0x4a8) = SVar2;
    ToStringResult(SVar2);
    if (((byte)this[0x4b0] & 1) != 0) {
      operator_delete(*(void **)(this + 0x4c0));
    }
    iVar4 = *(int *)(this + 0x4a8);
    *(undefined8 *)(this + 0x4b8) = uStack_58;
    *(undefined8 *)(this + 0x4b0) = local_60;
    *(undefined8 *)(this + 0x4c0) = local_50;
    if (iVar4 == 0) {
      FUN_00ac6d7c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
      iVar4 = *(int *)(this + 0x4a8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4 == 0);
}


