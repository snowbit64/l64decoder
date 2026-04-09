// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWheelWidth
// Entry Point: 009b60cc
// Size: 252 bytes
// Signature: undefined __thiscall setWheelWidth(Bt2RaycastVehicle * this, uint param_1, float param_2, float param_3)


/* Bt2RaycastVehicle::setWheelWidth(unsigned int, float, float) */

void __thiscall
Bt2RaycastVehicle::setWheelWidth(Bt2RaycastVehicle *this,uint param_1,float param_2,float param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  lVar3 = *(long *)(this + 0x48);
  lVar4 = (long)(int)param_1;
  lVar1 = lVar3 + (long)(int)param_1 * 0x1a0;
  if (*(float *)(lVar1 + 0x100) != param_2) {
    *(float *)(lVar1 + 0x100) = param_2;
    plVar2 = *(long **)(lVar3 + lVar4 * 0x1a0 + 0x160);
    if (plVar2 != (long *)0x0) {
      fVar5 = *(float *)(lVar3 + lVar4 * 0x1a0 + 0xe0);
      fVar7 = (float)NEON_fmin(fVar5 * 0.4,0x3dcccccd);
      fVar5 = fVar5 - fVar7;
      *(float *)(plVar2 + 0xb) = fVar7;
      fVar7 = fVar5;
      if (param_2 <= fVar5) {
        fVar7 = param_2;
      }
      uVar6 = NEON_fminnm(fVar7,0x3e19999a);
      (**(code **)(*plVar2 + 0x58))(uVar6,plVar2);
      fVar7 = (float)(**(code **)(*plVar2 + 0x60))(plVar2);
      *(undefined4 *)(plVar2 + 7) = 0;
      *(float *)((long)plVar2 + 0x2c) = fVar5 - fVar7;
      *(float *)(plVar2 + 6) = param_2 - fVar7;
      *(float *)((long)plVar2 + 0x34) = fVar5 - fVar7;
    }
  }
  *(float *)(lVar3 + lVar4 * 0x1a0 + 0x104) = param_3;
  return;
}


