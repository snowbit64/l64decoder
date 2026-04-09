// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlaneExtents
// Entry Point: 00b67018
// Size: 120 bytes
// Signature: undefined __thiscall getPlaneExtents(Brep * this, BrepPlane * param_1, float * param_2, float * param_3)


/* Brep::getPlaneExtents(BrepPlane const&, float&, float&) const */

void __thiscall Brep::getPlaneExtents(Brep *this,BrepPlane *param_1,float *param_2,float *param_3)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  puVar3 = *(undefined4 **)(this + 0x2ef0);
  if (puVar3 == *(undefined4 **)(this + 0x2ef8)) {
    fVar2 = -3.402823e+38;
    fVar4 = fVar2;
  }
  else {
    fVar2 = -3.402823e+38;
    fVar4 = fVar2;
    do {
      uVar5 = NEON_fmadd(*(undefined4 *)param_1,*puVar3,*(float *)(param_1 + 4) * (float)puVar3[1]);
      puVar1 = puVar3 + 2;
      puVar3 = puVar3 + 4;
      fVar6 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),*puVar1,uVar5);
      fVar6 = fVar6 + *(float *)(param_1 + 0xc);
      if (fVar4 < fVar6) {
        fVar4 = fVar6;
      }
      if (fVar2 < -fVar6) {
        fVar2 = -fVar6;
      }
    } while (puVar3 != *(undefined4 **)(this + 0x2ef8));
  }
  *param_3 = fVar4;
  *param_2 = fVar2;
  return;
}


