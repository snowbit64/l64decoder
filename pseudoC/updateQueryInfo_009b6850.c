// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateQueryInfo
// Entry Point: 009b6850
// Size: 232 bytes
// Signature: undefined __thiscall updateQueryInfo(Bt2RaycastVehicle * this, float param_1)


/* Bt2RaycastVehicle::updateQueryInfo(float) */

void __thiscall Bt2RaycastVehicle::updateQueryInfo(Bt2RaycastVehicle *this,float param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = *(uint *)(this + 0x3c);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(this + 200);
  uVar6 = 0;
  if (0 < (int)uVar1) {
    puVar2 = (undefined4 *)(*(Bt2WheelInfo **)(this + 0x48) + 0x140);
    uVar3 = (ulong)uVar1;
    do {
      if (0.0 <= (float)puVar2[0x12]) {
        uVar6 = NEON_fmadd(*puVar2,puVar2[0x12],uVar6);
      }
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 0x68;
    } while (uVar3 != 0);
  }
  fVar8 = *(float *)(this + 0xd0);
  *(undefined4 *)(this + 0xd0) = 0;
  fVar7 = *(float *)(this + 0xd8);
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xe4) = uVar6;
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(this + 0x104);
  fVar9 = *(float *)(this + 0xc4);
  *(float *)(this + 0xf0) = fVar9 + fVar7 / (*(float *)(this + 0x98) * param_1);
  *(float *)(this + 0xf4) = fVar9;
  *(float *)(this + 0xec) = fVar9 + fVar8 / (*(float *)(this + 0x98) * param_1);
  if ((0 < (int)uVar1) &&
     (Bt2WheelInfo::updateQueryInfo(*(Bt2WheelInfo **)(this + 0x48),this), uVar1 != 1)) {
    lVar4 = (ulong)uVar1 - 1;
    lVar5 = 0x1a0;
    do {
      Bt2WheelInfo::updateQueryInfo((Bt2WheelInfo *)(*(long *)(this + 0x48) + lVar5),this);
      lVar4 = lVar4 + -1;
      lVar5 = lVar5 + 0x1a0;
    } while (lVar4 != 0);
  }
  return;
}


