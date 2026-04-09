// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateOvertakeDistance
// Entry Point: 0071fed4
// Size: 432 bytes
// Signature: undefined __thiscall calculateOvertakeDistance(TrafficVehicle * this, bool param_1, float param_2, bool param_3)


/* TrafficVehicle::calculateOvertakeDistance(bool, float, bool) */

float __thiscall
TrafficVehicle::calculateOvertakeDistance
          (TrafficVehicle *this,bool param_1,float param_2,bool param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = *(float *)(this + 0x220);
  fVar2 = fVar6 * 2000.0 + 15.0;
  if (((*(int *)(this + 0x378) == 0) && (!param_3)) && (fVar2 = fVar6 * 2000.0 + fVar2, param_1)) {
    lVar1 = *(long *)(this + 0x28);
    fVar7 = *(float *)(*(long *)(this + 0x1e8) + 0x44);
    fVar3 = *(float *)(this + 0x224) * *(float *)(*(long *)(this + 0x1e8) + 0x40);
    fVar4 = (float)*(undefined8 *)(lVar1 + 0xfc) - (float)*(undefined8 *)(lVar1 + 0xf0);
    fVar5 = (float)((ulong)*(undefined8 *)(lVar1 + 0xfc) >> 0x20) -
            (float)((ulong)*(undefined8 *)(lVar1 + 0xf0) >> 0x20);
    if (fVar3 <= fVar7) {
      fVar7 = fVar3;
    }
    fVar3 = *(float *)(lVar1 + 0x104) - *(float *)(lVar1 + 0xf8);
    if (fVar5 <= fVar4) {
      fVar5 = fVar4;
    }
    if (fVar3 <= fVar5) {
      fVar3 = fVar5;
    }
    if (0.0 <= param_2) {
      fVar5 = (float)NEON_fmsub(param_2,0x447a0000,fVar6 * 1000.0);
      fVar5 = (float)NEON_fmadd(fVar6 * 1000.0,fVar5 * fVar3,fVar3);
    }
    else if (((0.001 <= ABS(*(float *)(lVar1 + 0x108))) || (0.001 <= ABS(*(float *)(lVar1 + 0x10c)))
             ) || (fVar5 = fVar3, 0.001 <= ABS(*(float *)(lVar1 + 0x110)))) {
      fVar6 = fVar6 * 1000.0;
      fVar8 = fVar6 * *(float *)(this + 0x17c) - *(float *)(lVar1 + 0x10c);
      fVar5 = fVar6 * *(float *)(this + 0x178) - *(float *)(lVar1 + 0x108);
      fVar4 = fVar6 * *(float *)(this + 0x180) - *(float *)(lVar1 + 0x110);
      uVar9 = NEON_fmadd(fVar5,fVar5,fVar8 * fVar8);
      fVar10 = (float)NEON_fmadd(fVar4,fVar4,uVar9);
      fVar10 = SQRT(fVar10);
      if (0.0001 <= fVar10) {
        fVar11 = 1.0 / fVar10;
        fVar5 = fVar5 * fVar11;
        fVar8 = fVar8 * fVar11;
        fVar4 = fVar4 * fVar11;
      }
      uVar9 = NEON_fmadd(fVar5,*(float *)(this + 0x178),*(float *)(this + 0x17c) * fVar8);
      fVar4 = (float)NEON_fmadd(fVar4,*(float *)(this + 0x180),uVar9);
      fVar5 = (float)NEON_fmadd(fVar6,fVar3 * fVar10,fVar3);
      if (fVar4 <= 0.0) {
        fVar5 = fVar3;
      }
    }
    fVar6 = (fVar7 * fVar7 * 0.5) / 2e-05;
    fVar2 = fVar2 + fVar6 + fVar6 + fVar5;
  }
  return fVar2;
}


