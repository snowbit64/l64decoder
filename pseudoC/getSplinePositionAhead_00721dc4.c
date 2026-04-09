// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSplinePositionAhead
// Entry Point: 00721dc4
// Size: 448 bytes
// Signature: undefined __thiscall getSplinePositionAhead(TrafficVehicle * this, float param_1, float param_2, Vector3 * param_3)


/* TrafficVehicle::getSplinePositionAhead(float, float, Vector3&) */

void __thiscall
TrafficVehicle::getSplinePositionAhead
          (TrafficVehicle *this,float param_1,float param_2,Vector3 *param_3)

{
  long lVar1;
  TrafficVehicle *this_00;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 local_98;
  float fStack_94;
  undefined4 local_90;
  undefined auStack_88 [16];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  this_00 = (TrafficVehicle *)Spline::getLength();
  plVar3 = *(long **)(this + 0x1e8);
  fVar8 = (1.0 - param_2) * extraout_s0;
  if (fVar8 < param_1) {
    uVar5 = *(uint *)(this + 0x1f0);
    param_2 = 0.0;
    fVar7 = param_1;
    do {
      plVar2 = *(long **)(this + (ulong)uVar5 * 8 + 0x1f8);
      if (*(long **)(this + (ulong)uVar5 * 8 + 0x1f8) == (long *)0x0) {
        plVar2 = (long *)getSuccessorRoad(this_00,(Road *)plVar3);
        *(long **)(this + (ulong)uVar5 * 8 + 0x1f8) = plVar2;
      }
      plVar3 = plVar2;
      uVar5 = uVar5 + 1;
      uVar5 = uVar5 - (uVar5 / 3 + ((uint)((ulong)uVar5 * 0xaaaaaaab >> 0x20) & 0xfffffffe));
      this_00 = (TrafficVehicle *)Spline::getLength();
      param_1 = extraout_s0_00;
    } while ((uVar5 != *(uint *)(this + 0x1f0)) &&
            (param_1 = fVar7 - fVar8, fVar7 = param_1, fVar8 = extraout_s0_00,
            extraout_s0_00 < param_1));
  }
  fVar8 = (float)Spline::getLength();
  uVar6 = NEON_fmin(param_2 + param_1 / fVar8,0x3f800000);
  (**(code **)(*(long *)plVar3[1] + 0x10))(uVar6,(long *)plVar3[1],&local_98,auStack_88);
  lVar4 = *plVar3;
  RawTransformGroup::updateWorldTransformation();
  uVar6 = NEON_fmadd(local_98,*(undefined4 *)(lVar4 + 0xb8),fStack_94 * *(float *)(lVar4 + 200));
  fVar8 = (float)NEON_fmadd(local_90,*(undefined4 *)(lVar4 + 0xd8),uVar6);
  *(float *)param_3 = fVar8 + *(float *)(lVar4 + 0xe8);
  uVar6 = NEON_fmadd(local_98,*(undefined4 *)(lVar4 + 0xbc),fStack_94 * *(float *)(lVar4 + 0xcc));
  fVar8 = (float)NEON_fmadd(local_90,*(undefined4 *)(lVar4 + 0xdc),uVar6);
  *(float *)(param_3 + 4) = *(float *)(lVar4 + 0xec) + fVar8;
  uVar6 = NEON_fmadd(local_98,*(undefined4 *)(lVar4 + 0xc0),fStack_94 * *(float *)(lVar4 + 0xd0));
  fVar8 = (float)NEON_fmadd(local_90,*(undefined4 *)(lVar4 + 0xe0),uVar6);
  *(float *)(param_3 + 8) = *(float *)(lVar4 + 0xf0) + fVar8;
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


