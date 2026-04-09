// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAlternameXZ
// Entry Point: 009d57b8
// Size: 52 bytes
// Signature: undefined __thiscall getAlternameXZ(ProceduralPlacementManager * this, uint param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint * param_6, uint * param_7)


/* ProceduralPlacementManager::getAlternameXZ(unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int&, unsigned int&) */

void __thiscall
ProceduralPlacementManager::getAlternameXZ
          (ProceduralPlacementManager *this,uint param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,uint *param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = param_3 - param_2;
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = (int)(param_1 >> 1) / iVar2;
  }
  iVar2 = (param_1 >> 1) - iVar1 * iVar2;
  if ((param_1 & 1) == 0) {
    uVar4 = iVar2 + param_2;
    uVar3 = iVar1 + param_4;
  }
  else {
    uVar4 = param_3 - iVar2;
    uVar3 = param_5 - iVar1;
  }
  *param_6 = uVar4;
  *param_7 = uVar3;
  return;
}


