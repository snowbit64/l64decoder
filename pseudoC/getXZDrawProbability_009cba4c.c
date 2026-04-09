// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getXZDrawProbability
// Entry Point: 009cba4c
// Size: 108 bytes
// Signature: undefined __thiscall getXZDrawProbability(ProceduralPlacementIndexMask * this, uint param_1, uint param_2)


/* ProceduralPlacementIndexMask::getXZDrawProbability(unsigned int, unsigned int) */

undefined8 __thiscall
ProceduralPlacementIndexMask::getXZDrawProbability
          (ProceduralPlacementIndexMask *this,uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x58);
  iVar1 = (**(code **)(*(long *)this + 0x40))();
  iVar1 = (int)*(float *)(lVar4 + (ulong)(param_1 + iVar1 * param_2) * 4);
  if ((iVar1 == 0) ||
     (iVar2 = PCGRand::getBiasedRandomUpToAndExcluding((PCGRand *)(this + 0x60),0x100),
     iVar1 < iVar2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


