// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateOvertake
// Entry Point: 00721b2c
// Size: 664 bytes
// Signature: undefined __thiscall updateOvertake(TrafficVehicle * this, float param_1)


/* TrafficVehicle::updateOvertake(float) */

void __thiscall TrafficVehicle::updateOvertake(TrafficVehicle *this,float param_1)

{
  uint uVar1;
  long lVar2;
  TrafficVehicle *pTVar3;
  undefined8 uVar4;
  Road *pRVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  switch(*(undefined4 *)(this + 0x378)) {
  case 1:
    if (1.0 <= (*(float *)(this + 0x214) - *(float *)(this + 0x388)) /
               (*(float *)(this + 0x38c) - *(float *)(this + 0x388))) {
      *(undefined4 *)(this + 0x378) = 2;
    }
    break;
  case 2:
    *(float *)(this + 0x3a0) = *(float *)(this + 0x3a0) - param_1;
    break;
  case 3:
    if (1.0 <= (*(float *)(this + 0x214) - *(float *)(this + 0x388)) /
               (*(float *)(this + 0x38c) - *(float *)(this + 0x388))) {
      *(undefined4 *)(this + 0x378) = 0;
    }
    break;
  case 4:
    fVar8 = *(float *)(this + 0x214);
    if (1.0 <= (fVar8 - *(float *)(this + 0x388)) /
               (*(float *)(this + 0x38c) - *(float *)(this + 0x388))) {
      *(float *)(this + 0x388) = fVar8;
      *(undefined4 *)(this + 0x378) = 5;
      fVar10 = (float)Spline::getLength();
      *(float *)(this + 0x38c) = fVar8 + 3.0 / fVar10;
      plVar7 = (long *)(*(long *)(*(long *)(this + 0x48) + 0x18) +
                       (ulong)*(uint *)(*(long *)(this + 0x380) + 0x10) * 0x88);
      lVar6 = *plVar7;
      RawTransformGroup::updateWorldTransformation();
      fVar8 = *(float *)(this + 0x358) - *(float *)(lVar6 + 0xec);
      fVar10 = *(float *)(this + 0x354) - *(float *)(lVar6 + 0xe8);
      fVar13 = *(float *)(this + 0x35c) - *(float *)(lVar6 + 0xf0);
      uVar11 = NEON_fmadd(fVar10,*(undefined4 *)(lVar6 + 0xb8),fVar8 * *(float *)(lVar6 + 0xbc));
      uVar12 = NEON_fmadd(fVar10,*(undefined4 *)(lVar6 + 200),fVar8 * *(float *)(lVar6 + 0xcc));
      uVar9 = NEON_fmadd(fVar10,*(undefined4 *)(lVar6 + 0xd8),fVar8 * *(float *)(lVar6 + 0xdc));
      local_58 = NEON_fmadd(fVar13,*(undefined4 *)(lVar6 + 0xc0),uVar11);
      uStack_54 = NEON_fmadd(fVar13,*(undefined4 *)(lVar6 + 0xd0),uVar12);
      local_60 = NEON_fmadd(fVar13,*(undefined4 *)(lVar6 + 0xe0),uVar9);
      local_68 = CONCAT44(uStack_54,local_58);
      plVar7 = (long *)plVar7[1];
      local_50 = local_60;
      fVar8 = (float)(**(code **)(*plVar7 + 0x20))(0x3c23d70a,plVar7,&local_68,&local_58);
      *(float *)(this + 0x394) = fVar8;
      fVar10 = (float)Spline::getLength();
      *(float *)(this + 0x398) = fVar8 + 3.0 / fVar10;
    }
    break;
  case 5:
    fVar8 = (*(float *)(this + 0x214) - *(float *)(this + 0x388)) /
            (*(float *)(this + 0x38c) - *(float *)(this + 0x388));
    if (1.0 <= fVar8) {
      *(undefined4 *)(this + 0x378) = 0;
      lVar6 = *(long *)(*(long *)(this + 0x48) + 0x18);
      uVar1 = *(uint *)(*(long *)(this + 0x380) + 0x10);
      *(undefined8 *)(this + 0x380) = 0;
      *(undefined4 *)(this + 0x1f0) = 0;
      uVar9 = NEON_fmadd(*(float *)(this + 0x398) - *(float *)(this + 0x394),fVar8,
                         *(float *)(this + 0x394));
      pRVar5 = (Road *)(lVar6 + (ulong)uVar1 * 0x88);
      *(undefined4 *)(this + 0x214) = uVar9;
      *(Road **)(this + 0x1e8) = pRVar5;
      pTVar3 = (TrafficVehicle *)getSuccessorRoad(this,pRVar5);
      *(TrafficVehicle **)(this + 0x1f8) = pTVar3;
      pTVar3 = (TrafficVehicle *)getSuccessorRoad(pTVar3,(Road *)pTVar3);
      *(TrafficVehicle **)(this + 0x200) = pTVar3;
      uVar4 = getSuccessorRoad(pTVar3,(Road *)pTVar3);
      *(undefined8 *)(this + 0x208) = uVar4;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


