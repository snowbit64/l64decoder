// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8900
// Entry Point: 006e8900
// Size: 284 bytes
// Signature: undefined FUN_006e8900(void)


void FUN_006e8900(long param_1)

{
  long lVar1;
  HeadTrackingDevice *this;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  local_38 = 0;
  EngineManager::getInstance();
  this = (HeadTrackingDevice *)EngineManager::getHeadTrackingDevice();
  if (this == (HeadTrackingDevice *)0x0) {
    uVar3 = 0;
    uVar7 = 0;
    uVar5 = 0;
    fVar2 = 0.0;
  }
  else {
    HeadTrackingDevice::getOrientation(this,(float *)&local_38);
    local_48 = local_38;
    local_40 = local_30;
    GsQuaternion::GsQuaternion((GsQuaternion *)&local_58,(Vector3 *)&local_48);
    uVar7 = NEON_fmadd(local_58,0,local_50);
    fVar6 = (float)NEON_fmadd(fStack_54,0x80000000,local_50 * -0.0);
    fVar8 = (float)NEON_fmadd(fStack_4c,0x80000000,uVar7);
    fVar2 = (float)NEON_fmadd(local_58,0,fStack_4c * 0.0);
    fVar4 = (float)NEON_fmadd(local_50,0x80000000,fStack_54 * 0.0 + local_58);
    uVar7 = NEON_fmsub(fVar6 - fStack_4c,fStack_54,local_58 * fVar8);
    uVar3 = NEON_fmsub(fVar6 - fStack_4c,fStack_4c,local_58 * fVar4);
    uVar7 = NEON_fmsub(fVar2 - fStack_54,fStack_4c,uVar7);
    uVar3 = NEON_fmsub(fVar8,local_50,uVar3);
    fVar4 = (float)NEON_fmadd(local_50,fVar4,uVar7);
    fVar2 = (float)NEON_fmadd(fStack_54,fVar2 - fStack_54,uVar3);
    fVar2 = atan2f(fVar4,fVar2);
    uVar5 = (undefined4)local_38;
    uVar7 = local_38._4_4_;
    uVar3 = local_30;
  }
  *(undefined4 *)(param_1 + 0x100) = uVar5;
  *(undefined4 *)(param_1 + 0x110) = uVar7;
  *(undefined4 *)(param_1 + 0x120) = uVar3;
  *(undefined4 *)(param_1 + 0x108) = 4;
  *(undefined4 *)(param_1 + 0x118) = 4;
  *(undefined4 *)(param_1 + 0x128) = 4;
  *(float *)(param_1 + 0x130) = fVar2;
  *(undefined4 *)(param_1 + 0x138) = 4;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


