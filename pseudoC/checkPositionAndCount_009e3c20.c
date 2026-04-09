// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkPositionAndCount
// Entry Point: 009e3c20
// Size: 104 bytes
// Signature: undefined __thiscall checkPositionAndCount(ParentObject * this, uint param_1, uint param_2)


/* ProceduralPlacementRule::ParentObject::checkPositionAndCount(unsigned int, unsigned int) */

bool __thiscall
ProceduralPlacementRule::ParentObject::checkPositionAndCount
          (ParentObject *this,uint param_1,uint param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(this + 0x10);
  if (*(uint *)this < *(uint *)(lVar1 + 100)) {
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)(this + 4));
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(this + 8));
    fVar2 = (float)NEON_fmadd((float)(ulong)param_2 - fVar3,(float)(ulong)param_2 - fVar3,
                              ((float)(ulong)param_1 - fVar2) * ((float)(ulong)param_1 - fVar2));
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x68));
    if (fVar3 < SQRT(fVar2)) {
      fVar3 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x6c));
      return SQRT(fVar2) < fVar3;
    }
  }
  return false;
}


