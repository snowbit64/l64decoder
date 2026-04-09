// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: freeUpSomeTiles
// Entry Point: 0095d2dc
// Size: 584 bytes
// Signature: undefined __thiscall freeUpSomeTiles(MultiresTexture * this, uint param_1)


/* MultiresTexture::freeUpSomeTiles(unsigned int) */

void __thiscall MultiresTexture::freeUpSomeTiles(MultiresTexture *this,uint param_1)

{
  ulong uVar1;
  uint uVar2;
  void *__dest;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  void *__src;
  ulong uVar9;
  size_t __n;
  uint uVar10;
  uint uVar11;
  long lVar12;
  
  __src = *(void **)(this + 0x108);
  puVar3 = *(uint **)(this + 0x110);
  if ((ulong)((long)puVar3 - (long)__src >> 2) < (ulong)param_1) {
    lVar12 = *(long *)(this + 400);
    uVar7 = (*(long *)(this + 0x198) - lVar12 >> 4) * -0x1111111111111111;
    iVar6 = (int)uVar7;
    if (iVar6 != 0) {
      uVar9 = 0;
      while( true ) {
        lVar12 = lVar12 + (ulong)(iVar6 + ~(uint)uVar9) * 0xf0;
        uVar4 = *(uint *)(lVar12 + 0x14);
        if (uVar4 != 0) {
          uVar10 = 0;
          do {
            uVar11 = 0;
            do {
              uVar2 = *(uint *)(*(long *)(lVar12 + 0x80) +
                               (ulong)(uVar11 + uVar10 * *(int *)(lVar12 + 0x70)) * 4);
              if (((uVar2 & 0xff00) == 0) && (0xffff < uVar2 && (uVar2 & 1) == 0)) {
                if (puVar3 < *(uint **)(this + 0x118)) {
                  *puVar3 = uVar2 >> 0x10;
                  *(uint **)(this + 0x110) = puVar3 + 1;
                }
                else {
                  __n = (long)puVar3 - (long)__src;
                  uVar1 = ((long)__n >> 2) + 1;
                  if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                  uVar5 = (long)*(uint **)(this + 0x118) - (long)__src;
                  uVar8 = (long)uVar5 >> 1;
                  if (uVar1 <= uVar8) {
                    uVar1 = uVar8;
                  }
                  if (0x7ffffffffffffffb < uVar5) {
                    uVar1 = 0x3fffffffffffffff;
                  }
                  if (uVar1 == 0) {
                    __dest = (void *)0x0;
                  }
                  else {
                    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_006d1f18(
                                  "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                  );
                    }
                    __dest = operator_new(uVar1 << 2);
                  }
                  puVar3 = (uint *)((long)__dest + ((long)__n >> 2) * 4);
                  *puVar3 = uVar2 >> 0x10;
                  if (0 < (long)__n) {
                    memcpy(__dest,__src,__n);
                  }
                  *(void **)(this + 0x108) = __dest;
                  *(uint **)(this + 0x110) = puVar3 + 1;
                  *(void **)(this + 0x118) = (void *)((long)__dest + uVar1 * 4);
                  if (__src != (void *)0x0) {
                    operator_delete(__src);
                  }
                }
                *(uint *)(*(long *)(lVar12 + 0x80) +
                         (ulong)(uVar11 + uVar10 * *(int *)(lVar12 + 0x70)) * 4) = uVar2 & 0xff;
                __src = *(void **)(this + 0x108);
                puVar3 = *(uint **)(this + 0x110);
                if ((ulong)param_1 <= (ulong)((long)puVar3 - (long)__src >> 2)) {
                  return;
                }
                uVar4 = *(uint *)(lVar12 + 0x14);
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar4);
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar4);
        }
        uVar9 = uVar9 + 1;
        if (uVar9 == (uVar7 & 0xffffffff)) break;
        lVar12 = *(long *)(this + 400);
      }
    }
  }
  return;
}


