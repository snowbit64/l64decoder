// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaEnc_InitPrices
// Entry Point: 00d96840
// Size: 420 bytes
// Signature: undefined LzmaEnc_InitPrices(void)


void LzmaEnc_InitPrices(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  
  if (*(int *)(param_1 + 0x3d2e8) == 0) {
    FUN_00d969e4(param_1);
    lVar9 = 0;
    uVar4 = *(ushort *)(param_1 + 0x34236);
    lVar1 = param_1 + 0x324dc;
    lVar2 = param_1 + 0x34234;
    do {
      uVar8 = (uint)lVar9;
      uVar6 = uVar8 >> 1 & 1;
      uVar7 = uVar8 >> 2 & 1;
      uVar3 = uVar6 | (uVar8 & 1 | 2) << 1;
      *(int *)(param_1 + 0x33b8c + lVar9 * 4) =
           *(int *)(lVar1 + (ulong)((-uVar6 & 0x7f0 ^
                                    (uint)*(ushort *)(lVar2 + (ulong)(uVar8 & 1 | 2) * 2)) >> 4) * 4
                   ) + *(int *)(lVar1 + (ulong)((-(uVar8 & 1) & 0x7f0 ^ (uint)uVar4) >> 4) * 4) +
           *(int *)(lVar1 + (ulong)((-uVar7 & 0x7f0 ^ (uint)*(ushort *)(lVar2 + (ulong)uVar3 * 2))
                                   >> 4) * 4) +
           *(int *)(lVar1 + ((ulong)((-(uVar8 >> 3 & 1) & 0x7f0 ^
                                     (uint)*(ushort *)(lVar2 + (ulong)(uVar7 | uVar3 << 1) * 2)) >>
                                    2) & 0x3ffc));
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x10);
    *(undefined4 *)(param_1 + 0x33bcc) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x33bdc);
  iVar10 = 0;
  iVar5 = *(int *)(param_1 + 0x32f70) + -1;
  *(int *)(param_1 + 0x3d2a0) = iVar5;
  *(int *)(param_1 + 0x38a58) = iVar5;
  do {
    FUN_00d9bd4c(param_1 + 0x34254,iVar10,param_1 + 0x324dc);
    iVar10 = iVar10 + 1;
  } while (1 << (ulong)(uVar3 & 0x1f) != iVar10);
  uVar3 = *(uint *)(param_1 + 0x33bdc);
  iVar10 = 0;
  do {
    FUN_00d9bd4c(param_1 + 0x38a9c,iVar10,param_1 + 0x324dc);
    iVar10 = iVar10 + 1;
  } while (1 << (ulong)(uVar3 & 0x1f) != iVar10);
  return;
}


