// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PositiveAdd
// Entry Point: 00cfd130
// Size: 652 bytes
// Signature: undefined __cdecl PositiveAdd(Integer * param_1, Integer * param_2, Integer * param_3)


/* CryptoPP::PositiveAdd(CryptoPP::Integer&, CryptoPP::Integer const&, CryptoPP::Integer const&) */

void CryptoPP::PositiveAdd(Integer *param_1,Integer *param_2,Integer *param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar3 = *(ulong *)(param_2 + 0x18);
  uVar4 = *(ulong *)(param_3 + 0x18);
  if (uVar3 == uVar4) {
    if (uVar3 != 0) {
      uVar4 = 0;
      uVar11 = 0;
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x20) + 4);
      puVar8 = (uint *)(*(long *)(param_3 + 0x20) + 4);
      puVar9 = (uint *)(*(long *)(param_2 + 0x20) + 4);
      do {
        uVar4 = uVar4 + 2;
        uVar11 = uVar11 + puVar9[-1] + (ulong)puVar8[-1];
        puVar5[-1] = (int)uVar11;
        uVar12 = (ulong)*puVar9 + (uVar11 >> 0x20) + (ulong)*puVar8;
        uVar11 = uVar12 >> 0x20;
        *puVar5 = (int)uVar12;
        puVar5 = puVar5 + 2;
        puVar8 = puVar8 + 2;
        puVar9 = puVar9 + 2;
      } while (uVar4 < uVar3);
      if (uVar11 != 0) goto LAB_00cfd364;
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x20);
    lVar7 = *(long *)(param_2 + 0x20);
    lVar10 = *(long *)(param_3 + 0x20);
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      if (uVar3 == 0) {
        uVar11 = 0;
      }
      else {
        uVar12 = 0;
        uVar11 = 0;
        puVar8 = (uint *)(lVar7 + 4);
        puVar5 = (undefined4 *)(lVar6 + 4);
        puVar9 = (uint *)(lVar10 + 4);
        do {
          uVar12 = uVar12 + 2;
          uVar11 = uVar11 + puVar8[-1] + (ulong)puVar9[-1];
          puVar5[-1] = (int)uVar11;
          uVar1 = (ulong)*puVar8 + (uVar11 >> 0x20) + (ulong)*puVar9;
          uVar11 = uVar1 >> 0x20;
          *puVar5 = (int)uVar1;
          puVar8 = puVar8 + 2;
          puVar5 = puVar5 + 2;
          puVar9 = puVar9 + 2;
        } while (uVar12 < uVar3);
      }
      if (lVar6 != lVar10) {
        memcpy((void *)(lVar6 + uVar3 * 4),(void *)(lVar10 + uVar3 * 4),(uVar4 - uVar3) * 4);
        lVar6 = *(long *)(param_1 + 0x20);
        uVar3 = *(ulong *)(param_2 + 0x18);
        uVar4 = *(ulong *)(param_3 + 0x18);
      }
      puVar8 = (uint *)(lVar6 + uVar3 * 4);
      uVar2 = *puVar8;
      *puVar8 = uVar2 + (uint)uVar11;
      if (CARRY4(uVar2,(uint)uVar11)) {
        if (1 < uVar4 - uVar3) {
          uVar11 = 1;
          do {
            uVar2 = puVar8[uVar11];
            puVar8[uVar11] = uVar2 + 1;
            if (uVar2 != 0xffffffff) goto LAB_00cfd1bc;
            uVar11 = (ulong)((int)uVar11 + 1);
          } while (uVar11 < uVar4 - uVar3);
        }
        goto LAB_00cfd364;
      }
    }
    else {
      if (uVar4 == 0) {
        uVar11 = 0;
      }
      else {
        uVar12 = 0;
        uVar11 = 0;
        puVar8 = (uint *)(lVar10 + 4);
        puVar5 = (undefined4 *)(lVar6 + 4);
        puVar9 = (uint *)(lVar7 + 4);
        do {
          uVar12 = uVar12 + 2;
          uVar11 = uVar11 + puVar9[-1] + (ulong)puVar8[-1];
          puVar5[-1] = (int)uVar11;
          uVar1 = (ulong)*puVar9 + (uVar11 >> 0x20) + (ulong)*puVar8;
          uVar11 = uVar1 >> 0x20;
          *puVar5 = (int)uVar1;
          puVar8 = puVar8 + 2;
          puVar5 = puVar5 + 2;
          puVar9 = puVar9 + 2;
        } while (uVar12 < uVar4);
      }
      if (lVar6 != lVar7) {
        memcpy((void *)(lVar6 + uVar4 * 4),(void *)(lVar7 + uVar4 * 4),(uVar3 - uVar4) * 4);
        lVar6 = *(long *)(param_1 + 0x20);
        uVar4 = *(ulong *)(param_3 + 0x18);
        uVar3 = *(ulong *)(param_2 + 0x18);
      }
      puVar8 = (uint *)(lVar6 + uVar4 * 4);
      uVar2 = *puVar8;
      *puVar8 = uVar2 + (uint)uVar11;
      if (CARRY4(uVar2,(uint)uVar11)) {
        if (1 < uVar3 - uVar4) {
          uVar11 = 1;
          do {
            uVar2 = puVar8[uVar11];
            puVar8[uVar11] = uVar2 + 1;
            if (uVar2 != 0xffffffff) goto LAB_00cfd1bc;
            uVar11 = (ulong)((int)uVar11 + 1);
          } while (uVar11 < uVar3 - uVar4);
        }
LAB_00cfd364:
        SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
                  ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)
                   (param_1 + 8),*(long *)(param_1 + 0x18) << 1);
        *(undefined4 *)
         (*(long *)(param_1 + 0x20) + (*(ulong *)(param_1 + 0x18) & 0x7ffffffffffffffe) * 2) = 1;
        *(undefined4 *)(param_1 + 0x28) = 0;
        return;
      }
    }
  }
LAB_00cfd1bc:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


