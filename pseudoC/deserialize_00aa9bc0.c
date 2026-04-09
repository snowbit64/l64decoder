// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserialize
// Entry Point: 00aa9bc0
// Size: 336 bytes
// Signature: undefined __thiscall deserialize(ShaderStructLayout * this, uchar * param_1)


/* ShaderStructLayout::deserialize(unsigned char const*) */

int __thiscall ShaderStructLayout::deserialize(ShaderStructLayout *this,uchar *param_1)

{
  byte *pbVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  undefined2 uVar5;
  byte *pbVar6;
  ulong uVar7;
  long *this_00;
  uchar *puVar8;
  uchar *puVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)this);
  uVar2 = (ulong)((byte)*this >> 1);
  if (((byte)*this & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  this_00 = (long *)(this + 0x20);
  uVar3 = *(uint *)(param_1 + uVar2 + 1);
  uVar10 = (ulong)uVar3;
  uVar7 = (long)*(byte **)(this + 0x28) - *this_00 >> 5;
  *(undefined2 *)(this + 0x18) = *(undefined2 *)(param_1 + uVar2 + 5);
  if (uVar7 < uVar10) {
    std::__ndk1::vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
    ::__append((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                *)this_00,uVar10 - uVar7);
  }
  else if (uVar10 < uVar7) {
    pbVar1 = (byte *)(*this_00 + uVar10 * 0x20);
    pbVar12 = *(byte **)(this + 0x28);
    while (pbVar6 = pbVar12, pbVar6 != pbVar1) {
      pbVar12 = pbVar6 + -0x20;
      if ((*pbVar12 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -0x10));
      }
    }
    *(byte **)(this + 0x28) = pbVar1;
  }
  puVar9 = param_1 + uVar2 + 7;
  if (uVar3 != 0) {
    lVar11 = 0;
    puVar8 = puVar9;
    do {
      pbVar1 = (byte *)(*this_00 + lVar11);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)pbVar1);
      lVar11 = lVar11 + 0x20;
      uVar2 = (ulong)(*pbVar1 >> 1);
      if ((*pbVar1 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar1 + 8);
      }
      puVar9 = puVar8 + uVar2 + 9;
      *(undefined2 *)(pbVar1 + 0x18) = *(undefined2 *)(puVar8 + uVar2 + 1);
      uVar5 = *(undefined2 *)(puVar8 + uVar2 + 5);
      pbVar1[0x1a] = puVar8[uVar2 + 3];
      bVar4 = puVar8[uVar2 + 4];
      *(undefined2 *)(pbVar1 + 0x1c) = uVar5;
      pbVar1[0x1b] = bVar4;
      pbVar1[0x1e] = puVar8[uVar2 + 7] != '\0';
      pbVar1[0x1f] = puVar8[uVar2 + 8];
      puVar8 = puVar9;
    } while (uVar10 * 0x20 - lVar11 != 0);
  }
  return (int)puVar9 - (int)param_1;
}


