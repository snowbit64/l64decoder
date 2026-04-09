// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 008c6c84
// Size: 384 bytes
// Signature: undefined init(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SplineGeometry::init() */

void SplineGeometry::init(void)

{
  long lVar1;
  float fVar2;
  uint uVar3;
  Geometry *in_x0;
  BoundingSphere *this;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_78;
  float fStack_74;
  float local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar3 = Spline::getNumOfCV();
  if (uVar3 == 0) {
    fVar8 = -3.402823e+38;
    fVar4 = 3.402823e+38;
    fVar11 = fVar4;
    fVar7 = fVar4;
    fVar10 = fVar8;
    fVar9 = fVar8;
  }
  else {
    uVar5 = 0;
    fVar4 = 3.402823e+38;
    fVar8 = -3.402823e+38;
    fVar11 = fVar4;
    fVar7 = fVar4;
    fVar10 = fVar8;
    fVar9 = fVar8;
    do {
      Spline::getCV(*(Spline **)(in_x0 + 0xd8),uVar5,&local_78);
      uVar5 = uVar5 + 1;
      fVar2 = local_78;
      if (fVar7 <= local_78) {
        fVar2 = fVar7;
      }
      fVar7 = fVar2;
      fVar2 = local_78;
      if (local_78 <= fVar9) {
        fVar2 = fVar9;
      }
      fVar9 = fVar2;
      fVar2 = fStack_74;
      if (fVar11 <= fStack_74) {
        fVar2 = fVar11;
      }
      fVar11 = fVar2;
      fVar2 = fStack_74;
      if (fStack_74 <= fVar10) {
        fVar2 = fVar10;
      }
      fVar10 = fVar2;
      fVar2 = local_70;
      if (fVar4 <= local_70) {
        fVar2 = fVar4;
      }
      fVar4 = fVar2;
      fVar2 = local_70;
      if (local_70 <= fVar8) {
        fVar2 = fVar8;
      }
      fVar8 = fVar2;
    } while (uVar3 != uVar5);
  }
  local_78 = (fVar9 + fVar7) * 0.5;
  fStack_74 = (fVar10 + fVar11) * 0.5;
  local_70 = (fVar8 + fVar4) * 0.5;
  fVar9 = local_78 - fVar9;
  fVar10 = fStack_74 - fVar10;
  fVar8 = local_70 - fVar8;
  this = (BoundingSphere *)operator_new(0x20);
  uVar6 = NEON_fmadd(fVar9,fVar9,fVar10 * fVar10);
  fVar7 = (float)NEON_fmadd(fVar8,fVar8,uVar6);
                    /* try { // try from 008c6dbc to 008c6dc3 has its CatchHandler @ 008c6e04 */
  BoundingSphere::BoundingSphere(this,(Vector3 *)&local_78,SQRT(fVar7) * 1.2);
  Geometry::setBoundingVolume(in_x0,(BoundingVolume *)this);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


