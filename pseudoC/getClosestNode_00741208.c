// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClosestNode
// Entry Point: 00741208
// Size: 236 bytes
// Signature: undefined __thiscall getClosestNode(VehicleNavigationGridAdapter * this, PlanarPose * param_1)


/* VehicleNavigationGridAdapter::getClosestNode(PlanarPose const&) const */

ulong __thiscall
VehicleNavigationGridAdapter::getClosestNode(VehicleNavigationGridAdapter *this,PlanarPose *param_1)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar7 = *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0xc);
  fVar8 = fVar7 + fVar4 * 0.0;
  fVar5 = fVar4 * 0.0 - fVar7;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar11 = (float)NEON_fmadd(fVar7,0x3f3504f3,fVar4 * -0.7071068);
  fVar10 = (float)NEON_fmadd(fVar7,0xbf3504f3,fVar4 * -0.7071068);
  fVar6 = fVar11;
  if (fVar11 <= fVar8) {
    fVar6 = fVar8;
  }
  fVar12 = (float)NEON_fnmsub(fVar7,0,fVar4);
  fVar3 = (float)NEON_fmadd(fVar7,0,fVar4);
  fVar9 = fVar12;
  if (fVar12 <= fVar6) {
    fVar9 = fVar6;
  }
  uVar1 = 0x200000000;
  if (fVar12 <= fVar6) {
    uVar1 = (ulong)(fVar8 < fVar11) << 0x20;
  }
  fVar8 = fVar10;
  if (fVar10 <= fVar9) {
    fVar8 = fVar9;
  }
  uVar2 = 0x300000000;
  if (fVar10 <= fVar9) {
    uVar2 = uVar1;
  }
  fVar10 = (float)NEON_fmadd(fVar7,0xbf3504f3,fVar4 * 0.7071068);
  fVar6 = fVar5;
  if (fVar5 <= fVar8) {
    fVar6 = fVar8;
  }
  uVar1 = 0x400000000;
  if (fVar5 <= fVar8) {
    uVar1 = uVar2;
  }
  fVar8 = fVar10;
  if (fVar10 <= fVar6) {
    fVar8 = fVar6;
  }
  uVar2 = 0x500000000;
  if (fVar10 <= fVar6) {
    uVar2 = uVar1;
  }
  fVar5 = fVar3;
  if (fVar3 <= fVar8) {
    fVar5 = fVar8;
  }
  fVar4 = (float)NEON_fmadd(fVar7,0x3f3504f3,fVar4 * 0.7071068);
  uVar1 = 0x600000000;
  if (fVar3 <= fVar8) {
    uVar1 = uVar2;
  }
  uVar2 = 0x700000000;
  if (fVar4 <= fVar5) {
    uVar2 = uVar1;
  }
  return uVar2 | (ulong)(uint)(int)(*(float *)(this + 0x24) *
                                   (*(float *)(this + 0x34) + *(float *)(param_1 + 4))) << 0x10 |
         (ulong)(uint)(int)((*(float *)param_1 + *(float *)(this + 0x34)) * *(float *)(this + 0x24))
  ;
}


