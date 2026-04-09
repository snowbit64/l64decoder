// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_008ce9c4
// Entry Point: 008ce9c4
// Size: 588 bytes
// Signature: undefined FUN_008ce9c4(void)


void FUN_008ce9c4(undefined8 *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  uint *__src;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  uint **ppuVar7;
  ulong uVar8;
  
  lVar5 = *(long *)(param_1[1] + 0x2f68);
  uVar3 = *(uint *)(lVar5 + (ulong)param_3 * 8 + 4);
  if (uVar3 == 0xffffffff) {
    return;
  }
  ppuVar7 = (uint **)*param_1;
  uVar2 = param_3 + 2;
  if ((param_3 - 1 & 3) != 0) {
    uVar2 = param_3 - 1;
  }
  __src = *ppuVar7;
  puVar4 = ppuVar7[1];
  if (*(ushort *)(lVar5 + (ulong)uVar2 * 8) < *(ushort *)(lVar5 + (ulong)param_3 * 8)) {
    puVar6 = __src;
    if (__src == puVar4) {
LAB_008cea84:
      if (puVar6 != puVar4) {
        *puVar6 = param_3;
        return;
      }
    }
    else {
      do {
        if (*puVar6 == param_2) goto LAB_008cea84;
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar4);
    }
    if (puVar4 == ppuVar7[2]) {
      uVar8 = (long)puVar4 - (long)__src;
      uVar1 = ((long)uVar8 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) {
LAB_008cebfc:
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
        puVar4 = (uint *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) {
LAB_008cec04:
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        puVar4 = (uint *)operator_new(uVar1 << 2);
      }
      puVar4[(long)uVar8 >> 2] = param_3;
      if (0 < (long)uVar8) {
        memcpy(puVar4,__src,uVar8);
      }
      *ppuVar7 = puVar4;
      ppuVar7[1] = puVar4 + ((long)uVar8 >> 2) + 1;
      ppuVar7[2] = puVar4 + uVar1;
joined_r0x008ceba4:
      if (__src == (uint *)0x0) {
        return;
      }
      operator_delete(__src);
      return;
    }
    *puVar4 = param_3;
  }
  else {
    puVar6 = __src;
    if (__src == puVar4) {
LAB_008cea94:
      if (puVar6 != puVar4) {
        return;
      }
    }
    else {
      do {
        if (*puVar6 == uVar3) goto LAB_008cea94;
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar4);
    }
    if (puVar4 == ppuVar7[2]) {
      uVar8 = (long)puVar4 - (long)__src;
      uVar1 = ((long)uVar8 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_008cebfc;
      if (uVar1 <= (ulong)((long)uVar8 >> 1)) {
        uVar1 = (long)uVar8 >> 1;
      }
      if (0x7ffffffffffffffb < uVar8) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        puVar4 = (uint *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_008cec04;
        puVar4 = (uint *)operator_new(uVar1 << 2);
      }
      puVar4[(long)uVar8 >> 2] = uVar3;
      if (0 < (long)uVar8) {
        memcpy(puVar4,__src,uVar8);
      }
      *ppuVar7 = puVar4;
      ppuVar7[1] = puVar4 + ((long)uVar8 >> 2) + 1;
      ppuVar7[2] = puVar4 + uVar1;
      goto joined_r0x008ceba4;
    }
    *puVar4 = uVar3;
  }
  ppuVar7[1] = puVar4 + 1;
  return;
}


