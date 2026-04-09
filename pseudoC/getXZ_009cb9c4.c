// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getXZ
// Entry Point: 009cb9c4
// Size: 136 bytes
// Signature: undefined __thiscall getXZ(ProceduralPlacementIndexMask * this, uint param_1, uint param_2)


/* ProceduralPlacementIndexMask::getXZ(unsigned int, unsigned int) const */

undefined4 __thiscall
ProceduralPlacementIndexMask::getXZ(ProceduralPlacementIndexMask *this,uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar1 = (**(code **)(*(long *)this + 0x40))();
  uVar4 = 0;
  if ((param_1 < uVar1) && (uVar1 = (**(code **)(*(long *)this + 0x48))(this), param_2 < uVar1)) {
    lVar3 = *(long *)(this + 200);
    iVar2 = (**(code **)(*(long *)this + 0x40))(this);
    uVar4 = NEON_ucvtf(*(undefined4 *)(lVar3 + (ulong)(param_1 + iVar2 * param_2) * 4));
  }
  return uVar4;
}


