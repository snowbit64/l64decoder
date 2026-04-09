// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localGetSupportingVertexWithoutMargin
// Entry Point: 009ba668
// Size: 108 bytes
// Signature: undefined __thiscall localGetSupportingVertexWithoutMargin(btTriangleShape * this, btVector3 * param_1)


/* btTriangleShape::localGetSupportingVertexWithoutMargin(btVector3 const&) const */

undefined4 __thiscall
btTriangleShape::localGetSupportingVertexWithoutMargin(btTriangleShape *this,btVector3 *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar8 = *(undefined4 *)param_1;
  fVar4 = *(float *)(param_1 + 4);
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar6 = NEON_fmadd(uVar8,*(undefined4 *)(this + 0x60),fVar4 * *(float *)(this + 100));
  uVar2 = NEON_fmadd(uVar8,*(undefined4 *)(this + 0x50),fVar4 * *(float *)(this + 0x54));
  fVar7 = (float)NEON_fmadd(uVar9,*(undefined4 *)(this + 0x68),uVar6);
  fVar3 = (float)NEON_fmadd(uVar9,*(undefined4 *)(this + 0x58),uVar2);
  uVar2 = NEON_fmadd(uVar8,*(undefined4 *)(this + 0x70),fVar4 * *(float *)(this + 0x74));
  fVar5 = (float)NEON_fmadd(uVar9,*(undefined4 *)(this + 0x78),uVar2);
  fVar4 = fVar7;
  if (fVar3 >= fVar7) {
    fVar4 = fVar3;
  }
  uVar1 = 2;
  if (fVar5 <= fVar4) {
    uVar1 = (ulong)(fVar3 < fVar7);
  }
  return *(undefined4 *)((long)(this + 0x50) + uVar1 * 4 * 4);
}


