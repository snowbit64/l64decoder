// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localGetSupportingVertex
// Entry Point: 009ba09c
// Size: 256 bytes
// Signature: undefined __thiscall localGetSupportingVertex(btCylinderShape * this, btVector3 * param_1)


/* btCylinderShape::localGetSupportingVertex(btVector3 const&) const */

float __thiscall btCylinderShape::localGetSupportingVertex(btCylinderShape *this,btVector3 *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  fVar2 = (float)(**(code **)(*(long *)this + 0x88))();
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  if (fVar3 != 0.0) {
    fVar6 = *(float *)param_1;
    fVar4 = *(float *)(param_1 + 4);
    uVar7 = *(undefined4 *)(param_1 + 8);
    uVar5 = NEON_fmadd(fVar6,fVar6,fVar4 * fVar4);
    fVar3 = (float)NEON_fmadd(uVar7,uVar7,uVar5);
    bVar1 = 1.421085e-14 <= fVar3;
    fVar3 = -1.0;
    if (bVar1) {
      fVar3 = fVar4;
    }
    fVar4 = -1.0;
    if (bVar1) {
      fVar4 = fVar6;
    }
    uVar5 = 0xbf800000;
    if (bVar1) {
      uVar5 = uVar7;
    }
    uVar7 = NEON_fmadd(fVar4,fVar4,fVar3 * fVar3);
    fVar6 = (float)NEON_fmadd(uVar5,uVar5,uVar7);
    fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
    fVar2 = fVar2 + fVar3 * fVar4 * (1.0 / SQRT(fVar6));
  }
  return fVar2;
}


