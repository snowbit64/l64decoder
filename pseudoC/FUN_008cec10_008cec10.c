// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_008cec10
// Entry Point: 008cec10
// Size: 372 bytes
// Signature: undefined FUN_008cec10(void)


void FUN_008cec10(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  uint *__src;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  uint **ppuVar7;
  ulong __n;
  
  lVar5 = *(long *)(param_1[1] + 0x2f68);
  uVar3 = *(uint *)(lVar5 + (ulong)param_2 * 8 + 4);
  if (uVar3 != 0xffffffff) {
    ppuVar7 = (uint **)*param_1;
    uVar2 = param_2 + 2;
    if ((param_2 - 1 & 3) != 0) {
      uVar2 = param_2 - 1;
    }
    __src = *ppuVar7;
    puVar4 = ppuVar7[1];
    if (*(ushort *)(lVar5 + (ulong)uVar2 * 8) <= *(ushort *)(lVar5 + (ulong)param_2 * 8)) {
      uVar3 = param_2;
    }
    puVar6 = __src;
    if (__src == puVar4) {
LAB_008ceca0:
      if (puVar6 != puVar4) {
        return;
      }
    }
    else {
      do {
        if (*puVar6 == uVar3) goto LAB_008ceca0;
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar4);
    }
    if (puVar4 == ppuVar7[2]) {
      __n = (long)puVar4 - (long)__src;
      uVar1 = ((long)__n >> 2) + 1;
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)__n >> 1)) {
        uVar1 = (long)__n >> 1;
      }
      if (0x7ffffffffffffffb < __n) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        puVar4 = (uint *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        puVar4 = (uint *)operator_new(uVar1 << 2);
      }
      puVar4[(long)__n >> 2] = uVar3;
      if (0 < (long)__n) {
        memcpy(puVar4,__src,__n);
      }
      *ppuVar7 = puVar4;
      ppuVar7[1] = puVar4 + ((long)__n >> 2) + 1;
      ppuVar7[2] = puVar4 + uVar1;
      if (__src != (uint *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      *puVar4 = uVar3;
      ppuVar7[1] = puVar4 + 1;
    }
  }
  return;
}


