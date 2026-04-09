// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stepBack
// Entry Point: 00b5c908
// Size: 116 bytes
// Signature: undefined __thiscall stepBack(PCGRand * this, uint param_1)


/* PCGRand::stepBack(unsigned int) */

void __thiscall PCGRand::stepBack(PCGRand *this,uint param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = 1;
    lVar4 = -0x3f681078cd61d75b;
    do {
      lVar2 = lVar4;
      if ((param_1 & 1) == 0) {
        lVar2 = 1;
      }
      lVar4 = lVar4 * lVar4;
      lVar3 = lVar2 * lVar3;
      bVar1 = 1 < param_1;
      param_1 = param_1 >> 1;
    } while (bVar1);
  }
  *(long *)this = (*(long *)this + -0x7d640e2543dbb200) * lVar3 + 0x7d640e2543dbb200;
  return;
}


