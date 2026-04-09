// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spawn
// Entry Point: 0071dd80
// Size: 540 bytes
// Signature: undefined __thiscall spawn(TrafficVehicle * this, Vector3 * param_1)


/* TrafficVehicle::spawn(Vector3&) */

void __thiscall TrafficVehicle::spawn(TrafficVehicle *this,Vector3 *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  Bt2ScenegraphPhysicsContext *this_00;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float local_88;
  float local_84;
  float fStack_80;
  undefined auStack_78 [16];
  undefined4 local_68;
  float fStack_64;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar7 = 0;
  lVar4 = *(long *)(this + 0x48);
  *(undefined8 *)(this + 0x1e0) = 0;
  uVar6 = *(undefined8 *)(lVar4 + 0x18);
  *(undefined4 *)(this + 0x168) = 0x7f7fffff;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1e8) = uVar6;
  *(undefined4 *)(this + 0x214) = 0;
  do {
    fVar8 = (float)MathUtil::getRandomMinMax(0.0,*(float *)(lVar4 + 4));
    uVar1 = *(uint *)(*(long *)(this + 0x48) + 8);
    uVar5 = (ulong)uVar1;
    if (uVar1 != 0) {
      lVar4 = *(long *)(*(long *)(this + 0x48) + 0x18);
      do {
        fVar10 = *(float *)(lVar4 + 0x3c);
        if (fVar8 <= fVar10) {
          *(long *)(this + 0x1e8) = lVar4;
          fVar9 = (float)Spline::getLength();
          *(float *)(this + 0x214) = (fVar10 - fVar8) / fVar9;
          break;
        }
        lVar4 = lVar4 + 0x88;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    lVar4 = *(long *)(this + 0x1e8);
    if ((*(long *)(lVar4 + 0x10) == 0) ||
       (((*(uint *)(lVar4 + 0x18) | *(uint *)(lVar4 + 0x1c)) &
        *(uint *)(*(long *)(lVar4 + 0x10) + 0xc)) == 0)) {
      (**(code **)(**(long **)(lVar4 + 8) + 0x10))
                (*(undefined4 *)(this + 0x214),*(long **)(lVar4 + 8),&local_68,auStack_78);
      lVar4 = **(long **)(this + 0x1e8);
      RawTransformGroup::updateWorldTransformation();
      uVar11 = NEON_fmadd(local_68,*(undefined4 *)(lVar4 + 0xbc),
                          fStack_64 * *(float *)(lVar4 + 0xcc));
      uVar12 = NEON_fmadd(local_68,*(undefined4 *)(lVar4 + 0xb8),fStack_64 * *(float *)(lVar4 + 200)
                         );
      fVar8 = (float)NEON_fmadd(local_60,*(undefined4 *)(lVar4 + 0xdc),uVar11);
      local_88 = (float)NEON_fmadd(local_60,*(undefined4 *)(lVar4 + 0xd8),uVar12);
      uVar11 = NEON_fmadd(local_68,*(undefined4 *)(lVar4 + 0xc0),
                          fStack_64 * *(float *)(lVar4 + 0xd0));
      local_88 = local_88 + *(float *)(lVar4 + 0xe8);
      fStack_80 = (float)NEON_fmadd(local_60,*(undefined4 *)(lVar4 + 0xe0),uVar11);
      local_84 = *(float *)(lVar4 + 0xec) + fVar8 + 0.5;
      fStack_80 = *(float *)(lVar4 + 0xf0) + fStack_80;
      uVar11 = NEON_fmadd(local_84 - *(float *)(param_1 + 4),local_84 - *(float *)(param_1 + 4),
                          (local_88 - *(float *)param_1) * (local_88 - *(float *)param_1));
      fVar8 = (float)NEON_fmadd(fStack_80 - *(float *)(param_1 + 8),
                                fStack_80 - *(float *)(param_1 + 8),uVar11);
      if (30625.0 < fVar8) {
        ScenegraphPhysicsContextManager::getInstance();
        this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
        iVar3 = Bt2ScenegraphPhysicsContext::overlapSphereShapes
                          (this_00,(Vector3 *)&local_88,*(float *)(this + 0x44),
                           (IPhysicsEntityReport *)this,0xffffffff,true,false,false,0);
        if (iVar3 == 0) {
          this[0x40] = (TrafficVehicle)0x0;
          goto LAB_0071df64;
        }
      }
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == 0x10) {
      if (this[0x40] == (TrafficVehicle)0x0) {
LAB_0071df64:
        postSpawn();
      }
      if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar4 = *(long *)(this + 0x48);
  } while( true );
}


