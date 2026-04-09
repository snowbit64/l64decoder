// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isInside
// Entry Point: 009ba8b4
// Size: 508 bytes
// Signature: undefined __thiscall isInside(btTriangleShape * this, btVector3 * param_1, float param_2)


/* btTriangleShape::isInside(btVector3 const&, float) const */

byte __thiscall btTriangleShape::isInside(btTriangleShape *this,btVector3 *param_1,float param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float local_88;
  float fStack_84;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  fVar15 = -param_2;
  fVar9 = *(float *)(this + 0x50);
  fVar10 = *(float *)(this + 0x54);
  fVar12 = *(float *)(this + 0x58);
  fVar11 = (float)NEON_fmadd(*(float *)(this + 0x68) - fVar12,*(float *)(this + 0x70) - fVar9,
                             (*(float *)(this + 0x78) - fVar12) * -(*(float *)(this + 0x60) - fVar9)
                            );
  fVar7 = (float)NEON_fmadd(*(float *)(this + 100) - fVar10,*(float *)(this + 0x78) - fVar12,
                            (*(float *)(this + 0x74) - fVar10) * -(*(float *)(this + 0x68) - fVar12)
                           );
  fVar6 = (float)NEON_fmadd(*(float *)(this + 0x60) - fVar9,*(float *)(this + 0x74) - fVar10,
                            (*(float *)(this + 0x70) - fVar9) * -(*(float *)(this + 100) - fVar10));
  uVar13 = NEON_fmadd(fVar7,fVar7,fVar11 * fVar11);
  fVar14 = (float)NEON_fmadd(fVar6,fVar6,uVar13);
  fVar14 = 1.0 / SQRT(fVar14);
  fVar11 = fVar11 * fVar14;
  fVar7 = fVar7 * fVar14;
  fVar6 = fVar6 * fVar14;
  uVar13 = NEON_fmadd(*(undefined4 *)param_1,fVar7,*(float *)(param_1 + 4) * fVar11);
  uVar8 = NEON_fmadd(fVar9,fVar7,fVar10 * fVar11);
  fVar9 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),fVar6,uVar13);
  fVar10 = (float)NEON_fmadd(fVar12,fVar6,uVar8);
  fVar9 = fVar9 - fVar10;
  if (fVar15 <= fVar9 && fVar9 < param_2 || fVar15 <= fVar9 && fVar9 == param_2) {
    bVar3 = true;
    uVar5 = 0;
    do {
      (**(code **)(*(long *)this + 0xd0))(this,uVar5,&local_78,&local_88);
      fVar12 = (float)NEON_fmadd(local_80 - local_70,fVar7,fVar6 * -(local_88 - local_78));
      fVar10 = (float)NEON_fmadd(fStack_84 - fStack_74,fVar6,fVar11 * -(local_80 - local_70));
      fVar9 = (float)NEON_fmadd(local_88 - local_78,fVar11,fVar7 * -(fStack_84 - fStack_74));
      uVar13 = NEON_fmadd(fVar10,fVar10,fVar12 * fVar12);
      fVar14 = (float)NEON_fmadd(fVar9,fVar9,uVar13);
      fVar14 = 1.0 / SQRT(fVar14);
      uVar8 = NEON_fmadd(*(undefined4 *)param_1,fVar10 * fVar14,
                         *(float *)(param_1 + 4) * fVar12 * fVar14);
      uVar13 = NEON_fmadd(local_78,fVar10 * fVar14,fStack_74 * fVar12 * fVar14);
      fVar10 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),fVar9 * fVar14,uVar8);
      fVar9 = (float)NEON_fmadd(local_70,fVar9 * fVar14,uVar13);
      if (fVar10 - fVar9 < fVar15) break;
      uVar1 = uVar5 + 1;
      bVar3 = uVar5 < 2;
      uVar5 = uVar1;
    } while (uVar1 != 3);
    bVar4 = bVar3 ^ 1;
  }
  else {
    bVar4 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


