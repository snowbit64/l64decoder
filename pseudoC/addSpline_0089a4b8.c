// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSpline
// Entry Point: 0089a4b8
// Size: 328 bytes
// Signature: undefined __thiscall addSpline(PedestrianSpawnGrid * this, PedestrianSpline * param_1)


/* PedestrianSpawnGrid::addSpline(PedestrianSpline*) */

void __thiscall PedestrianSpawnGrid::addSpline(PedestrianSpawnGrid *this,PedestrianSpline *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined auStack_a0 [16];
  float local_90;
  float fStack_8c;
  float local_88;
  PedestrianSpline *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  float local_68;
  float local_64;
  undefined4 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar7 = *(float *)(param_1 + 0x24) * *(float *)(this + 0x18) * 0.5;
  fVar5 = (float)Spline::getLength();
  fVar3 = 0.5;
  fVar2 = 0.5;
  fVar8 = 0.6;
  if (*(float *)(this + 0x18) <= fVar5) {
    fVar3 = fVar7;
    fVar2 = fVar7;
    fVar8 = 1.0 - fVar7;
  }
  while (fVar3 < fVar8) {
    local_64 = 0.0;
    uStack_60 = 0;
    local_80 = (PedestrianSpline *)0x0;
    uStack_78 = 0;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
              (fVar3,*(long **)(param_1 + 0x10),&local_90,auStack_a0);
    lVar4 = *(long *)param_1;
    RawTransformGroup::updateWorldTransformation();
    uVar6 = NEON_fmadd(local_90,*(undefined4 *)(lVar4 + 0xc0),fStack_8c * *(float *)(lVar4 + 0xd0));
    local_68 = (float)NEON_fmadd(local_88,*(undefined4 *)(lVar4 + 0xe0),uVar6);
    local_70 = CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 200) >> 0x20) * fStack_8c +
                        (float)((ulong)*(undefined8 *)(lVar4 + 0xb8) >> 0x20) * local_90 +
                        (float)((ulong)*(undefined8 *)(lVar4 + 0xd8) >> 0x20) * local_88 +
                        (float)((ulong)*(undefined8 *)(lVar4 + 0xe8) >> 0x20),
                        (float)*(undefined8 *)(lVar4 + 200) * fStack_8c +
                        (float)*(undefined8 *)(lVar4 + 0xb8) * local_90 +
                        (float)*(undefined8 *)(lVar4 + 0xd8) * local_88 +
                        (float)*(undefined8 *)(lVar4 + 0xe8));
    local_68 = *(float *)(lVar4 + 0xf0) + local_68;
    local_80 = param_1;
    local_64 = fVar3;
    FUN_0089a600(this,&local_80);
    fVar3 = fVar2 + fVar3;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


