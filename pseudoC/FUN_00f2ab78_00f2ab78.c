// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f2ab78
// Entry Point: 00f2ab78
// Size: 448 bytes
// Signature: undefined FUN_00f2ab78(void)


undefined8 FUN_00f2ab78(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  char *local_68;
  
  uVar15 = (ulong)*(ushort *)(param_1 + 3);
  if (uVar15 != 0) {
    uVar7 = param_3[2];
    uVar16 = *param_1;
    if (uVar16 <= uVar7) {
      lVar10 = 0;
      uVar6 = param_1[2];
      do {
        if (*(int *)(uVar6 + lVar10) == 1) {
          uVar9 = *(long *)(uVar6 + lVar10 + 0x10) + uVar16;
          if ((uVar9 <= uVar7) &&
             (uVar12 = *(ulong *)(uVar6 + lVar10 + 0x28), uVar7 < uVar12 + uVar9)) {
            puVar8 = (ulong *)param_3[1];
            uVar7 = uVar15 + 0xffffffff;
            *puVar8 = uVar9;
            puVar8[1] = uVar12;
            uVar9 = uVar7 & 0xffffffff;
            iVar2 = *(int *)(uVar6 + uVar9 * 0x38);
            while( true ) {
              if (iVar2 == 0x6474e550) {
                lVar10 = uVar6 + uVar9 * 0x38;
                lVar11 = param_3[1];
                uVar14 = *(undefined8 *)(lVar10 + 0x28);
                pcVar1 = (char *)(*(long *)(lVar10 + 0x10) + uVar16);
                *(char **)(lVar11 + 0x20) = pcVar1;
                *(undefined8 *)(lVar11 + 0x28) = uVar14;
                if (*pcVar1 == '\x01') {
                  uVar13 = *param_3;
                  local_68 = pcVar1 + 4;
                  cVar3 = pcVar1[2];
                  uVar5 = FUN_00f299dc(uVar13,&local_68,uVar14,pcVar1[1],pcVar1);
                  if (cVar3 != -1) {
                    FUN_00f299dc(uVar13,&local_68,uVar14,cVar3,pcVar1);
                  }
                  lVar10 = param_3[1];
                  *(undefined8 *)(lVar10 + 0x10) = uVar5;
                  *(undefined8 *)(lVar10 + 0x18) = 0xffffffffffffffff;
                  return 1;
                }
                fwrite("libunwind: Unsupported .eh_frame_hdr version\n",0x2d,1,(FILE *)0x2249f40);
              }
              uVar4 = (int)uVar15 - 1;
              uVar15 = (ulong)uVar4;
              if ((uVar4 & 0xffff) == 0) break;
              uVar6 = param_1[2];
              uVar7 = uVar7 - 1;
              uVar9 = uVar7 & 0xffffffff;
              iVar2 = *(int *)(uVar6 + uVar9 * 0x38);
            }
            return 0;
          }
        }
        lVar10 = lVar10 + 0x38;
      } while (uVar15 * 0x38 - lVar10 != 0);
    }
  }
  return 0;
}


