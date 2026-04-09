// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_NLSF_unpack
// Entry Point: 00e6583c
// Size: 160 bytes
// Signature: undefined silk_NLSF_unpack(void)


void silk_NLSF_unpack(long param_1,long param_2,long param_3,int param_4)

{
  ushort *puVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  
  if (0 < (short)*(ushort *)(param_3 + 2)) {
    lVar6 = 0;
    param_4 = (uint)*(ushort *)(param_3 + 2) * param_4;
    if (param_4 < 0) {
      param_4 = param_4 + 1;
    }
    pbVar7 = (byte *)(*(long *)(param_3 + 0x28) + (long)(param_4 >> 1));
    do {
      bVar3 = *pbVar7;
      puVar1 = (ushort *)(param_1 + lVar6 * 2);
      lVar8 = *(long *)(param_3 + 0x20);
      uVar4 = bVar3 >> 1 & 7;
      *puVar1 = (ushort)uVar4 | (ushort)(uVar4 << 3);
      puVar2 = (undefined *)(param_2 + lVar6);
      *puVar2 = *(undefined *)
                 (lVar8 + ((long)*(short *)(param_3 + 2) + -1) * ((ulong)bVar3 & 1) + lVar6);
      puVar1[1] = (ushort)(bVar3 >> 5) | (ushort)(bVar3 >> 5) << 3;
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 2;
      puVar2[1] = *(undefined *)
                   (*(long *)(param_3 + 0x20) +
                   (long)(int)(iVar5 + (*(short *)(param_3 + 2) + -1) * (bVar3 >> 4 & 1) + 1));
      pbVar7 = pbVar7 + 1;
    } while (lVar6 < *(short *)(param_3 + 2));
  }
  return;
}


