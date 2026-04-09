// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getXZDrawProbability
// Entry Point: 009da794
// Size: 80 bytes
// Signature: undefined __thiscall getXZDrawProbability(ProceduralPlacementPerlinNoiseMask * this, uint param_1, uint param_2)


/* ProceduralPlacementPerlinNoiseMask::getXZDrawProbability(unsigned int, unsigned int) */

undefined8 __thiscall
ProceduralPlacementPerlinNoiseMask::getXZDrawProbability
          (ProceduralPlacementPerlinNoiseMask *this,uint param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)*(float *)(*(long *)(this + 0x58) +
                         (ulong)(param_1 + *(int *)(this + 0x50) * param_2) * 4);
  if ((iVar3 == 0) ||
     (iVar1 = PCGRand::getBiasedRandomUpToAndExcluding((PCGRand *)(this + 0x60),0x100),
     iVar3 < iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


