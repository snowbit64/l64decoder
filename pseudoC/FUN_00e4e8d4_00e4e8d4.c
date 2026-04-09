// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4e8d4
// Entry Point: 00e4e8d4
// Size: 596 bytes
// Signature: undefined FUN_00e4e8d4(void)


undefined8
FUN_00e4e8d4(long param_1,uint *param_2,long param_3,int param_4,int *param_5,uint *param_6,
            int param_7,int param_8)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  float *pfVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  float fVar15;
  
  if (*(char *)((long)param_2 + 0x19) == '\0') {
LAB_00e4eaec:
    uVar7 = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0x15;
  }
  else {
    iVar13 = *param_5;
    uVar14 = (ulong)*param_6;
    if (0 < param_8) {
      uVar12 = (ulong)*param_2;
      do {
        if (*(int *)(param_1 + 0x6f8) < 10) {
          if (*(int *)(param_1 + 0x6f8) == 0) {
            *(undefined4 *)(param_1 + 0x6f4) = 0;
          }
          do {
            if (((*(int *)(param_1 + 0x6ec) != 0) && (*(char *)(param_1 + 0x6e4) == '\0')) ||
               (iVar5 = FUN_00e4c7e4(param_1), iVar5 == -1)) break;
            uVar6 = *(uint *)(param_1 + 0x6f8);
            *(int *)(param_1 + 0x6f4) = *(int *)(param_1 + 0x6f4) + (iVar5 << (ulong)(uVar6 & 0x1f))
            ;
            *(uint *)(param_1 + 0x6f8) = uVar6 + 8;
          } while ((int)uVar6 < 0x11);
        }
        uVar2 = *(ushort *)((long)param_2 + ((ulong)*(uint *)(param_1 + 0x6f4) & 0x3ff) * 2 + 0x30);
        if ((short)uVar2 < 0) {
          uVar6 = FUN_00e4cf68(param_1,param_2);
          uVar3 = uVar6;
        }
        else {
          uVar6 = (uint)uVar2;
          uVar3 = *(int *)(param_1 + 0x6f8) - (uint)*(byte *)(*(long *)(param_2 + 2) + (ulong)uVar2)
          ;
          uVar1 = 0;
          if (-1 < (int)uVar3) {
            uVar1 = uVar3;
          }
          *(uint *)(param_1 + 0x6f4) =
               *(uint *)(param_1 + 0x6f4) >>
               (ulong)(*(byte *)(*(long *)(param_2 + 2) + (ulong)uVar2) & 0x1f);
          *(uint *)(param_1 + 0x6f8) = uVar1;
        }
        if ((int)uVar3 < 0) {
          if ((*(char *)(param_1 + 0x6e4) == '\0') && (*(int *)(param_1 + 0x6ec) != 0)) {
            return 0;
          }
          goto LAB_00e4eaec;
        }
        iVar5 = (int)uVar14 * param_4;
        uVar6 = *param_2 * uVar6;
        uVar3 = (param_7 * param_4 - iVar5) + iVar13;
        if ((int)((uint)uVar12 + iVar5 + iVar13) <= param_7 * param_4) {
          uVar3 = (uint)uVar12;
        }
        uVar12 = (ulong)uVar3;
        if (*(char *)((long)param_2 + 0x1a) == '\0') {
          if (0 < (int)uVar3) {
            uVar9 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
            uVar11 = uVar12;
            iVar5 = iVar13;
            do {
              lVar10 = *(long *)(param_3 + (long)iVar5 * 8);
              uVar6 = (uint)uVar14;
              if (lVar10 != 0) {
                uVar14 = -(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2;
                *(float *)(lVar10 + uVar14) =
                     *(float *)(lVar10 + uVar14) + *(float *)(*(long *)(param_2 + 8) + uVar9) + 0.0;
              }
              uVar9 = uVar9 + 4;
              bVar4 = iVar5 + 1 == param_4;
              if (bVar4) {
                uVar6 = uVar6 + 1;
              }
              uVar14 = (ulong)uVar6;
              iVar13 = 0;
              if (!bVar4) {
                iVar13 = iVar5 + 1;
              }
              uVar11 = uVar11 - 1;
              iVar5 = iVar13;
            } while (uVar11 != 0);
          }
        }
        else if (0 < (int)uVar3) {
          fVar15 = 0.0;
          pfVar8 = (float *)(*(long *)(param_2 + 8) + (long)(int)uVar6 * 4);
          uVar9 = uVar12;
          iVar5 = iVar13;
          do {
            lVar10 = *(long *)(param_3 + (long)iVar5 * 8);
            fVar15 = fVar15 + *pfVar8;
            if (lVar10 != 0) {
              uVar11 = -(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2;
              *(float *)(lVar10 + uVar11) = fVar15 + *(float *)(lVar10 + uVar11);
            }
            pfVar8 = pfVar8 + 1;
            bVar4 = iVar5 + 1 == param_4;
            uVar6 = (uint)uVar14;
            if (bVar4) {
              uVar6 = uVar6 + 1;
            }
            uVar14 = (ulong)uVar6;
            iVar13 = 0;
            if (!bVar4) {
              iVar13 = iVar5 + 1;
            }
            uVar9 = uVar9 - 1;
            iVar5 = iVar13;
          } while (uVar9 != 0);
        }
        param_8 = param_8 - uVar3;
      } while (0 < param_8);
    }
    uVar7 = 1;
    *param_5 = iVar13;
    *param_6 = (uint)uVar14;
  }
  return uVar7;
}


