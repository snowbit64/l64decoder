// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: support
// Entry Point: 0072835c
// Size: 92 bytes
// Signature: undefined __thiscall support(OrientedBox * this, Vector2 * param_1)


/* OrientedBox::support(Vector2 const&) const */

undefined4 __thiscall OrientedBox::support(OrientedBox *this,Vector2 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  uVar6 = *(undefined4 *)(this + 8);
  fVar1 = *(float *)(this + 0xc);
  fVar5 = *(float *)param_1;
  fVar7 = *(float *)(param_1 + 4);
  fVar2 = (float)NEON_fmadd(uVar6,fVar7,fVar5 * -fVar1);
  fVar3 = (float)NEON_fmadd(uVar6,fVar5,fVar7 * fVar1);
  fVar8 = -*(float *)(this + 0x10);
  if (0.0 <= fVar2) {
    fVar8 = *(float *)(this + 0x10);
  }
  uVar4 = NEON_fmsub(fVar1,fVar8,*(undefined4 *)this);
  uVar9 = NEON_fmadd(uVar6,fVar8,*(undefined4 *)(this + 4));
  fVar8 = -*(float *)(this + 0x14);
  if (0.0 <= fVar3) {
    fVar8 = *(float *)(this + 0x14);
  }
  uVar6 = NEON_fmadd(uVar6,fVar8,uVar4);
  uVar4 = NEON_fmadd(fVar1,fVar8,uVar9);
  uVar6 = NEON_fmadd(fVar5,*(undefined4 *)(this + 0x18),uVar6);
  NEON_fmadd(fVar7,*(undefined4 *)(this + 0x18),uVar4);
  return uVar6;
}


