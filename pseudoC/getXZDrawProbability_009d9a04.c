// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getXZDrawProbability
// Entry Point: 009d9a04
// Size: 80 bytes
// Signature: undefined __cdecl getXZDrawProbability(uint param_1, uint param_2)


/* ProceduralPlacementMask::getXZDrawProbability(unsigned int, unsigned int) */

undefined8 ProceduralPlacementMask::getXZDrawProbability(uint param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  float fVar4;
  
  plVar2 = (long *)(ulong)param_1;
  fVar4 = (float)(**(code **)(*plVar2 + 0x68))(plVar2,param_2);
  if (((int)fVar4 == 0) ||
     (iVar1 = PCGRand::getBiasedRandomUpToAndExcluding((PCGRand *)(plVar2 + 0xc),0x100),
     (int)fVar4 < iVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


