// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserialize
// Entry Point: 00bff0c4
// Size: 224 bytes
// Signature: undefined __thiscall deserialize(MarkovHuffmanTree * this, uchar * * param_1)


/* MarkovHuffmanTree::deserialize(unsigned char const*&) */

void __thiscall MarkovHuffmanTree::deserialize(MarkovHuffmanTree *this,uchar **param_1)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  uchar *puVar3;
  uint *puVar4;
  ulong uVar5;
  uchar *__src;
  
  uVar1 = *(uint *)*param_1;
  uVar5 = (ulong)uVar1;
  *(uint *)(this + 0x18) = uVar1;
  puVar3 = *param_1;
  *param_1 = puVar3 + 4;
  uVar2 = *(uint *)(puVar3 + 4);
  *param_1 = puVar3 + 8;
  puVar3 = (uchar *)operator_new__(uVar5);
  *(uchar **)(this + 0x10) = puVar3;
  __src = *param_1;
  if (uVar2 == uVar1) {
    memcpy(puVar3,__src,uVar5);
    puVar4 = (uint *)(__src + uVar5);
  }
  else {
    LZMACompressionUtil::decompress(__src,uVar2,puVar3,uVar1);
    puVar4 = (uint *)(*param_1 + uVar2);
  }
  *param_1 = (uchar *)puVar4;
  uVar1 = *puVar4;
  *(uint *)(this + 8) = uVar1;
  uVar5 = (ulong)uVar1 * 4;
  *param_1 = *param_1 + 4;
  __dest = operator_new__(uVar5);
  *(void **)this = __dest;
  puVar3 = *param_1;
  memcpy(__dest,puVar3,uVar5);
  *param_1 = puVar3 + uVar5;
  return;
}


