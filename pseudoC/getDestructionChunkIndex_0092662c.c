// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDestructionChunkIndex
// Entry Point: 0092662c
// Size: 76 bytes
// Signature: undefined __thiscall getDestructionChunkIndex(DestructionShape * this, uint param_1)


/* DestructionShape::getDestructionChunkIndex(unsigned int) const */

undefined4 __thiscall
DestructionShape::getDestructionChunkIndex(DestructionShape *this,uint param_1)

{
  DestructionShape *pDVar1;
  DestructionShape *pDVar2;
  
  pDVar2 = *(DestructionShape **)(this + 0x238);
  if (pDVar2 != (DestructionShape *)0x0) {
    pDVar1 = this + 0x238;
    do {
      if (*(uint *)(pDVar2 + 0x1c) >= param_1) {
        pDVar1 = pDVar2;
      }
      pDVar2 = *(DestructionShape **)(pDVar2 + (ulong)(*(uint *)(pDVar2 + 0x1c) < param_1) * 8);
    } while (pDVar2 != (DestructionShape *)0x0);
    if ((pDVar1 != this + 0x238) && (*(uint *)(pDVar1 + 0x1c) <= param_1)) {
      return *(undefined4 *)(pDVar1 + 0x20);
    }
  }
  return 0xffffffff;
}


