// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWheelShapeSteeringCenter
// Entry Point: 009a413c
// Size: 400 bytes
// Signature: undefined __thiscall setWheelShapeSteeringCenter(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, SetWheelSteeringCenter * param_2)


/* Bt2ScenegraphPhysicsContext::setWheelShapeSteeringCenter(TransformGroup*,
   Bt2ScenegraphPhysicsContext::SetWheelSteeringCenter const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::setWheelShapeSteeringCenter
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,SetWheelSteeringCenter *param_2
          )

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  Logger *this_00;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  Bt2RaycastVehicle *local_48;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = getWheelIndex(this,param_1,*(uint *)param_2,"setSteeringCenter",&local_48,&local_3c);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(local_48 + 0x48) != 0) {
      uVar12 = *(undefined4 *)(param_2 + 4);
      fVar6 = *(float *)(param_2 + 8);
      lVar4 = *(long *)(local_48 + 0x48) + (long)local_3c * 0x1a0;
      lVar5 = *(long *)(*(long *)(local_48 + (long)*(int *)(lVar4 + 0x180) * 8 + 8) + 0x228);
      uVar7 = NEON_fmadd(uVar12,*(undefined4 *)(lVar5 + 0x58),fVar6 * *(float *)(lVar5 + 0x5c));
      uVar14 = *(undefined4 *)(param_2 + 0xc);
      uVar9 = NEON_fmadd(uVar12,*(undefined4 *)(lVar5 + 0x68),fVar6 * *(float *)(lVar5 + 0x6c));
      uVar12 = NEON_fmadd(uVar12,*(undefined4 *)(lVar5 + 0x78),fVar6 * *(float *)(lVar5 + 0x7c));
      fVar8 = (float)NEON_fmadd(uVar14,*(undefined4 *)(lVar5 + 0x60),uVar7);
      fVar10 = (float)NEON_fmadd(uVar14,*(undefined4 *)(lVar5 + 0x70),uVar9);
      fVar11 = *(float *)(lVar5 + 0x88);
      fVar15 = *(float *)(lVar5 + 0x8c);
      fVar6 = (float)NEON_fmadd(uVar14,*(undefined4 *)(lVar5 + 0x80),uVar12);
      fVar13 = *(float *)(lVar5 + 0x90);
      *(undefined4 *)(lVar4 + 0xa0) = 0;
      *(float *)(lVar4 + 0x94) = *(float *)(lVar4 + 0x84) - (fVar8 + fVar11);
      *(float *)(lVar4 + 0x98) = *(float *)(lVar4 + 0x88) - (fVar10 + fVar15);
      *(float *)(lVar4 + 0x9c) = *(float *)(lVar4 + 0x8c) - (fVar6 + fVar13);
      Bt2WheelInfo::updateSteering();
      goto LAB_009a4254;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 009a4288 to 009a428f has its CatchHandler @ 009a42dc */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 009a4294 to 009a4297 has its CatchHandler @ 009a42cc */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error (physics): setWheelShapeForcePoint failed, wheel shape with index %u does not exist.\n"
                     ,(ulong)*(uint *)param_2);
LAB_009a4254:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


