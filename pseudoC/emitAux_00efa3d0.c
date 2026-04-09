// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emitAux
// Entry Point: 00efa3d0
// Size: 476 bytes
// Signature: undefined __thiscall emitAux(BytecodeBuilder * this, uint param_1)


/* Luau::BytecodeBuilder::emitAux(unsigned int) */

void __thiscall Luau::BytecodeBuilder::emitAux(BytecodeBuilder *this,uint param_1)

{
  ulong uVar1;
  void *pvVar2;
  uint *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  
  puVar3 = *(uint **)(this + 0x28);
  if (puVar3 == *(uint **)(this + 0x30)) {
    pvVar6 = *(void **)(this + 0x20);
    uVar7 = (long)puVar3 - (long)pvVar6;
    lVar8 = (long)uVar7 >> 2;
    uVar1 = lVar8 + 1;
    if (uVar1 >> 0x3e != 0) goto LAB_00efa59c;
    if (uVar1 <= (ulong)((long)uVar7 >> 1)) {
      uVar1 = (long)uVar7 >> 1;
    }
    if (0x7ffffffffffffffb < uVar7) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar5 = (void *)0x0;
      puVar3 = (uint *)(lVar8 * 4);
      pvVar2 = (void *)0x0;
      *puVar3 = param_1;
    }
    else {
      if (uVar1 >> 0x3e != 0) goto LAB_00efa5a0;
      pvVar5 = operator_new(uVar1 << 2);
      puVar3 = (uint *)((long)pvVar5 + lVar8 * 4);
      pvVar2 = (void *)((long)pvVar5 + uVar1 * 4);
      *puVar3 = param_1;
    }
    if (0 < (long)uVar7) {
      memcpy(pvVar5,pvVar6,uVar7);
    }
    *(void **)(this + 0x20) = pvVar5;
    *(uint **)(this + 0x28) = puVar3 + 1;
    *(void **)(this + 0x30) = pvVar2;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
  }
  else {
    *puVar3 = param_1;
    *(uint **)(this + 0x28) = puVar3 + 1;
  }
  puVar4 = *(undefined4 **)(this + 0x40);
  if (puVar4 == *(undefined4 **)(this + 0x48)) {
    pvVar6 = *(void **)(this + 0x38);
    uVar7 = (long)puVar4 - (long)pvVar6;
    lVar8 = (long)uVar7 >> 2;
    uVar1 = lVar8 + 1;
    if (uVar1 >> 0x3e != 0) {
LAB_00efa59c:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar7 >> 1)) {
      uVar1 = (long)uVar7 >> 1;
    }
    if (0x7ffffffffffffffb < uVar7) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar5 = (void *)0x0;
      puVar4 = (undefined4 *)(lVar8 * 4);
      pvVar2 = (void *)0x0;
      *puVar4 = *(undefined4 *)(this + 0x1a8);
    }
    else {
      if (uVar1 >> 0x3e != 0) {
LAB_00efa5a0:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar5 = operator_new(uVar1 << 2);
      puVar4 = (undefined4 *)((long)pvVar5 + lVar8 * 4);
      pvVar2 = (void *)((long)pvVar5 + uVar1 * 4);
      *puVar4 = *(undefined4 *)(this + 0x1a8);
    }
    if (0 < (long)uVar7) {
      memcpy(pvVar5,pvVar6,uVar7);
    }
    *(void **)(this + 0x38) = pvVar5;
    *(undefined4 **)(this + 0x40) = puVar4 + 1;
    *(void **)(this + 0x48) = pvVar2;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
      return;
    }
  }
  else {
    *puVar4 = *(undefined4 *)(this + 0x1a8);
    *(undefined4 **)(this + 0x40) = puVar4 + 1;
  }
  return;
}


