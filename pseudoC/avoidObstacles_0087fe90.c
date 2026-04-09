// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: avoidObstacles
// Entry Point: 0087fe90
// Size: 504 bytes
// Signature: undefined __thiscall avoidObstacles(AnimalSteering * this, float param_1)


/* AnimalSteering::avoidObstacles(float) */

void __thiscall AnimalSteering::avoidObstacles(AnimalSteering *this,float param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_60 [2];
  float local_58;
  float local_50;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this[0x79] = (AnimalSteering)0x0;
  if (*(int *)this == 2) {
LAB_0087fec8:
    *(undefined8 *)(this + 0x1c) = *(undefined8 *)(this + 0x24);
  }
  else {
    if (*(long *)(this + 0xb0) == 0) {
      if (*(ObstacleWallDetector **)(this + 0xb8) == (ObstacleWallDetector *)0x0) goto LAB_0088005c;
      local_70 = *(undefined4 *)(this + 0x24);
      local_68 = *(undefined4 *)(this + 0x28);
      local_6c = 0;
      ObstacleWallDetector::getFreeDirection
                (*(ObstacleWallDetector **)(this + 0xb8),(Vector3 *)&local_70,(Vector3 *)local_60);
      uVar2 = NEON_fmov(0x41200000,4);
      uVar2 = CONCAT44(local_58 * (float)((ulong)uVar2 >> 0x20) +
                       (float)((ulong)*(undefined8 *)(this + 4) >> 0x20),
                       local_60[0] * (float)uVar2 + (float)*(undefined8 *)(this + 4));
    }
    else {
      fVar6 = 1.0;
      fVar4 = *(float *)(this + 0x28) - *(float *)(this + 8);
      fVar5 = *(float *)(this + 0x24) - *(float *)(this + 4);
      fVar7 = (float)NEON_fmadd(fVar5,fVar5,fVar4 * fVar4);
      if (1e-06 < fVar7) {
        fVar6 = 1.0 / SQRT(fVar7);
      }
      fVar5 = fVar5 * *(float *)(this + 0x54) * fVar6;
      fVar4 = fVar4 * *(float *)(this + 0x54) * fVar6;
      ObstacleAvoidance::computeNewVelocity
                (*(float *)(this + 4),*(float *)(this + 8),fVar5,fVar4,param_1,
                 *(long *)(this + 0xb0),&local_50);
      if ((0.0001 <= ABS(local_50)) || (0.0001 <= ABS(local_4c))) {
        if ((ABS(fVar5 - local_50) < 0.001) && (ABS(fVar4 - local_4c) < 0.001)) goto LAB_0087fec8;
        uVar2 = NEON_fmov(0x41200000,4);
        local_50 = local_50 * (float)uVar2;
        local_4c = local_4c * (float)((ulong)uVar2 >> 0x20);
      }
      else {
        if (*(ObstacleWallDetector **)(this + 0xb8) == (ObstacleWallDetector *)0x0) {
          uVar2 = *(undefined8 *)(this + 0xc);
        }
        else {
          local_70 = *(undefined4 *)(this + 0x24);
          local_68 = *(undefined4 *)(this + 0x28);
          local_6c = 0;
          ObstacleWallDetector::getFreeDirection
                    (*(ObstacleWallDetector **)(this + 0xb8),(Vector3 *)&local_70,
                     (Vector3 *)local_60);
          uVar2 = CONCAT44(local_58,local_60[0]);
        }
        uVar3 = NEON_fmov(0x41200000,4);
        local_50 = (float)uVar2 * (float)uVar3;
        local_4c = (float)((ulong)uVar2 >> 0x20) * (float)((ulong)uVar3 >> 0x20);
      }
      uVar2 = CONCAT44(local_4c + (float)((ulong)*(undefined8 *)(this + 4) >> 0x20),
                       local_50 + (float)*(undefined8 *)(this + 4));
      this[0x79] = (AnimalSteering)0x1;
    }
    *(undefined8 *)(this + 0x1c) = uVar2;
  }
LAB_0088005c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


