// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setWheelShapeDirection
// Entry Point: 009a3e9c
// Size: 632 bytes
// Signature: undefined __thiscall setWheelShapeDirection(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, SetWheelDirection * param_2)


/* Bt2ScenegraphPhysicsContext::setWheelShapeDirection(TransformGroup*,
   Bt2ScenegraphPhysicsContext::SetWheelDirection const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::setWheelShapeDirection
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,SetWheelDirection *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  Logger *this_00;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  Bt2RaycastVehicle *local_48;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = getWheelIndex(this,param_1,*(uint *)param_2,"setDirection",&local_48,&local_3c);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(local_48 + 0x48) != 0) {
      fVar6 = *(float *)(param_2 + 4);
      lVar4 = *(long *)(local_48 + 0x48) + (long)local_3c * 0x1a0;
      lVar5 = *(long *)(local_48 + (long)*(int *)(lVar4 + 0x180) * 8 + 8);
      *(float *)(lVar4 + 0xa4) = fVar6;
      fVar7 = *(float *)(param_2 + 8);
      *(float *)(lVar4 + 0xa8) = fVar7;
      fVar12 = *(float *)(param_2 + 0xc);
      *(undefined4 *)(lVar4 + 0xb0) = 0;
      uVar8 = NEON_fmadd(fVar6,fVar6,fVar7 * fVar7);
      *(float *)(lVar4 + 0xac) = fVar12;
      fVar13 = *(float *)(param_2 + 0x10);
      fVar9 = (float)NEON_fmadd(fVar12,fVar12,uVar8);
      *(float *)(lVar4 + 0xb4) = fVar13;
      fVar14 = *(float *)(param_2 + 0x14);
      *(float *)(lVar4 + 0xb8) = fVar14;
      fVar19 = *(float *)(param_2 + 0x18);
      *(undefined4 *)(lVar4 + 0xc0) = 0;
      fVar10 = 1.0 / SQRT(fVar9);
      fVar9 = fVar7 * fVar10;
      fVar21 = fVar6 * fVar10;
      fVar11 = fVar12 * fVar10;
      fVar12 = fVar14 * -(fVar12 * fVar10);
      fVar16 = fVar13 * -(fVar7 * fVar10);
      *(float *)(lVar4 + 0xa4) = fVar21;
      *(float *)(lVar4 + 0xa8) = fVar9;
      fVar6 = fVar19 * -(fVar6 * fVar10);
      *(float *)(lVar4 + 0xac) = fVar11;
      fVar7 = (float)NEON_fnmadd(fVar9,fVar19,-fVar12);
      uVar22 = NEON_fmadd(fVar21,fVar14,fVar16);
      fVar10 = (float)NEON_fnmadd(fVar21,fVar14,-fVar16);
      uVar17 = NEON_fmadd(fVar11,fVar13,fVar6);
      fVar6 = (float)NEON_fnmadd(fVar11,fVar13,-fVar6);
      uVar8 = NEON_fmadd(fVar9,fVar19,fVar12);
      fVar7 = (float)NEON_fmadd(uVar22,fVar21,fVar11 * fVar7);
      fVar12 = (float)NEON_fmadd(uVar17,fVar11,fVar9 * fVar10);
      fVar6 = (float)NEON_fmadd(uVar8,fVar9,fVar21 * fVar6);
      uVar8 = NEON_fmadd(fVar12,fVar12,fVar7 * fVar7);
      fVar10 = (float)NEON_fmadd(fVar6,fVar6,uVar8);
      fVar10 = 1.0 / SQRT(fVar10);
      fVar12 = fVar12 * fVar10;
      fVar7 = fVar7 * fVar10;
      fVar6 = fVar6 * fVar10;
      *(float *)(lVar4 + 0xb4) = fVar12;
      *(float *)(lVar4 + 0xb8) = fVar7;
      *(float *)(lVar4 + 0xbc) = fVar6;
      lVar5 = *(long *)(lVar5 + 0x228);
      uVar17 = NEON_fmadd(*(undefined4 *)(lVar5 + 0x58),fVar21,fVar9 * *(float *)(lVar5 + 0x5c));
      uVar18 = *(undefined4 *)(lVar5 + 0x60);
      uVar22 = NEON_fmadd(*(undefined4 *)(lVar5 + 0x68),fVar21,fVar9 * *(float *)(lVar5 + 0x6c));
      uVar8 = NEON_fmadd(*(undefined4 *)(lVar5 + 0x78),fVar21,fVar9 * *(float *)(lVar5 + 0x7c));
      uVar20 = *(undefined4 *)(lVar5 + 0x70);
      uVar15 = *(undefined4 *)(lVar5 + 0x80);
      *(undefined4 *)(lVar4 + 0xb0) = 0;
      uVar17 = NEON_fmadd(uVar18,fVar11,uVar17);
      uVar22 = NEON_fmadd(uVar20,fVar11,uVar22);
      uVar8 = NEON_fmadd(uVar15,fVar11,uVar8);
      *(undefined4 *)(lVar4 + 0xa4) = uVar17;
      *(undefined4 *)(lVar4 + 0xa8) = uVar22;
      *(undefined4 *)(lVar4 + 0xac) = uVar8;
      uVar8 = NEON_fmadd(*(undefined4 *)(lVar5 + 0x58),fVar12,fVar7 * *(float *)(lVar5 + 0x5c));
      uVar17 = *(undefined4 *)(lVar5 + 0x60);
      uVar22 = NEON_fmadd(*(undefined4 *)(lVar5 + 0x68),fVar12,fVar7 * *(float *)(lVar5 + 0x6c));
      uVar15 = NEON_fmadd(*(undefined4 *)(lVar5 + 0x78),fVar12,fVar7 * *(float *)(lVar5 + 0x7c));
      uVar20 = *(undefined4 *)(lVar5 + 0x70);
      uVar18 = *(undefined4 *)(lVar5 + 0x80);
      *(undefined4 *)(lVar4 + 0xc0) = 0;
      uVar17 = NEON_fmadd(uVar17,fVar6,uVar8);
      uVar22 = NEON_fmadd(uVar20,fVar6,uVar22);
      uVar8 = NEON_fmadd(uVar18,fVar6,uVar15);
      *(undefined4 *)(lVar4 + 0xb4) = uVar17;
      *(undefined4 *)(lVar4 + 0xb8) = uVar22;
      *(undefined4 *)(lVar4 + 0xbc) = uVar8;
      Bt2WheelInfo::updateSteering();
      goto LAB_009a409c;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 009a40d0 to 009a40d7 has its CatchHandler @ 009a4124 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 009a40dc to 009a40df has its CatchHandler @ 009a4114 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error (physics): setWheelShapeDirection failed, wheel shape with index %u does not exist.\n"
                     ,(ulong)*(uint *)param_2);
LAB_009a409c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


