// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_NLSF_decode
// Entry Point: 00e68154
// Size: 344 bytes
// Signature: undefined silk_NLSF_decode(void)


void silk_NLSF_decode(long param_1,char *param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  long lVar6;
  ushort uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  short local_98 [16];
  undefined auStack_78 [32];
  byte abStack_58 [16];
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  silk_NLSF_unpack(auStack_78,abStack_58,param_3,(long)*param_2);
  uVar7 = *(ushort *)(param_3 + 2);
  if (0 < (long)(short)uVar7) {
    iVar11 = 0;
    sVar5 = *(short *)(param_3 + 4);
    uVar9 = (ulong)uVar7 + 1;
    do {
      uVar12 = (ulong)((int)uVar9 - 2);
      uVar9 = uVar9 - 1;
      iVar14 = (int)param_2[uVar12 + 1];
      uVar2 = iVar14 * 0x400 - 0x66;
      if (iVar14 < 1) {
        uVar2 = ((int)param_2[uVar12 + 1] << 10 | 0x66U) & iVar14 >> 0x1f;
      }
      iVar11 = (int)((ulong)uVar2 * (long)sVar5 >> 0x10) +
               ((int)((int)(short)iVar11 * (uint)abStack_58[uVar12]) >> 8);
      local_98[uVar12] = (short)iVar11;
    } while (1 < uVar9);
    if (0 < (short)uVar7) {
      lVar8 = 0;
      lVar3 = *(long *)(param_3 + 8);
      lVar4 = *(long *)(param_3 + 0x10);
      lVar10 = (long)*param_2 * (long)(short)uVar7;
      do {
        lVar13 = lVar8 * 2;
        iVar11 = 0;
        iVar14 = (int)*(short *)(lVar4 + lVar10 * 2 + lVar13);
        if (iVar14 != 0) {
          iVar11 = ((int)local_98[lVar8] << 0xe) / iVar14;
        }
        pbVar1 = (byte *)(lVar3 + lVar10 + lVar8);
        lVar8 = lVar8 + 1;
        uVar2 = iVar11 + (uint)*pbVar1 * 0x80;
        uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
        if (0x7ffe < uVar2) {
          uVar2 = 0x7fff;
        }
        *(short *)(param_1 + lVar13) = (short)uVar2;
        uVar7 = *(ushort *)(param_3 + 2);
      } while (lVar8 < (short)uVar7);
    }
  }
  silk_NLSF_stabilize(param_1,*(undefined8 *)(param_3 + 0x40),(int)(short)uVar7);
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


