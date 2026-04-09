// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createGrid
// Entry Point: 00b87dc8
// Size: 164 bytes
// Signature: undefined __thiscall createGrid(ChunkedBitSquare * this, uint param_1)


/* ChunkedBitSquare::createGrid(unsigned int) */

void __thiscall ChunkedBitSquare::createGrid(ChunkedBitSquare *this,uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *__s;
  int iVar6;
  
  iVar6 = 0;
  *(uint *)(this + 0x18) = param_1;
  uVar2 = param_1;
  if (1 < param_1) {
    do {
      iVar6 = iVar6 + 1;
      bVar1 = 3 < uVar2;
      uVar2 = uVar2 >> 1;
    } while (bVar1);
  }
  uVar5 = iVar6 - 5;
  uVar2 = *(uint *)(this + 0x34);
  iVar3 = 1 << (ulong)(uVar5 & 0x1f);
  uVar4 = 1 << (ulong)(uVar5 * 2 & 0x1f);
  *(uint *)(this + 0x1c) = param_1 - 1;
  *(uint *)this = uVar5;
  *(int *)(this + 4) = iVar3;
  *(uint *)(this + 0x10) = uVar4 - 1;
  *(int *)(this + 0x14) = iVar6;
  *(int *)(this + 8) = iVar3 + -1;
  *(uint *)(this + 0xc) = uVar4;
  __s = operator_new__((ulong)(uVar2 << (ulong)(uVar5 * 2 & 0x1f)) << 3);
  *(void **)(this + 0x28) = __s;
  memset(__s,0,(ulong)uVar4 * (ulong)uVar2 * 8);
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


