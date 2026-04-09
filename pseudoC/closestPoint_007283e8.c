// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closestPoint
// Entry Point: 007283e8
// Size: 124 bytes
// Signature: undefined __thiscall closestPoint(OrientedBox * this, Vector2 * param_1)


/* OrientedBox::closestPoint(Vector2 const&) const */

undefined4 __thiscall OrientedBox::closestPoint(OrientedBox *this,Vector2 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = *(float *)(this + 0xc);
  fVar8 = *(float *)(this + 0x10);
  fVar6 = *(float *)param_1 - *(float *)this;
  fVar5 = *(float *)(param_1 + 4) - *(float *)(this + 4);
  uVar4 = *(undefined4 *)(this + 8);
  fVar7 = (float)NEON_fmadd(uVar4,fVar5,fVar6 * -fVar2);
  fVar6 = (float)NEON_fmadd(uVar4,fVar6,fVar5 * fVar2);
  fVar5 = -fVar8;
  if ((-fVar8 <= fVar7) && (fVar5 = fVar8, fVar7 <= fVar8)) {
    fVar5 = fVar7;
  }
  fVar8 = *(float *)(this + 0x14);
  fVar7 = -fVar8;
  if ((-fVar8 <= fVar6) && (fVar7 = fVar8, fVar6 <= fVar8)) {
    fVar7 = fVar6;
  }
  uVar1 = NEON_fmadd(-fVar2,fVar5,*(float *)this);
  uVar3 = NEON_fmadd(uVar4,fVar5,*(float *)(this + 4));
  uVar4 = NEON_fmadd(uVar4,fVar7,uVar1);
  NEON_fmadd(fVar2,fVar7,uVar3);
  return uVar4;
}


