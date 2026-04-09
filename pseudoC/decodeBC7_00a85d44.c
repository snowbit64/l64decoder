// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeBC7
// Entry Point: 00a85d44
// Size: 864 bytes
// Signature: undefined __cdecl decodeBC7(uchar * param_1, uint param_2, uint param_3, ushort * param_4)


/* BC6BC7Util::decodeBC7(unsigned char*, unsigned int, unsigned int, unsigned short*) */

void BC6BC7Util::decodeBC7(uchar *param_1,uint param_2,uint param_3,ushort *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  ushort uVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  HDRColorA local_170 [8];
  uint local_168 [62];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (3 < param_3) {
    iVar14 = 0;
    uVar16 = 0;
    uVar2 = param_2 >> 2;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    do {
      if (3 < param_2) {
        uVar17 = 0;
        iVar15 = iVar14;
        do {
          D3DX_BC7::Decode((D3DX_BC7 *)param_1,local_170,false);
          lVar7 = 0;
          puVar8 = local_168;
          iVar9 = iVar15;
          do {
            lVar10 = 0;
            puVar11 = puVar8;
            do {
              uVar1 = puVar11[-2];
              uVar4 = uVar1 >> 0x17 & 0xff;
              uVar13 = (ushort)(uVar1 >> 0x10) & 0x8000;
              iVar3 = uVar4 - 0x70;
              uVar1 = uVar1 & 0x7fffff;
              if (uVar4 < 0x70 || iVar3 == 0) {
                if (uVar4 < 0x66) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = uVar13 | (ushort)(((uVar1 | 0x800000) >> (ulong)(0x71 - uVar4 & 0x1f)) >>
                                            0xd);
                }
              }
              else {
                if (iVar3 == 0x8f) {
                  if (uVar1 != 0) {
                    uVar13 = uVar13 | (ushort)(uVar1 >> 0xd) | (ushort)(uVar1 < 0x2000);
                  }
                }
                else if (uVar4 < 0x8f) {
                  uVar13 = uVar13 | (ushort)(uVar1 >> 0xd) | (short)iVar3 * 0x400;
                  goto LAB_00a85f1c;
                }
                uVar13 = uVar13 | 0x7c00;
              }
LAB_00a85f1c:
              uVar1 = puVar11[-1];
              iVar6 = (int)lVar10;
              uVar4 = uVar1 >> 0x17 & 0xff;
              uVar12 = (ushort)(uVar1 >> 0x10) & 0x8000;
              iVar3 = uVar4 - 0x70;
              uVar1 = uVar1 & 0x7fffff;
              param_4[iVar9 + iVar6] = uVar13;
              if (uVar4 < 0x70 || iVar3 == 0) {
                if (uVar4 < 0x66) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = uVar12 | (ushort)(((uVar1 | 0x800000) >> (ulong)(0x71 - uVar4 & 0x1f)) >>
                                            0xd);
                }
              }
              else if (iVar3 == 0x8f) {
                if (uVar1 == 0) {
LAB_00a85f90:
                  uVar12 = uVar12 | 0x7c00;
                }
                else {
                  uVar12 = uVar12 | (ushort)(uVar1 >> 0xd) | (ushort)(uVar1 < 0x2000) | 0x7c00;
                }
              }
              else {
                if (0x8e < uVar4) goto LAB_00a85f90;
                uVar12 = uVar12 | (ushort)(uVar1 >> 0xd) | (short)iVar3 * 0x400;
              }
              uVar1 = *puVar11;
              uVar4 = uVar1 >> 0x17 & 0xff;
              uVar13 = (ushort)(uVar1 >> 0x10) & 0x8000;
              iVar3 = uVar4 - 0x70;
              uVar1 = uVar1 & 0x7fffff;
              param_4[iVar9 + iVar6 + 1] = uVar12;
              if (uVar4 < 0x70 || iVar3 == 0) {
                if (uVar4 < 0x66) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = uVar13 | (ushort)(((uVar1 | 0x800000) >> (ulong)(0x71 - uVar4 & 0x1f)) >>
                                            0xd);
                }
              }
              else if (iVar3 == 0x8f) {
                if (uVar1 == 0) {
LAB_00a86018:
                  uVar13 = uVar13 | 0x7c00;
                }
                else {
                  uVar13 = uVar13 | (ushort)(uVar1 >> 0xd) | (ushort)(uVar1 < 0x2000) | 0x7c00;
                }
              }
              else {
                if (0x8e < uVar4) goto LAB_00a86018;
                uVar13 = uVar13 | (ushort)(uVar1 >> 0xd) | (short)iVar3 * 0x400;
              }
              uVar1 = puVar11[1];
              uVar4 = uVar1 >> 0x17 & 0xff;
              uVar12 = (ushort)(uVar1 >> 0x10) & 0x8000;
              iVar3 = uVar4 - 0x70;
              uVar1 = uVar1 & 0x7fffff;
              param_4[iVar9 + iVar6 + 2] = uVar13;
              if (uVar4 < 0x70 || iVar3 == 0) {
                if (uVar4 < 0x66) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = uVar12 | (ushort)(((uVar1 | 0x800000) >> (ulong)(0x71 - uVar4 & 0x1f)) >>
                                            0xd);
                }
              }
              else if (iVar3 == 0x8f) {
                if (uVar1 == 0) {
LAB_00a8608c:
                  uVar12 = uVar12 | 0x7c00;
                }
                else {
                  uVar12 = uVar12 | (ushort)(uVar1 >> 0xd) | (ushort)(uVar1 < 0x2000) | 0x7c00;
                }
              }
              else {
                if (0x8e < uVar4) goto LAB_00a8608c;
                uVar12 = uVar12 | (ushort)(uVar1 >> 0xd) | (short)iVar3 * 0x400;
              }
              lVar10 = lVar10 + 4;
              puVar11 = puVar11 + 4;
              param_4[iVar9 + iVar6 + 3] = uVar12;
            } while (lVar10 != 0x10);
            lVar7 = lVar7 + 1;
            iVar9 = iVar9 + param_2 * 4;
            puVar8 = puVar8 + 0x10;
          } while (lVar7 != 4);
          param_1 = (uchar *)((D3DX_BC7 *)param_1 + 0x10);
          uVar17 = uVar17 + 1;
          iVar15 = iVar15 + 0x10;
        } while (uVar17 != uVar2);
      }
      uVar16 = uVar16 + 1;
      iVar14 = iVar14 + param_2 * 0x10;
    } while (uVar16 != param_3 >> 2);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


