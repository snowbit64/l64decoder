// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00aa9a90
// Size: 304 bytes
// Signature: undefined __thiscall serialize(ShaderStructLayout * this, uchar * param_1)


/* ShaderStructLayout::serialize(unsigned char*) const */

int __thiscall ShaderStructLayout::serialize(ShaderStructLayout *this,uchar *param_1)

{
  byte *pbVar1;
  ulong uVar2;
  ShaderStructLayout *__src;
  byte *__src_00;
  ShaderStructLayout SVar3;
  byte bVar4;
  undefined2 uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  uchar *__dest;
  uchar *puVar9;
  long lVar10;
  
  uVar2 = *(ulong *)(this + 8);
  __src = *(ShaderStructLayout **)(this + 0x10);
  if (((byte)*this & 1) == 0) {
    __src = this + 1;
    uVar2 = (ulong)((byte)*this >> 1);
  }
  memcpy(param_1,__src,uVar2 + 1);
  lVar6 = *(long *)(this + 0x20);
  SVar3 = this[0x19];
  uVar2 = (ulong)((byte)*this >> 1);
  if (((byte)*this & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  uVar7 = *(long *)(this + 0x28) - lVar6;
  puVar9 = param_1 + uVar2 + 7;
  *(ShaderStructLayout *)(param_1 + uVar2 + 5) = this[0x18];
  *(ShaderStructLayout *)(param_1 + uVar2 + 6) = SVar3;
  iVar8 = (int)(uVar7 >> 5);
  *(int *)(param_1 + uVar2 + 1) = iVar8;
  if (iVar8 != 0) {
    lVar10 = 0;
    __dest = puVar9;
    while( true ) {
      pbVar1 = (byte *)(lVar6 + lVar10);
      uVar2 = *(ulong *)(pbVar1 + 8);
      __src_00 = *(byte **)(pbVar1 + 0x10);
      if ((*pbVar1 & 1) == 0) {
        __src_00 = pbVar1 + 1;
        uVar2 = (ulong)(*pbVar1 >> 1);
      }
      memcpy(__dest,__src_00,uVar2 + 1);
      uVar2 = (ulong)(*pbVar1 >> 1);
      if ((*pbVar1 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar1 + 8);
      }
      uVar5 = *(undefined2 *)(pbVar1 + 0x18);
      puVar9 = __dest + uVar2 + 9;
      __dest[uVar2 + 3] = pbVar1[0x1a];
      bVar4 = pbVar1[0x1b];
      *(undefined2 *)(__dest + uVar2 + 1) = uVar5;
      __dest[uVar2 + 4] = bVar4;
      uVar5 = *(undefined2 *)(pbVar1 + 0x1c);
      __dest[uVar2 + 7] = pbVar1[0x1e];
      bVar4 = pbVar1[0x1f];
      *(undefined2 *)(__dest + uVar2 + 5) = uVar5;
      __dest[uVar2 + 8] = bVar4;
      if ((uVar7 >> 5 & 0xffffffff) * 0x20 + -0x20 == lVar10) break;
      lVar6 = *(long *)(this + 0x20);
      lVar10 = lVar10 + 0x20;
      __dest = puVar9;
    }
  }
  return (int)puVar9 - (int)param_1;
}


