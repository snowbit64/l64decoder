// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateQueryInfo
// Entry Point: 009a71b8
// Size: 312 bytes
// Signature: undefined __thiscall updateQueryInfo(Bt2WheelInfo * this, Bt2RaycastVehicle * param_1)


/* Bt2WheelInfo::updateQueryInfo(Bt2RaycastVehicle*) */

void __thiscall Bt2WheelInfo::updateQueryInfo(Bt2WheelInfo *this,Bt2RaycastVehicle *param_1)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar2 = *(long *)(this + 0x20);
  *(undefined4 *)(this + 100) = *(undefined4 *)(this + 0x140);
  *(undefined8 *)(this + 0x70) = 0xffffffff00000000;
  this[0x68] = (Bt2WheelInfo)(lVar2 != 0);
  if ((((lVar2 != 0) && (puVar3 = *(uint **)(lVar2 + 0x108), puVar3 != (uint *)0x0)) &&
      (uVar1 = *puVar3, (uVar1 & 0x101) == 1)) &&
     (*(undefined4 *)(this + 0x70) = *(undefined4 *)(*(long *)(puVar3 + 2) + 0x18),
     (uVar1 >> 4 & 1) != 0)) {
    *(uint *)(this + 0x74) = *(uint *)(this + 0x28) >> 0x1f;
  }
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)this;
  fVar4 = *(float *)(this + 0x18c);
  *(float *)(this + 0x6c) = fVar4;
  lVar2 = *(long *)(param_1 + (long)*(int *)(this + 0x180) * 8 + 8);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(this + 400);
  lVar2 = *(long *)(lVar2 + 0x228);
  uVar9 = *(undefined8 *)(lVar2 + 0x68);
  fVar7 = (fVar4 * *(float *)(this + 0xa8) + *(float *)(this + 0x110)) - *(float *)(lVar2 + 0x8c);
  fVar5 = (fVar4 * *(float *)(this + 0xa4) + *(float *)(this + 0x10c)) - *(float *)(lVar2 + 0x88);
  uVar11 = *(undefined8 *)(lVar2 + 0x58);
  fVar4 = (fVar4 * *(float *)(this + 0xac) + *(float *)(this + 0x114)) - *(float *)(lVar2 + 0x90);
  uVar10 = *(undefined8 *)(lVar2 + 0x78);
  uVar6 = NEON_fmadd(*(undefined4 *)(lVar2 + 0x60),fVar5,fVar7 * *(float *)(lVar2 + 0x70));
  uVar8 = *(undefined4 *)(lVar2 + 0x80);
  *(undefined4 *)(this + 0x5c) = 0;
  uVar6 = NEON_fmadd(uVar8,fVar4,uVar6);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x144);
  *(ulong *)(this + 0x50) =
       CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar7 + (float)((ulong)uVar11 >> 0x20) * fVar5 +
                (float)((ulong)uVar10 >> 0x20) * fVar4,
                (float)uVar9 * fVar7 + (float)uVar11 * fVar5 + (float)uVar10 * fVar4);
  *(undefined4 *)(this + 0x58) = uVar6;
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(this + 0x198);
  fVar4 = atanf(*(float *)(this + 0x194));
  *(float *)(this + 0x80) = fVar4;
  return;
}


