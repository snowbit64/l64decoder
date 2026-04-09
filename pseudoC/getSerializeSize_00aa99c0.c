// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSerializeSize
// Entry Point: 00aa99c0
// Size: 208 bytes
// Signature: undefined getSerializeSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ShaderStructLayout::getSerializeSize() const */

int ShaderStructLayout::getSerializeSize(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  byte *in_x0;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  byte *pbVar12;
  
  lVar3 = *(long *)(in_x0 + 0x20);
  uVar9 = *(long *)(in_x0 + 0x28) - lVar3;
  uVar2 = (uint)(*in_x0 >> 1);
  if ((*in_x0 & 1) != 0) {
    uVar2 = *(uint *)(in_x0 + 8);
  }
  iVar5 = uVar2 + 7;
  if ((int)(uVar9 >> 5) != 0) {
    uVar7 = uVar9 >> 5 & 0xffffffff;
    if (uVar7 < 2) {
      lVar10 = 0;
    }
    else {
      uVar9 = uVar9 >> 5 & 1;
      iVar11 = 0;
      lVar10 = uVar7 - uVar9;
      pbVar12 = (byte *)(lVar3 + 0x20);
      lVar8 = lVar10;
      do {
        uVar2 = (uint)(pbVar12[-0x20] >> 1);
        if ((pbVar12[-0x20] & 1) != 0) {
          uVar2 = *(uint *)(pbVar12 + -0x18);
        }
        uVar1 = (uint)(*pbVar12 >> 1);
        if ((*pbVar12 & 1) != 0) {
          uVar1 = *(uint *)(pbVar12 + 8);
        }
        iVar5 = iVar5 + uVar2 + 9;
        iVar11 = iVar11 + uVar1 + 9;
        pbVar12 = pbVar12 + 0x40;
        lVar8 = lVar8 + -2;
      } while (lVar8 != 0);
      iVar5 = iVar11 + iVar5;
      if (uVar9 == 0) {
        return iVar5;
      }
    }
    lVar8 = lVar10 - uVar7;
    puVar6 = (uint *)(lVar3 + lVar10 * 0x20 + 8);
    do {
      uVar2 = (uint)(*(byte *)(puVar6 + -2) >> 1);
      if ((*(byte *)(puVar6 + -2) & 1) != 0) {
        uVar2 = *puVar6;
      }
      bVar4 = lVar8 != -1;
      lVar8 = lVar8 + 1;
      iVar5 = iVar5 + uVar2 + 9;
      puVar6 = puVar6 + 8;
    } while (bVar4);
  }
  return iVar5;
}


