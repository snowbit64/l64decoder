// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emitE
// Entry Point: 00efa1f4
// Size: 476 bytes
// Signature: undefined __thiscall emitE(BytecodeBuilder * this, LuauOpcode param_1, int param_2)


/* Luau::BytecodeBuilder::emitE(LuauOpcode, int) */

void __thiscall Luau::BytecodeBuilder::emitE(BytecodeBuilder *this,LuauOpcode param_1,int param_2)

{
  ulong uVar1;
  void *pvVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  
  puVar3 = *(uint **)(this + 0x28);
  uVar5 = param_1 | param_2 << 8;
  if (puVar3 == *(uint **)(this + 0x30)) {
    pvVar7 = *(void **)(this + 0x20);
    uVar8 = (long)puVar3 - (long)pvVar7;
    lVar9 = (long)uVar8 >> 2;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3e != 0) goto LAB_00efa3c0;
    if (uVar1 <= (ulong)((long)uVar8 >> 1)) {
      uVar1 = (long)uVar8 >> 1;
    }
    if (0x7ffffffffffffffb < uVar8) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
      puVar3 = (uint *)(lVar9 * 4);
      pvVar2 = (void *)0x0;
      *puVar3 = uVar5;
    }
    else {
      if (uVar1 >> 0x3e != 0) goto LAB_00efa3c4;
      pvVar6 = operator_new(uVar1 << 2);
      puVar3 = (uint *)((long)pvVar6 + lVar9 * 4);
      pvVar2 = (void *)((long)pvVar6 + uVar1 * 4);
      *puVar3 = uVar5;
    }
    if (0 < (long)uVar8) {
      memcpy(pvVar6,pvVar7,uVar8);
    }
    *(void **)(this + 0x20) = pvVar6;
    *(uint **)(this + 0x28) = puVar3 + 1;
    *(void **)(this + 0x30) = pvVar2;
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  else {
    *puVar3 = uVar5;
    *(uint **)(this + 0x28) = puVar3 + 1;
  }
  puVar4 = *(undefined4 **)(this + 0x40);
  if (puVar4 == *(undefined4 **)(this + 0x48)) {
    pvVar7 = *(void **)(this + 0x38);
    uVar8 = (long)puVar4 - (long)pvVar7;
    lVar9 = (long)uVar8 >> 2;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3e != 0) {
LAB_00efa3c0:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar8 >> 1)) {
      uVar1 = (long)uVar8 >> 1;
    }
    if (0x7ffffffffffffffb < uVar8) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
      puVar4 = (undefined4 *)(lVar9 * 4);
      pvVar2 = (void *)0x0;
      *puVar4 = *(undefined4 *)(this + 0x1a8);
    }
    else {
      if (uVar1 >> 0x3e != 0) {
LAB_00efa3c4:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar6 = operator_new(uVar1 << 2);
      puVar4 = (undefined4 *)((long)pvVar6 + lVar9 * 4);
      pvVar2 = (void *)((long)pvVar6 + uVar1 * 4);
      *puVar4 = *(undefined4 *)(this + 0x1a8);
    }
    if (0 < (long)uVar8) {
      memcpy(pvVar6,pvVar7,uVar8);
    }
    *(void **)(this + 0x38) = pvVar6;
    *(undefined4 **)(this + 0x40) = puVar4 + 1;
    *(void **)(this + 0x48) = pvVar2;
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
      return;
    }
  }
  else {
    *puVar4 = *(undefined4 *)(this + 0x1a8);
    *(undefined4 **)(this + 0x40) = puVar4 + 1;
  }
  return;
}


