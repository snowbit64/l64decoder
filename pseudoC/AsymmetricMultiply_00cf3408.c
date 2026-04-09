// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AsymmetricMultiply
// Entry Point: 00cf3408
// Size: 904 bytes
// Signature: undefined __cdecl AsymmetricMultiply(uint * param_1, uint * param_2, uint * param_3, ulong param_4, uint * param_5, ulong param_6)


/* CryptoPP::AsymmetricMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned long,
   unsigned int const*, unsigned long) */

void CryptoPP::AsymmetricMultiply
               (uint *param_1,uint *param_2,uint *param_3,ulong param_4,uint *param_5,ulong param_6)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  uint *puVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  size_t __n;
  long lVar9;
  
  if (param_4 == param_6) {
    if (param_3 == param_5) {
      RecursiveSquare(param_1,param_2,param_3,param_4);
      return;
    }
    RecursiveMultiply(param_1,param_2,param_3,param_5,param_4);
    return;
  }
  if (param_6 < param_4) {
    uVar3 = param_6;
    puVar4 = param_5;
    if (param_6 != 2) goto LAB_00cf34b4;
  }
  else {
    bVar2 = param_4 != 2;
    uVar3 = param_4;
    puVar4 = param_3;
    param_3 = param_5;
    param_4 = param_6;
    if (bVar2) goto LAB_00cf34b4;
  }
  if (puVar4[1] == 0) {
    uVar1 = *puVar4;
    if (uVar1 == 0) {
      if (param_4 == 0xfffffffffffffffe) {
        return;
      }
      memset(param_1,0,param_4 * 4 + 8);
      return;
    }
    if (uVar1 == 1) {
      if (param_3 != param_1) {
        memcpy(param_1,param_3,param_4 << 2);
      }
      *(undefined8 *)(param_1 + param_4) = 0;
      return;
    }
    if (param_4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      uVar8 = 0;
      do {
        uVar6 = (ulong)((int)uVar8 + 1);
        uVar7 = uVar3 + (ulong)param_3[uVar8] * (ulong)uVar1;
        uVar3 = uVar7 >> 0x20;
        param_1[uVar8] = (uint)uVar7;
        uVar8 = uVar6;
      } while (uVar6 < param_4);
    }
    param_1[param_4] = (uint)uVar3;
    (param_1 + param_4)[1] = 0;
    return;
  }
LAB_00cf34b4:
  uVar8 = 0;
  if (uVar3 != 0) {
    uVar8 = param_4 / uVar3;
  }
  if ((uVar8 & 1) == 0) {
    RecursiveMultiply(param_1,param_2,puVar4,param_3,uVar3);
    uVar8 = uVar3 * 2;
    __n = uVar3 << 2;
    if (param_2 + uVar3 * 2 != param_1 + uVar3) {
      memcpy(param_2 + uVar3 * 2,param_1 + uVar3,__n);
    }
    if (uVar8 < param_4) {
      lVar9 = 0;
      uVar6 = uVar8;
      do {
        RecursiveMultiply((uint *)((long)param_2 + lVar9 + uVar3 * 0xc),param_2,puVar4,
                          (uint *)((long)param_3 + lVar9 + uVar3 * 8),uVar3);
        uVar6 = uVar6 + uVar8;
        lVar9 = lVar9 + uVar3 * 8;
      } while (uVar6 < param_4);
    }
    if (uVar3 < param_4) {
      uVar6 = uVar3;
      do {
        RecursiveMultiply((uint *)((long)param_1 + __n),param_2,puVar4,(uint *)((long)param_3 + __n)
                          ,uVar3);
        uVar6 = uVar6 + uVar8;
        __n = __n + uVar3 * 8;
      } while (uVar6 < param_4);
    }
  }
  else {
    if (param_4 != 0) {
      lVar9 = 0;
      uVar8 = 0;
      do {
        RecursiveMultiply((uint *)((long)param_1 + lVar9),param_2,puVar4,
                          (uint *)((long)param_3 + lVar9),uVar3);
        uVar8 = uVar8 + uVar3 * 2;
        lVar9 = lVar9 + uVar3 * 8;
      } while (uVar8 < param_4);
    }
    if (uVar3 < param_4) {
      lVar9 = 0;
      uVar8 = uVar3;
      do {
        RecursiveMultiply((uint *)((long)param_2 + lVar9 + uVar3 * 8),param_2,puVar4,
                          (uint *)((long)param_3 + lVar9 + uVar3 * 4),uVar3);
        uVar8 = uVar8 + uVar3 * 2;
        lVar9 = lVar9 + uVar3 * 8;
      } while (uVar8 < param_4);
    }
  }
  if (param_4 != uVar3) {
    uVar8 = 0;
    uVar6 = 0;
    puVar4 = param_2 + uVar3 * 2 + 1;
    puVar5 = param_1 + uVar3 + 1;
    do {
      uVar8 = uVar8 + 2;
      uVar6 = uVar6 + puVar5[-1] + (ulong)puVar4[-1];
      puVar5[-1] = (uint)uVar6;
      uVar7 = (ulong)*puVar5 + (uVar6 >> 0x20) + (ulong)*puVar4;
      uVar6 = uVar7 >> 0x20;
      *puVar5 = (uint)uVar7;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
    } while (uVar8 < param_4 - uVar3);
    if (uVar6 != 0) {
      puVar4 = param_1 + param_4;
      uVar1 = *puVar4;
      *puVar4 = uVar1 + 1;
      if ((1 < uVar3) && (uVar1 == 0xffffffff)) {
        uVar8 = 1;
        do {
          uVar6 = (ulong)((int)uVar8 + 1);
          uVar1 = puVar4[uVar8];
          puVar4[uVar8] = uVar1 + 1;
          uVar8 = uVar6;
        } while ((uVar1 == 0xffffffff && uVar6 <= uVar3) && (uVar1 != 0xffffffff || uVar3 != uVar6))
        ;
      }
    }
  }
  return;
}


