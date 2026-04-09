// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getXZ
// Entry Point: 009d99d0
// Size: 52 bytes
// Signature: undefined __thiscall getXZ(ProceduralPlacementMask * this, uint param_1, uint param_2)


/* ProceduralPlacementMask::getXZ(unsigned int, unsigned int) const */

float __thiscall
ProceduralPlacementMask::getXZ(ProceduralPlacementMask *this,uint param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(*(long *)(this + 0x58) + (ulong)(param_1 + *(int *)(this + 0x50) * param_2) * 4
                    );
  fVar1 = 255.0;
  if (fVar2 <= 0.0) {
    fVar1 = 0.0;
  }
  if (this[0x68] != (ProceduralPlacementMask)0x0) {
    fVar2 = fVar1;
  }
  return fVar2;
}


