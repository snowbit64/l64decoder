// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getType
// Entry Point: 009ca3e8
// Size: 112 bytes
// Signature: undefined __thiscall getType(ProceduralPlacementDistanceMatrix * this, uint param_1)


/* ProceduralPlacementDistanceMatrix::getType(unsigned int) */

long * __thiscall
ProceduralPlacementDistanceMatrix::getType(ProceduralPlacementDistanceMatrix *this,uint param_1)

{
  uint uVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplVar4;
  long *plVar5;
  
  pplVar2 = *(long ***)this;
  if (param_1 != 0) {
    uVar1 = 0;
    pplVar3 = pplVar2;
    do {
      pplVar4 = (long **)pplVar3[1];
      if ((long **)pplVar3[1] == (long **)0x0) {
        pplVar4 = pplVar3 + 2;
        pplVar2 = (long **)*pplVar4;
        if ((long **)*pplVar2 != pplVar3) {
          do {
            plVar5 = *pplVar4;
            pplVar4 = (long **)(plVar5 + 2);
            pplVar2 = (long **)*pplVar4;
          } while (*pplVar2 != plVar5);
        }
      }
      else {
        do {
          pplVar2 = pplVar4;
          pplVar4 = (long **)*pplVar2;
        } while (*pplVar2 != (long *)0x0);
      }
      uVar1 = uVar1 + 1;
      pplVar3 = pplVar2;
    } while (uVar1 != param_1);
  }
  return pplVar2[7];
}


