// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWheelShapeForcePoint
// Entry Point: 009a3ce4
// Size: 400 bytes
// Signature: undefined __thiscall setWheelShapeForcePoint(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, SetWheelForcePoint * param_2)


/* Bt2ScenegraphPhysicsContext::setWheelShapeForcePoint(TransformGroup*,
   Bt2ScenegraphPhysicsContext::SetWheelForcePoint const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::setWheelShapeForcePoint
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,SetWheelForcePoint *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  Logger *this_00;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  Bt2RaycastVehicle *local_48;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = getWheelIndex(this,param_1,*(uint *)param_2,"setForcePoint",&local_48,&local_3c);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(local_48 + 0x48) != 0) {
      uVar6 = *(undefined4 *)(param_2 + 4);
      lVar4 = *(long *)(local_48 + 0x48) + (long)local_3c * 0x1a0;
      lVar5 = *(long *)(local_48 + (long)*(int *)(lVar4 + 0x180) * 8 + 8);
      *(undefined4 *)(lVar4 + 0xc4) = uVar6;
      fVar7 = *(float *)(param_2 + 8);
      *(float *)(lVar4 + 200) = fVar7;
      uVar9 = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(lVar4 + 0xd0) = 0;
      *(undefined4 *)(lVar4 + 0xcc) = uVar9;
      lVar5 = *(long *)(lVar5 + 0x228);
      uVar11 = NEON_fmadd(uVar6,*(undefined4 *)(lVar5 + 0x58),fVar7 * *(float *)(lVar5 + 0x5c));
      uVar13 = NEON_fmadd(uVar6,*(undefined4 *)(lVar5 + 0x68),fVar7 * *(float *)(lVar5 + 0x6c));
      uVar6 = NEON_fmadd(uVar6,*(undefined4 *)(lVar5 + 0x78),fVar7 * *(float *)(lVar5 + 0x7c));
      fVar12 = (float)NEON_fmadd(uVar9,*(undefined4 *)(lVar5 + 0x60),uVar11);
      fVar8 = (float)NEON_fmadd(uVar9,*(undefined4 *)(lVar5 + 0x70),uVar13);
      fVar14 = *(float *)(lVar5 + 0x88);
      fVar15 = *(float *)(lVar5 + 0x8c);
      fVar7 = (float)NEON_fmadd(uVar9,*(undefined4 *)(lVar5 + 0x80),uVar6);
      fVar10 = *(float *)(lVar5 + 0x90);
      *(undefined4 *)(lVar4 + 0xd0) = 0;
      *(float *)(lVar4 + 0xc4) = fVar12 + fVar14;
      *(float *)(lVar4 + 200) = fVar8 + fVar15;
      *(float *)(lVar4 + 0xcc) = fVar7 + fVar10;
      Bt2WheelInfo::updateSteering();
      goto LAB_009a3dfc;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 009a3e30 to 009a3e37 has its CatchHandler @ 009a3e84 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 009a3e3c to 009a3e3f has its CatchHandler @ 009a3e74 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error (physics): setWheelShapeForcePoint failed, wheel shape with index %u does not exist.\n"
                     ,(ulong)*(uint *)param_2);
LAB_009a3dfc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


