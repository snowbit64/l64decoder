// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAabb
// Entry Point: 00ba62d4
// Size: 432 bytes
// Signature: undefined __thiscall getAabb(Bt2HeightfieldTerrainShape * this, btTransform * param_1, btVector3 * param_2, btVector3 * param_3)


/* Bt2HeightfieldTerrainShape::getAabb(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
Bt2HeightfieldTerrainShape::getAabb
          (Bt2HeightfieldTerrainShape *this,btTransform *param_1,btVector3 *param_2,
          btVector3 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar6 = *(float *)(this + 0xa4) * 0.0;
  fVar8 = *(float *)(this + 0xac) * 0.0;
  fVar2 = (*(float *)(this + 0x30) - *(float *)(this + 0x20)) * *(float *)(this + 0xa4) * 0.5;
  fVar3 = (*(float *)(this + 0x34) - *(float *)(this + 0x24)) * *(float *)(this + 0xa8) * 0.5;
  fVar1 = (*(float *)(this + 0x38) - *(float *)(this + 0x28)) * *(float *)(this + 0xac) * 0.5;
  fVar4 = *(float *)(this + 0xa8) * (*(float *)(this + 0x48) + *(float *)(this + 0x4c)) * 0.5;
  uVar7 = NEON_fmadd(*(float *)param_1,fVar6,*(float *)(param_1 + 4) * fVar4);
  uVar12 = NEON_fmadd(*(float *)(param_1 + 0x10),fVar6,fVar4 * *(float *)(param_1 + 0x14));
  uVar5 = NEON_fmadd(*(float *)(param_1 + 0x20),fVar6,fVar4 * *(float *)(param_1 + 0x24));
  fVar6 = (float)NEON_fmadd(*(float *)(param_1 + 8),fVar8,uVar7);
  fVar13 = (float)NEON_fmadd(*(float *)(param_1 + 0x18),fVar8,uVar12);
  fVar4 = (float)NEON_fmadd(*(float *)(param_1 + 0x28),fVar8,uVar5);
  fVar14 = *(float *)(param_1 + 0x30);
  fVar8 = *(float *)(param_1 + 0x34);
  uVar7 = NEON_fmadd(fVar2,ABS(*(float *)param_1),fVar3 * ABS(*(float *)(param_1 + 4)));
  fVar15 = *(float *)(param_1 + 0x38);
  uVar12 = NEON_fmadd(fVar2,ABS(*(float *)(param_1 + 0x10)),fVar3 * ABS(*(float *)(param_1 + 0x14)))
  ;
  uVar5 = NEON_fmadd(fVar2,ABS(*(float *)(param_1 + 0x20)),fVar3 * ABS(*(float *)(param_1 + 0x24)));
  fVar9 = (float)NEON_fmadd(fVar1,ABS(*(float *)(param_1 + 8)),uVar7);
  fVar10 = (float)NEON_fmadd(fVar1,ABS(*(float *)(param_1 + 0x18)),uVar12);
  fVar11 = (float)NEON_fmadd(fVar1,ABS(*(float *)(param_1 + 0x28)),uVar5);
  fVar1 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(float *)param_2 = (fVar6 + fVar14) - (fVar9 + fVar1);
  *(float *)(param_2 + 4) = (fVar13 + fVar8) - (fVar10 + fVar2);
  *(float *)(param_2 + 8) = (fVar4 + fVar15) - (fVar11 + fVar3);
  *(float *)param_3 = fVar6 + fVar14 + fVar9 + fVar1;
  *(float *)(param_3 + 4) = fVar13 + fVar8 + fVar10 + fVar2;
  *(float *)(param_3 + 8) = fVar4 + fVar15 + fVar11 + fVar3;
  *(undefined4 *)(param_3 + 0xc) = 0;
  return;
}


