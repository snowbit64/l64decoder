// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeClippedVolumes
// Entry Point: 00ecb480
// Size: 184 bytes
// Signature: undefined __thiscall ComputeClippedVolumes(VoxelSet * this, Plane * param_1, double * param_2, double * param_3)


/* VHACD::VoxelSet::ComputeClippedVolumes(VHACD::Plane const&, double&, double&) const */

void __thiscall
VHACD::VoxelSet::ComputeClippedVolumes
          (VoxelSet *this,Plane *param_1,double *param_2,double *param_3)

{
  short *psVar1;
  short *psVar2;
  VoxelSet *pVVar3;
  long lVar4;
  ulong uVar5;
  short *psVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar4 = *(long *)(this + 0xa08);
  *param_3 = 0.0;
  *param_2 = 0.0;
  if (lVar4 != 0) {
    uVar5 = 0;
    pVVar3 = this + 0x9c0;
    if (*(long *)(this + 0xa10) != 8) {
      pVVar3 = *(VoxelSet **)(this + 0xa00);
    }
    uVar8 = *(undefined8 *)(this + 0x9b8);
    psVar6 = (short *)(pVVar3 + 2);
    lVar7 = lVar4;
    do {
      psVar2 = psVar6 + -1;
      psVar1 = psVar6 + 1;
      dVar9 = (double)NEON_fmadd((double)(int)*psVar6,uVar8,*(undefined8 *)(this + 0x9a8));
      psVar6 = psVar6 + 4;
      uVar10 = NEON_fmadd((double)(int)*psVar2,uVar8,*(undefined8 *)(this + 0x9a0));
      uVar11 = NEON_fmadd((double)(int)*psVar1,uVar8,*(undefined8 *)(this + 0x9b0));
      uVar10 = NEON_fmadd(*(undefined8 *)param_1,uVar10,dVar9 * *(double *)(param_1 + 8));
      dVar9 = (double)NEON_fmadd(*(undefined8 *)(param_1 + 0x10),uVar11,uVar10);
      if (0.0 <= *(double *)(param_1 + 0x18) + dVar9) {
        uVar5 = uVar5 + 1;
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    *param_2 = *(double *)(this + 0xa18) * (double)(unkuint9)uVar5;
    *param_3 = *(double *)(this + 0xa18) * (double)(unkuint9)(lVar4 - uVar5);
  }
  return;
}


