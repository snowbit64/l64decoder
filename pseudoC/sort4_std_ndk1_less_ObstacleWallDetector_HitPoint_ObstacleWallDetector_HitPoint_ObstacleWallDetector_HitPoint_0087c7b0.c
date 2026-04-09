// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<std::__ndk1::__less<ObstacleWallDetector::HitPoint,ObstacleWallDetector::HitPoint>&,ObstacleWallDetector::HitPoint*>
// Entry Point: 0087c7b0
// Size: 488 bytes
// Signature: uint __cdecl __sort4<std::__ndk1::__less<ObstacleWallDetector::HitPoint,ObstacleWallDetector::HitPoint>&,ObstacleWallDetector::HitPoint*>(HitPoint * param_1, HitPoint * param_2, HitPoint * param_3, HitPoint * param_4, __less * param_5)


/* unsigned int std::__ndk1::__sort4<std::__ndk1::__less<ObstacleWallDetector::HitPoint,
   ObstacleWallDetector::HitPoint>&,
   ObstacleWallDetector::HitPoint*>(ObstacleWallDetector::HitPoint*,
   ObstacleWallDetector::HitPoint*, ObstacleWallDetector::HitPoint*,
   ObstacleWallDetector::HitPoint*, std::__ndk1::__less<ObstacleWallDetector::HitPoint,
   ObstacleWallDetector::HitPoint>&) */

uint std::__ndk1::
     __sort4<std::__ndk1::__less<ObstacleWallDetector::HitPoint,ObstacleWallDetector::HitPoint>&,ObstacleWallDetector::HitPoint*>
               (HitPoint *param_1,HitPoint *param_2,HitPoint *param_3,HitPoint *param_4,
               __less *param_5)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  fVar6 = *(float *)(param_2 + 0x10);
  if (*(float *)(param_1 + 0x10) <= fVar6) {
    if (fVar6 <= *(float *)(param_3 + 0x10)) {
      uVar3 = 0;
      goto LAB_0087c8cc;
    }
    uVar7 = *(undefined8 *)param_3;
    uVar5 = *(undefined4 *)(param_3 + 0x10);
    uVar9 = *(undefined8 *)(param_2 + 8);
    uVar8 = *(undefined8 *)param_2;
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)param_2 = uVar7;
    *(undefined4 *)(param_2 + 0x10) = uVar5;
    *(undefined8 *)(param_3 + 8) = uVar9;
    *(undefined8 *)param_3 = uVar8;
    *(undefined4 *)(param_3 + 0x10) = uVar1;
    if (*(float *)(param_2 + 0x10) < *(float *)(param_1 + 0x10)) {
      uVar7 = *(undefined8 *)param_2;
      uVar3 = 2;
      uVar5 = *(undefined4 *)(param_2 + 0x10);
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar8 = *(undefined8 *)param_1;
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar7;
      *(undefined4 *)(param_1 + 0x10) = uVar5;
      *(undefined8 *)(param_2 + 8) = uVar9;
      *(undefined8 *)param_2 = uVar8;
      *(undefined4 *)(param_2 + 0x10) = uVar1;
      goto LAB_0087c8cc;
    }
LAB_0087c8c8:
    uVar3 = 1;
  }
  else {
    if (fVar6 <= *(float *)(param_3 + 0x10)) {
      uVar7 = *(undefined8 *)param_2;
      uVar5 = *(undefined4 *)(param_2 + 0x10);
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar8 = *(undefined8 *)param_1;
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar7;
      *(undefined4 *)(param_1 + 0x10) = uVar5;
      *(undefined8 *)(param_2 + 8) = uVar9;
      *(undefined8 *)param_2 = uVar8;
      *(undefined4 *)(param_2 + 0x10) = uVar1;
      if (*(float *)(param_2 + 0x10) <= *(float *)(param_3 + 0x10)) goto LAB_0087c8c8;
      uVar7 = *(undefined8 *)param_3;
      uVar3 = 2;
      uVar1 = *(undefined4 *)(param_3 + 0x10);
      uVar9 = *(undefined8 *)(param_2 + 8);
      uVar8 = *(undefined8 *)param_2;
      uVar5 = *(undefined4 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar7;
      *(undefined4 *)(param_2 + 0x10) = uVar1;
    }
    else {
      uVar7 = *(undefined8 *)param_3;
      uVar3 = 1;
      uVar1 = *(undefined4 *)(param_3 + 0x10);
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar8 = *(undefined8 *)param_1;
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_1 = uVar7;
      *(undefined4 *)(param_1 + 0x10) = uVar1;
    }
    *(undefined8 *)(param_3 + 8) = uVar9;
    *(undefined8 *)param_3 = uVar8;
    *(undefined4 *)(param_3 + 0x10) = uVar5;
  }
LAB_0087c8cc:
  if (*(float *)(param_4 + 0x10) < *(float *)(param_3 + 0x10)) {
    uVar7 = *(undefined8 *)param_4;
    uVar5 = *(undefined4 *)(param_4 + 0x10);
    uVar9 = *(undefined8 *)(param_3 + 8);
    uVar8 = *(undefined8 *)param_3;
    uVar1 = *(undefined4 *)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)param_3 = uVar7;
    *(undefined4 *)(param_3 + 0x10) = uVar5;
    *(undefined8 *)(param_4 + 8) = uVar9;
    *(undefined8 *)param_4 = uVar8;
    *(undefined4 *)(param_4 + 0x10) = uVar1;
    if (*(float *)(param_2 + 0x10) <= *(float *)(param_3 + 0x10)) {
      uVar3 = uVar3 + 1;
    }
    else {
      uVar7 = *(undefined8 *)param_3;
      uVar5 = *(undefined4 *)(param_3 + 0x10);
      uVar9 = *(undefined8 *)(param_2 + 8);
      uVar8 = *(undefined8 *)param_2;
      uVar1 = *(undefined4 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)param_2 = uVar7;
      *(undefined4 *)(param_2 + 0x10) = uVar5;
      *(undefined8 *)(param_3 + 8) = uVar9;
      *(undefined8 *)param_3 = uVar8;
      *(undefined4 *)(param_3 + 0x10) = uVar1;
      if (*(float *)(param_1 + 0x10) <= *(float *)(param_2 + 0x10)) {
        uVar3 = uVar3 + 2;
      }
      else {
        uVar7 = *(undefined8 *)param_2;
        uVar3 = uVar3 + 3;
        uVar5 = *(undefined4 *)(param_2 + 0x10);
        uVar9 = *(undefined8 *)(param_1 + 8);
        uVar8 = *(undefined8 *)param_1;
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)param_1 = uVar7;
        *(undefined4 *)(param_1 + 0x10) = uVar5;
        *(undefined8 *)(param_2 + 8) = uVar9;
        *(undefined8 *)param_2 = uVar8;
        *(undefined4 *)(param_2 + 0x10) = uVar1;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


