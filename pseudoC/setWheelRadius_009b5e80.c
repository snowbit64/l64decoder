// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWheelRadius
// Entry Point: 009b5e80
// Size: 236 bytes
// Signature: undefined __thiscall setWheelRadius(Bt2RaycastVehicle * this, uint param_1, float param_2)


/* Bt2RaycastVehicle::setWheelRadius(unsigned int, float) */

void __thiscall
Bt2RaycastVehicle::setWheelRadius(Bt2RaycastVehicle *this,uint param_1,float param_2)

{
  long lVar1;
  float *pfVar2;
  long *plVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = *(long *)(this + 0x48);
  pfVar2 = (float *)(lVar1 + (long)(int)param_1 * 0x1a0 + 0xe0);
  if (*pfVar2 != param_2) {
    *pfVar2 = param_2;
    plVar3 = *(long **)(lVar1 + (long)(int)param_1 * 0x1a0 + 0x160);
    if (plVar3 != (long *)0x0) {
      fVar5 = (float)NEON_fmin(param_2 * 0.4,0x3dcccccd);
      fVar7 = *(float *)(lVar1 + (long)(int)param_1 * 0x1a0 + 0x100);
      fVar6 = param_2 - fVar5;
      *(float *)(plVar3 + 0xb) = fVar5;
      fVar5 = fVar6;
      if (fVar7 <= fVar6) {
        fVar5 = fVar7;
      }
      uVar4 = NEON_fminnm(fVar5,0x3e19999a);
      (**(code **)(*plVar3 + 0x58))(uVar4,plVar3);
      fVar5 = (float)(**(code **)(*plVar3 + 0x60))(plVar3);
      *(undefined4 *)(plVar3 + 7) = 0;
      *(float *)((long)plVar3 + 0x2c) = fVar6 - fVar5;
      *(float *)(plVar3 + 6) = fVar7 - fVar5;
      *(float *)((long)plVar3 + 0x34) = fVar6 - fVar5;
    }
    updateWheelsMotorSpeedContribution();
    return;
  }
  return;
}


