// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d9bd4c
// Entry Point: 00d9bd4c
// Size: 1140 bytes
// Signature: undefined FUN_00d9bd4c(void)


void FUN_00d9bd4c(ushort *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  
  uVar9 = (ulong)param_2;
  uVar1 = *(uint *)(param_1 + 0x2402);
  if (uVar1 != 0) {
    uVar10 = (ulong)(param_2 << 3);
    uVar5 = param_1[uVar10 + 6];
    uVar6 = param_1[uVar10 + 3];
    iVar2 = *(int *)(param_3 + (ulong)(*param_1 >> 4) * 4);
    uVar8 = param_1[uVar10 + 4] >> 4;
    uVar13 = (ulong)(uVar6 >> 4);
    iVar3 = *(int *)(param_3 + (ulong)(*param_1 >> 4 ^ 0x7f) * 4);
    iVar11 = *(int *)(param_3 + (ulong)(param_1[1] >> 4) * 4);
    iVar4 = *(int *)(param_3 + (ulong)(param_1[1] >> 4 ^ 0x7f) * 4);
    *(int *)(param_1 + uVar9 * 0x220 + 0x202) =
         *(int *)(param_3 + ((ulong)(uVar5 >> 2) & 0x3ffc)) + iVar2 +
         *(int *)(param_3 + (ulong)uVar8 * 4) + *(int *)(param_3 + uVar13 * 4);
    if ((uVar1 != 1) &&
       (*(int *)(param_1 + uVar9 * 0x220 + 0x204) =
             *(int *)(param_3 + (ulong)(uVar5 >> 4 ^ 0x7f) * 4) + iVar2 +
             *(int *)(param_3 + (ulong)uVar8 * 4) + *(int *)(param_3 + uVar13 * 4), uVar1 != 2)) {
      uVar5 = param_1[uVar10 + 7];
      *(int *)(param_1 + uVar9 * 0x220 + 0x206) =
           *(int *)(param_3 + ((ulong)(uVar5 >> 2) & 0x3ffc)) + iVar2 +
           *(int *)(param_3 + (ulong)(uVar8 ^ 0x7f) * 4) + *(int *)(param_3 + uVar13 * 4);
      if ((uVar1 != 3) &&
         (*(int *)(param_1 + uVar9 * 0x220 + 0x208) =
               *(int *)(param_3 + (ulong)(uVar5 >> 4 ^ 0x7f) * 4) + iVar2 +
               *(int *)(param_3 + (ulong)(uVar8 ^ 0x7f) * 4) + *(int *)(param_3 + uVar13 * 4),
         uVar1 != 4)) {
        uVar5 = param_1[uVar10 + 8];
        uVar13 = (ulong)(uVar6 >> 4 ^ 0x7f);
        uVar6 = param_1[uVar10 + 5] >> 4;
        *(int *)(param_1 + uVar9 * 0x220 + 0x20a) =
             *(int *)(param_3 + ((ulong)(uVar5 >> 2) & 0x3ffc)) + iVar2 +
             *(int *)(param_3 + (ulong)uVar6 * 4) + *(int *)(param_3 + uVar13 * 4);
        if ((uVar1 != 5) &&
           (*(int *)(param_1 + uVar9 * 0x220 + 0x20c) =
                 *(int *)(param_3 + (ulong)(uVar5 >> 4 ^ 0x7f) * 4) + iVar2 +
                 *(int *)(param_3 + (ulong)uVar6 * 4) + *(int *)(param_3 + uVar13 * 4), uVar1 != 6))
        {
          uVar5 = param_1[uVar10 + 9];
          *(int *)(param_1 + uVar9 * 0x220 + 0x20e) =
               *(int *)(param_3 + (ulong)(uVar5 >> 4) * 4) + iVar2 +
               *(int *)(param_3 + (ulong)(uVar6 ^ 0x7f) * 4) + *(int *)(param_3 + uVar13 * 4);
          if ((uVar1 != 7) &&
             (*(int *)(param_1 + uVar9 * 0x220 + 0x210) =
                   *(int *)(param_3 + ((ulong)(uVar5 >> 4) ^ 0x7f) * 4) + iVar2 +
                   *(int *)(param_3 + (ulong)(uVar6 ^ 0x7f) * 4) + *(int *)(param_3 + uVar13 * 4),
             8 < uVar1)) {
            uVar5 = param_1[uVar10 + 0x86];
            uVar6 = param_1[uVar10 + 0x83];
            uVar8 = param_1[uVar10 + 0x84] >> 4;
            uVar13 = (ulong)(uVar6 >> 4);
            iVar11 = iVar11 + iVar3;
            *(int *)(param_1 + uVar9 * 0x220 + 0x212) =
                 *(int *)(param_3 + ((ulong)(uVar5 >> 2) & 0x3ffc)) + iVar11 +
                 *(int *)(param_3 + (ulong)uVar8 * 4) + *(int *)(param_3 + uVar13 * 4);
            if ((uVar1 != 9) &&
               (*(int *)(param_1 + uVar9 * 0x220 + 0x214) =
                     *(int *)(param_3 + (ulong)(uVar5 >> 4 ^ 0x7f) * 4) + iVar11 +
                     *(int *)(param_3 + (ulong)uVar8 * 4) + *(int *)(param_3 + uVar13 * 4),
               uVar1 != 10)) {
              uVar5 = param_1[uVar10 + 0x87];
              *(int *)(param_1 + uVar9 * 0x220 + 0x216) =
                   *(int *)(param_3 + ((ulong)(uVar5 >> 2) & 0x3ffc)) + iVar11 +
                   *(int *)(param_3 + (ulong)(uVar8 ^ 0x7f) * 4) + *(int *)(param_3 + uVar13 * 4);
              if ((uVar1 != 0xb) &&
                 (*(int *)(param_1 + uVar9 * 0x220 + 0x218) =
                       *(int *)(param_3 + (ulong)(uVar5 >> 4 ^ 0x7f) * 4) + iVar11 +
                       *(int *)(param_3 + (ulong)(uVar8 ^ 0x7f) * 4) +
                       *(int *)(param_3 + uVar13 * 4), uVar1 != 0xc)) {
                uVar5 = param_1[uVar10 + 0x88];
                uVar8 = param_1[uVar10 + 0x85] >> 4;
                uVar13 = (ulong)(uVar6 >> 4 ^ 0x7f);
                *(int *)(param_1 + uVar9 * 0x220 + 0x21a) =
                     *(int *)(param_3 + ((ulong)(uVar5 >> 2) & 0x3ffc)) + iVar11 +
                     *(int *)(param_3 + (ulong)uVar8 * 4) + *(int *)(param_3 + uVar13 * 4);
                if ((uVar1 != 0xd) &&
                   (*(int *)(param_1 + uVar9 * 0x220 + 0x21c) =
                         *(int *)(param_3 + (ulong)(uVar5 >> 4 ^ 0x7f) * 4) + iVar11 +
                         *(int *)(param_3 + (ulong)uVar8 * 4) + *(int *)(param_3 + uVar13 * 4),
                   uVar1 != 0xe)) {
                  uVar5 = param_1[uVar10 + 0x89];
                  *(int *)(param_1 + uVar9 * 0x220 + 0x21e) =
                       *(int *)(param_3 + (ulong)(uVar5 >> 4) * 4) + iVar11 +
                       *(int *)(param_3 + (ulong)(uVar8 ^ 0x7f) * 4) +
                       *(int *)(param_3 + uVar13 * 4);
                  if ((uVar1 != 0xf) &&
                     (*(int *)(param_1 + uVar9 * 0x220 + 0x220) =
                           *(int *)(param_3 + ((ulong)(uVar5 >> 4) ^ 0x7f) * 4) + iVar11 +
                           *(int *)(param_3 + (ulong)(uVar8 ^ 0x7f) * 4) +
                           *(int *)(param_3 + uVar13 * 4), 0x10 < uVar1)) {
                    uVar10 = 0x10;
                    do {
                      iVar11 = 0;
                      uVar12 = (int)uVar10 - 0x10U | 0x100;
                      do {
                        uVar7 = uVar12 >> 1;
                        iVar11 = *(int *)(param_3 +
                                         (ulong)((-(uVar12 & 1) & 0x7f0 ^
                                                 (uint)*(ushort *)
                                                        ((long)param_1 +
                                                        (ulong)(uVar12 & 0xfffffffe) + 0x204)) >> 4)
                                         * 4) + iVar11;
                        uVar12 = uVar7;
                      } while (uVar7 != 1);
                      uVar13 = uVar10 + 1;
                      *(int *)(param_1 + uVar9 * 0x220 + uVar10 * 2 + 0x202) =
                           iVar4 + iVar3 + iVar11;
                      uVar10 = uVar13;
                    } while (uVar13 != uVar1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(uint *)(param_1 + uVar9 * 2 + 0x2404) = *(uint *)(param_1 + 0x2402);
  return;
}


