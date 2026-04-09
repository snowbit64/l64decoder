// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findFilePath
// Entry Point: 008fea14
// Size: 88 bytes
// Signature: undefined __thiscall findFilePath(I3DLoad * this, uint param_1)


/* I3DLoad::findFilePath(unsigned int) */

I3DLoad * __thiscall I3DLoad::findFilePath(I3DLoad *this,uint param_1)

{
  I3DLoad *pIVar1;
  I3DLoad **ppIVar2;
  I3DLoad **ppIVar3;
  I3DLoad **ppIVar4;
  
  ppIVar2 = (I3DLoad **)(this + 0x90);
  ppIVar4 = (I3DLoad **)*ppIVar2;
  ppIVar3 = ppIVar2;
  if (ppIVar4 != (I3DLoad **)0x0) {
    do {
      if (*(uint *)(ppIVar4 + 4) >= param_1) {
        ppIVar3 = ppIVar4;
      }
      ppIVar4 = (I3DLoad **)ppIVar4[*(uint *)(ppIVar4 + 4) < param_1];
    } while (ppIVar4 != (I3DLoad **)0x0);
    if ((ppIVar3 != ppIVar2) && (*(uint *)(ppIVar3 + 4) <= param_1)) {
      pIVar1 = (I3DLoad *)((long)ppIVar3 + 0x29);
      if (((byte)*(I3DLoad *)(ppIVar3 + 5) & 1) != 0) {
        pIVar1 = ppIVar3[7];
      }
      return pIVar1;
    }
  }
  return (I3DLoad *)0x0;
}


