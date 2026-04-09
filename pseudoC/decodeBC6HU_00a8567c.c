// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeBC6HU
// Entry Point: 00a8567c
// Size: 436 bytes
// Signature: undefined __cdecl decodeBC6HU(uchar * param_1, uint param_2, uint param_3, float * param_4)


/* BC6BC7Util::decodeBC6HU(unsigned char*, unsigned int, unsigned int, float*) */

void BC6BC7Util::decodeBC6HU(uchar *param_1,uint param_2,uint param_3,float *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_170 [64];
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  if (3 < param_3) {
    uVar4 = param_2 >> 2;
    uVar9 = 0;
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    iVar11 = 0xf;
    do {
      if (3 < param_2) {
        uVar10 = 0;
        iVar1 = iVar11;
        do {
          D3DX_BC6H::Decode((D3DX_BC6H *)param_1,false,(HDRColorA *)local_170);
          lVar8 = 0;
          iVar3 = iVar1;
          do {
            lVar2 = lVar8 + 0x40;
            fVar13 = *(float *)((long)local_170 + lVar8 + 4);
            param_4[iVar3 + -0xf] = *(float *)((long)local_170 + lVar8);
            fVar12 = *(float *)((long)local_170 + lVar8 + 8);
            fVar14 = *(float *)((long)local_170 + lVar8 + 0xc);
            param_4[iVar3 + -0xe] = fVar13;
            param_4[iVar3 + -0xd] = fVar12;
            fVar12 = *(float *)((long)local_170 + lVar8 + 0x10);
            fVar13 = *(float *)((long)local_170 + lVar8 + 0x14);
            param_4[iVar3 + -0xc] = fVar14;
            fVar14 = *(float *)((long)local_170 + lVar8 + 0x30);
            fVar15 = *(float *)((long)local_170 + lVar8 + 0x34);
            param_4[iVar3 + -0xb] = fVar12;
            param_4[iVar3 + -10] = fVar13;
            fVar12 = *(float *)((long)local_170 + lVar8 + 0x1c);
            param_4[iVar3 + -9] = *(float *)((long)local_170 + lVar8 + 0x18);
            param_4[iVar3 + -8] = fVar12;
            fVar12 = *(float *)((long)local_170 + lVar8 + 0x24);
            param_4[iVar3 + -7] = *(float *)((long)local_170 + lVar8 + 0x20);
            param_4[iVar3 + -6] = fVar12;
            fVar12 = *(float *)((long)local_170 + lVar8 + 0x28);
            fVar13 = *(float *)((long)local_170 + lVar8 + 0x2c);
            param_4[iVar3 + -3] = fVar14;
            param_4[iVar3 + -5] = fVar12;
            iVar5 = iVar3 + -1;
            param_4[iVar3 + -4] = fVar13;
            fVar12 = *(float *)((long)local_170 + lVar8 + 0x38);
            iVar6 = iVar3 + -2;
            param_4[iVar3] = *(float *)((long)local_170 + lVar8 + 0x3c);
            iVar3 = iVar3 + param_2 * 4;
            param_4[iVar6] = fVar15;
            param_4[iVar5] = fVar12;
            lVar8 = lVar2;
          } while (lVar2 != 0x100);
          param_1 = (uchar *)((D3DX_BC6H *)param_1 + 0x10);
          uVar10 = uVar10 + 1;
          iVar1 = iVar1 + 0x10;
        } while (uVar10 != uVar4);
      }
      uVar9 = uVar9 + 1;
      iVar11 = iVar11 + param_2 * 0x10;
    } while (uVar9 != param_3 >> 2);
  }
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


