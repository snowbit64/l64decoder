// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btCylinderShape
// Entry Point: 00f62e9c
// Size: 396 bytes
// Signature: undefined __thiscall btCylinderShape(btCylinderShape * this, btVector3 * param_1)


/* btCylinderShape::btCylinderShape(btVector3 const&) */

void __thiscall btCylinderShape::btCylinderShape(btCylinderShape *this,btVector3 *param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  *(undefined4 *)(this + 0x3c) = 0x3d23d70a;
  *(undefined8 *)(this + 0x24) = 0x3f800000;
  *(undefined8 *)(this + 0x1c) = 0x3f8000003f800000;
  fVar7 = (float)NEON_fminnm(*(float *)param_1,*(float *)(param_1 + 4));
  uVar1 = (ulong)(*(float *)(param_1 + 4) <= *(float *)param_1);
  if (*(float *)(param_1 + 8) <= fVar7) {
    uVar1 = 2;
  }
  fVar7 = *(float *)(param_1 + uVar1 * 4);
  *(undefined4 *)(this + 8) = 0x23;
  *(undefined8 *)(this + 0x10) = 0;
  ppuVar2 = &PTR__btConvexShape_0101aa30;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined ***)this = &PTR__btConvexShape_0101aa30;
  *(undefined4 *)(this + 0x44) = 1;
  if (fVar7 * 0.1 < 0.04) {
    uVar6 = *(undefined8 *)(this + 0x2c);
    fVar9 = *(float *)(this + 0x34);
    *(float *)(this + 0x3c) = fVar7 * 0.1;
    fVar7 = (float)btConvexInternalShape::getMargin();
    fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
    fVar4 = (float)(**(code **)(*(long *)this + 0x60))(this);
    *(undefined4 *)(this + 0x38) = 0;
    *(float *)(this + 0x34) = (fVar9 + 0.04) - fVar4;
    ppuVar2 = *(undefined ***)this;
    *(ulong *)(this + 0x2c) =
         CONCAT44(((float)((ulong)uVar6 >> 0x20) + 0.04) - fVar3,((float)uVar6 + 0.04) - fVar7);
  }
  fVar7 = (float)(*(code *)ppuVar2[0xc])(this);
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  uVar5 = (**(code **)(*(long *)this + 0x60))(this);
  *(undefined4 *)(this + 8) = 0xd;
  uVar6 = *(undefined8 *)param_1;
  uVar8 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x38) = 0;
  uVar5 = NEON_fnmsub(*(undefined4 *)(this + 0x24),uVar8,uVar5);
  *(undefined4 *)(this + 0x34) = uVar5;
  *(ulong *)(this + 0x2c) =
       CONCAT44(-fVar3 + (float)((ulong)uVar6 >> 0x20) *
                         (float)((ulong)*(undefined8 *)(this + 0x1c) >> 0x20),
                -fVar7 + (float)uVar6 * (float)*(undefined8 *)(this + 0x1c));
  return;
}


