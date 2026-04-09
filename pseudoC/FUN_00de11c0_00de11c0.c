// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00de11c0
// Entry Point: 00de11c0
// Size: 724 bytes
// Signature: undefined FUN_00de11c0(void)


bool FUN_00de11c0(long param_1,uint param_2,uint param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  void *__s;
  void *pvVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  short *psVar10;
  ushort *puVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  
  __s = (void *)rcAlloc((param_4 * param_2 + param_3) * 2,1);
  if (__s == (void *)0x0) {
    return false;
  }
  pvVar6 = (void *)rcAlloc(param_4 * param_2 * 0xc,1);
  if (pvVar6 != (void *)0x0) {
    if (0 < (int)param_3) {
      memset(__s,0xff,(ulong)param_3 << 1);
    }
    if ((0 < (int)param_2) && (0 < (int)param_4)) {
      iVar14 = 0;
      uVar15 = 0;
      uVar12 = 0;
      iVar5 = param_4 * 2;
      uVar13 = (ulong)param_4;
      do {
        lVar1 = param_1 + (long)iVar14 * 2;
        uVar7 = 0;
        do {
          uVar4 = *(ushort *)(lVar1 + uVar7 * 2);
          if (uVar4 == 0xffff) break;
          uVar2 = uVar7 + 1;
          if ((uVar13 <= uVar2) || (uVar3 = *(ushort *)(lVar1 + uVar7 * 2 + 2), uVar3 == 0xffff)) {
            uVar3 = *(ushort *)(param_1 + (long)(iVar5 * (int)uVar15) * 2);
          }
          if (uVar4 < uVar3) {
            puVar11 = (ushort *)((long)pvVar6 + (long)(int)uVar12 * 0xc);
            *puVar11 = uVar4;
            puVar11[1] = uVar3;
            puVar11[4] = (ushort)uVar15;
            puVar11[2] = (ushort)uVar7;
            puVar11[5] = (ushort)uVar15;
            puVar11[3] = 0;
            *(undefined2 *)((long)__s + (long)(int)uVar12 * 2 + (long)(int)param_3 * 2) =
                 *(undefined2 *)((long)__s + (ulong)uVar4 * 2);
            *(short *)((long)__s + (ulong)uVar4 * 2) = (short)uVar12;
            uVar12 = uVar12 + 1;
          }
          uVar7 = uVar2;
        } while (uVar13 != uVar2);
        uVar15 = uVar15 + 1;
        iVar14 = iVar14 + iVar5;
      } while (uVar15 != param_2);
      if ((0 < (int)param_2) && (0 < (int)param_4)) {
        uVar15 = 0;
        do {
          puVar11 = (ushort *)(param_1 + (long)(iVar5 * (int)uVar15) * 2);
          uVar7 = 0;
          do {
            uVar4 = puVar11[uVar7];
            if (uVar4 == 0xffff) break;
            uVar2 = uVar7 + 1;
            if ((uVar13 <= uVar2) || (uVar3 = puVar11[uVar2], uVar3 == 0xffff)) {
              uVar3 = *puVar11;
            }
            uVar8 = (uint)uVar3;
            if (uVar8 <= uVar4 && uVar4 != uVar8) {
              uVar3 = *(ushort *)((long)__s + (ulong)uVar8 * 2);
              while (uVar9 = (ulong)uVar3, uVar3 != 0xffff) {
                if (((uint)*(ushort *)((long)pvVar6 + uVar9 * 0xc + 2) == (uint)uVar4) &&
                   (psVar10 = (short *)((long)pvVar6 + uVar9 * 0xc + 10),
                   *(short *)((long)pvVar6 + uVar9 * 0xc + 8) == *psVar10)) {
                  *psVar10 = (short)uVar15;
                  *(short *)((long)pvVar6 + uVar9 * 0xc + 6) = (short)uVar7;
                  break;
                }
                uVar3 = *(ushort *)((long)__s + uVar9 * 2 + (long)(int)param_3 * 2);
              }
            }
            uVar7 = uVar2;
          } while (uVar2 != uVar13);
          uVar15 = uVar15 + 1;
        } while (uVar15 != param_2);
      }
      if (0 < (int)uVar12) {
        uVar15 = (ulong)uVar12;
        puVar11 = (ushort *)((long)pvVar6 + 10);
        do {
          uVar4 = *puVar11;
          if ((uint)puVar11[-1] != (uint)uVar4) {
            *(ushort *)
             (param_1 + (long)(int)(iVar5 * (uint)puVar11[-1]) * 2 +
             (long)(int)(puVar11[-3] + param_4) * 2) = uVar4;
            *(ushort *)
             (param_1 + (long)(int)(iVar5 * (uint)uVar4) * 2 +
             (long)(int)(puVar11[-2] + param_4) * 2) = puVar11[-1];
          }
          puVar11 = puVar11 + 6;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
    }
    rcFree(__s);
    __s = pvVar6;
  }
  rcFree(__s);
  return pvVar6 != (void *)0x0;
}


