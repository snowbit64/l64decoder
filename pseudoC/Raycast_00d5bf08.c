// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Raycast
// Entry Point: 00d5bf08
// Size: 216 bytes
// Signature: undefined __thiscall Raycast(BBox * this, Vec3 * param_1, Vec3 * param_2, double * param_3)


/* HACD::BBox::Raycast(HACD::Vec3<double> const&, HACD::Vec3<double> const&, double&) const */

bool __thiscall HACD::BBox::Raycast(BBox *this,Vec3 *param_1,Vec3 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  
  dVar2 = *(double *)(this + 0x20) - *(double *)(this + 8);
  dVar4 = *(double *)(this + 0x18) - *(double *)this;
  dVar5 = *(double *)(this + 0x28) - *(double *)(this + 0x10);
  dVar1 = (*(double *)(this + 0x20) * 0.5 + *(double *)(this + 8) * 0.5) - *(double *)(param_1 + 8);
  uVar3 = NEON_fmadd(dVar4,dVar4,dVar2 * dVar2);
  dVar6 = (*(double *)(this + 0x18) * 0.5 + *(double *)this * 0.5) - *(double *)param_1;
  dVar4 = (double)NEON_fmadd(dVar5,dVar5,uVar3);
  dVar2 = (*(double *)(this + 0x28) * 0.5 + *(double *)(this + 0x10) * 0.5) -
          *(double *)(param_1 + 0x10);
  uVar7 = NEON_fmadd(dVar6,dVar6,dVar1 * dVar1);
  dVar4 = dVar4 * 0.25;
  uVar3 = NEON_fmadd(dVar6,*(double *)param_2,dVar1 * *(double *)(param_2 + 8));
  dVar8 = (double)NEON_fmadd(dVar2,dVar2,uVar7);
  dVar5 = (double)NEON_fmadd(dVar2,*(double *)(param_2 + 0x10),uVar3);
  dVar1 = dVar1 - *(double *)(param_2 + 8) * dVar5;
  dVar6 = dVar6 - *(double *)param_2 * dVar5;
  dVar2 = dVar2 - *(double *)(param_2 + 0x10) * dVar5;
  uVar3 = NEON_fmadd(dVar6,dVar6,dVar1 * dVar1);
  dVar2 = (double)NEON_fmadd(dVar2,dVar2,uVar3);
  dVar1 = SQRT(dVar8) - SQRT(dVar4);
  if (dVar8 <= dVar4) {
    dVar1 = 0.0;
  }
  *param_3 = dVar1;
  return dVar2 <= dVar4;
}


