// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTextureType
// Entry Point: 00c54450
// Size: 472 bytes
// Signature: undefined __thiscall getTextureType(IR_TypeSet * this, IR_TextureDim param_1, IR_TextureInfo * param_2, IR_Type * param_3)


/* IR_TypeSet::getTextureType(IR_TextureDim, IR_TextureInfo const&, IR_Type*) */

undefined4 * __thiscall
IR_TypeSet::getTextureType
          (IR_TypeSet *this,IR_TextureDim param_1,IR_TextureInfo *param_2,IR_Type *param_3)

{
  int iVar1;
  IR_TextureInfo IVar2;
  IR_TextureInfo IVar3;
  size_t __n;
  void *__dest;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  void *__src;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  if ((param_3 != (IR_Type *)0x0) && (*(int *)param_3 == 3)) {
    *(undefined *)(*(long *)(param_3 + 8) + 0x54) = 1;
  }
  puVar10 = *(undefined8 **)(this + 0xd90);
  __src = *(void **)(this + 0xd88);
  IVar2 = *param_2;
  IVar3 = param_2[1];
  __n = (long)puVar10 - (long)__src;
  iVar1 = *(int *)(param_2 + 4);
  uVar9 = (long)__n >> 4;
  if (__n != 0) {
    uVar4 = 0;
    do {
      puVar8 = *(undefined4 **)((long)__src + uVar4 * 0x10);
      if ((((*(IR_Type **)(puVar8 + 2) == param_3) && (puVar8[4] == param_1)) &&
          (IVar2 == *(IR_TextureInfo *)(puVar8 + 5))) &&
         ((IVar3 == *(IR_TextureInfo *)((long)puVar8 + 0x15) && (puVar8[6] == iVar1)))) {
        return puVar8;
      }
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < uVar9);
  }
  puVar8 = (undefined4 *)operator_new(0x20);
  *(IR_Type **)(puVar8 + 2) = param_3;
  puVar8[4] = param_1;
  *puVar8 = 7;
  puVar5 = *(undefined8 **)(this + 0xd98);
  *(IR_TextureInfo *)(puVar8 + 5) = IVar2;
  *(IR_TextureInfo *)((long)puVar8 + 0x15) = IVar3;
  puVar8[6] = iVar1;
  if (puVar10 < puVar5) {
    *puVar10 = puVar8;
    *(undefined *)(puVar10 + 1) = 1;
    *(undefined8 **)(this + 0xd90) = puVar10 + 2;
  }
  else {
    uVar4 = uVar9 + 1;
    if (uVar4 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar6 = (long)puVar5 - (long)__src;
    uVar7 = (long)uVar6 >> 3;
    if (uVar4 <= uVar7) {
      uVar4 = uVar7;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar4 = 0xfffffffffffffff;
    }
    if (uVar4 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar4 * 0x10);
    puVar10 = (undefined8 *)((long)__dest + uVar9 * 0x10);
    *puVar10 = puVar8;
    *(undefined *)(puVar10 + 1) = 1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0xd88) = __dest;
    *(undefined8 **)(this + 0xd90) = puVar10 + 2;
    *(void **)(this + 0xd98) = (void *)((long)__dest + uVar4 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  return puVar8;
}


