// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d90888
// Entry Point: 00d90888
// Size: 128 bytes
// Signature: undefined FUN_00d90888(void)


void FUN_00d90888(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  
  if ((0 < (int)param_4) && (iVar4 = *(int *)(param_1 + 0x74), iVar4 != 0)) {
    uVar8 = 0;
    lVar9 = *(long *)(*(long *)(param_1 + 0x270) + 0x30);
    do {
      pbVar10 = *(byte **)(param_2 + uVar8 * 8);
      iVar7 = iVar4;
      do {
        bVar5 = *pbVar10;
        pbVar1 = pbVar10 + 1;
        pbVar2 = pbVar10 + 2;
        pbVar10 = pbVar10 + 3;
        uVar11 = (ulong)(*pbVar2 >> 2) & 0x3e;
        lVar3 = *(long *)(lVar9 + ((ulong)bVar5 & 0xf8)) + ((ulong)*pbVar1 & 0xfc) * 0x10;
        uVar6 = *(ushort *)(lVar3 + uVar11);
        if ((uVar6 + 1 & 0x10000) == 0) {
          uVar6 = uVar6 + 1;
        }
        iVar7 = iVar7 + -1;
        *(ushort *)(lVar3 + uVar11) = uVar6;
      } while (iVar7 != 0);
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_4);
  }
  return;
}


