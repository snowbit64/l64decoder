// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dc6eb0
// Entry Point: 00dc6eb0
// Size: 492 bytes
// Signature: undefined FUN_00dc6eb0(void)


undefined8 FUN_00dc6eb0(long *param_1)

{
  ushort *puVar1;
  uint uVar2;
  long lVar3;
  ushort *puVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  uint uVar7;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ushort uVar12;
  uint uVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  ushort *puVar17;
  uint uVar8;
  
  puVar5 = (undefined8 *)*param_1;
  uVar7 = *(uint *)((long)puVar5 + 0x14);
  uVar14 = *(undefined8 *)*puVar5;
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(uVar14,"png_write_image: internal call error");
  }
  uVar11 = (ulong)uVar7 & 2 | 1;
  iVar15 = *(int *)(puVar5 + 2);
  if ((uVar7 & 0x20) != 0) {
    uVar11 = 0xffffffffffffffff;
  }
  if (iVar15 != 0) {
    iVar16 = (int)((ulong)uVar7 & 2);
    lVar3 = param_1[7];
    uVar2 = *(int *)((long)puVar5 + 0xc) * (iVar16 + 2);
    if (uVar2 == 0) {
      while( true ) {
        png_write_row(uVar14,lVar3);
        iVar15 = iVar15 + -1;
        if (iVar15 == 0) break;
        lVar3 = param_1[7];
      }
    }
    else {
      uVar9 = (ulong)((uVar7 & 0x20) >> 5);
      puVar1 = (ushort *)(lVar3 + uVar9 * 2);
      puVar6 = (ushort *)(param_1[5] + uVar9 * 2);
      puVar4 = puVar1;
      puVar17 = puVar6;
      do {
        do {
          uVar12 = puVar6[uVar11];
          puVar4[uVar11] = uVar12;
          uVar7 = (uint)uVar12;
          uVar8 = (uint)uVar12;
          if (uVar12 - 1 < 0xfffe) {
            uVar10 = 0;
            if (uVar8 != 0) {
              uVar10 = (uVar12 >> 1 | 0x7fff8000) / uVar8;
            }
            uVar12 = *puVar6;
            if (uVar7 == 0xffff) goto LAB_00dc6fd8;
LAB_00dc6fb0:
            uVar13 = (uint)uVar12;
            if (uVar13 < uVar7) {
              if (uVar13 != 0) {
                uVar12 = (ushort)(uVar10 * uVar13 + 0x4000 >> 0xf);
              }
            }
            else {
              uVar12 = 0xffff;
            }
            *puVar4 = uVar12;
            if (iVar16 != 0) {
              uVar12 = puVar6[1];
              if (uVar12 < uVar8) {
                if (uVar12 != 0) {
                  uVar12 = (ushort)(uVar10 * uVar12 + 0x4000 >> 0xf);
                }
                puVar4[1] = uVar12;
                uVar12 = puVar6[2];
                if (uVar12 < uVar7) goto LAB_00dc703c;
LAB_00dc6f6c:
                uVar12 = 0xffff;
              }
              else {
                puVar4[1] = 0xffff;
                uVar12 = puVar6[2];
                if (uVar8 <= uVar12) goto LAB_00dc6f6c;
LAB_00dc703c:
                if (uVar12 == 0) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = (ushort)(uVar10 * uVar12 + 0x4000 >> 0xf);
                }
              }
              goto LAB_00dc6f70;
            }
          }
          else {
            uVar10 = 0;
            uVar12 = *puVar6;
            if (uVar7 != 0xffff) goto LAB_00dc6fb0;
LAB_00dc6fd8:
            *puVar4 = uVar12;
            if (iVar16 != 0) {
              puVar4[1] = puVar6[1];
              uVar12 = puVar6[2];
LAB_00dc6f70:
              puVar6 = puVar6 + 2;
              puVar4 = puVar4 + 2;
              *puVar4 = uVar12;
            }
          }
          puVar6 = puVar6 + 2;
          puVar4 = puVar4 + 2;
        } while (puVar4 < puVar1 + uVar2);
        png_write_row(uVar14,param_1[7]);
        iVar15 = iVar15 + -1;
        puVar6 = puVar17 + ((ulong)param_1[6] >> 1 & 0x7fff);
        puVar4 = puVar1;
        puVar17 = puVar6;
      } while (iVar15 != 0);
    }
  }
  return 1;
}


