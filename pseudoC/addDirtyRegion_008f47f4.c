// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDirtyRegion
// Entry Point: 008f47f4
// Size: 440 bytes
// Signature: undefined __thiscall addDirtyRegion(TerrainLodTexture * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* TerrainLodTexture::addDirtyRegion(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
TerrainLodTexture::addDirtyRegion
          (TerrainLodTexture *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  void *__src;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong __n;
  void *__dest;
  ulong uVar7;
  ulong uVar8;
  
  if ((param_1 < param_3) && (param_2 < param_4)) {
    __src = *(void **)(this + 0x78);
    puVar2 = *(uint **)(this + 0x80);
    __n = (long)puVar2 - (long)__src;
    uVar8 = (long)__n >> 4;
    if (__n != 0) {
      uVar7 = 0;
      do {
        puVar1 = (uint *)((long)__src + uVar7 * 0x10);
        uVar3 = *puVar1;
        uVar6 = puVar1[2];
        if ((((param_3 > uVar3 && param_1 <= uVar6) && (param_3 <= uVar3 || uVar6 != param_1)) &&
            (puVar1[1] < param_4)) && (param_2 < puVar1[3])) {
          if (param_1 <= uVar3) {
            uVar3 = param_1;
          }
          uVar4 = *(uint *)((long)__src + uVar7 * 0x10 + 4);
          uVar5 = *(uint *)((long)__src + uVar7 * 0x10 + 0xc);
          *puVar1 = uVar3;
          if (param_2 <= uVar4) {
            uVar4 = param_2;
          }
          if (uVar6 <= param_3) {
            uVar6 = param_3;
          }
          if (uVar5 <= param_4) {
            uVar5 = param_4;
          }
          *(uint *)((long)__src + uVar7 * 0x10 + 4) = uVar4;
          puVar1[2] = uVar6;
          *(uint *)((long)__src + uVar7 * 0x10 + 0xc) = uVar5;
          return;
        }
        uVar7 = (ulong)((int)uVar7 + 1);
      } while (uVar7 < uVar8);
    }
    if (puVar2 == *(uint **)(this + 0x88)) {
      uVar7 = uVar8 + 1;
      if (uVar7 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar7 <= (ulong)((long)__n >> 3)) {
        uVar7 = (long)__n >> 3;
      }
      if (0x7fffffffffffffef < __n) {
        uVar7 = 0xfffffffffffffff;
      }
      if (uVar7 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar7 * 0x10);
      puVar2 = (uint *)((long)__dest + uVar8 * 0x10);
      *puVar2 = param_1;
      puVar2[1] = param_2;
      puVar2[2] = param_3;
      puVar2[3] = param_4;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(this + 0x78) = __dest;
      *(uint **)(this + 0x80) = puVar2 + 4;
      *(void **)(this + 0x88) = (void *)((long)__dest + uVar7 * 0x10);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      *puVar2 = param_1;
      puVar2[1] = param_2;
      puVar2[2] = param_3;
      puVar2[3] = param_4;
      *(uint **)(this + 0x80) = puVar2 + 4;
    }
  }
  return;
}


