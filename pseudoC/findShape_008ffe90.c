// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findShape
// Entry Point: 008ffe90
// Size: 72 bytes
// Signature: undefined __thiscall findShape(I3DLoad * this, uint param_1)


/* I3DLoad::findShape(unsigned int) */

I3DLoad * __thiscall I3DLoad::findShape(I3DLoad *this,uint param_1)

{
  I3DLoad **ppIVar1;
  I3DLoad **ppIVar2;
  I3DLoad **ppIVar3;
  
  ppIVar1 = (I3DLoad **)(this + 0xc0);
  ppIVar3 = (I3DLoad **)*ppIVar1;
  ppIVar2 = ppIVar1;
  if (ppIVar3 != (I3DLoad **)0x0) {
    do {
      if (*(uint *)(ppIVar3 + 4) >= param_1) {
        ppIVar2 = ppIVar3;
      }
      ppIVar3 = (I3DLoad **)ppIVar3[*(uint *)(ppIVar3 + 4) < param_1];
    } while (ppIVar3 != (I3DLoad **)0x0);
    if ((ppIVar2 != ppIVar1) && (*(uint *)(ppIVar2 + 4) <= param_1)) {
      return ppIVar2[5];
    }
  }
  return (I3DLoad *)0x0;
}


