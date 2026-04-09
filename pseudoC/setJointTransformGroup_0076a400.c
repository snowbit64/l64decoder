// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setJointTransformGroup
// Entry Point: 0076a400
// Size: 1076 bytes
// Signature: undefined __thiscall setJointTransformGroup(IKChain * this, MethodInvocation * param_1)


/* IKChain::setJointTransformGroup(MethodInvocation*) */

void __thiscall IKChain::setJointTransformGroup(IKChain *this,MethodInvocation *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  EntityRegistryManager *this_00;
  long lVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_98;
  
  lVar6 = tpidr_el0;
  local_98 = *(long *)(lVar6 + 0x28);
  uVar4 = *(uint *)param_1;
  uVar12 = (ulong)uVar4;
  if (uVar4 < *(uint *)(this + 0x10)) {
    uVar5 = *(uint *)(param_1 + 0x10);
    this_00 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    lVar9 = EntityRegistryManager::getEntityById(this_00,uVar5);
    if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0x10) >> 5 & 1) != 0)) {
      fVar17 = *(float *)(param_1 + 0x20);
      fVar18 = *(float *)(param_1 + 0x30);
      fVar19 = *(float *)(param_1 + 0x40);
      fVar20 = *(float *)(param_1 + 0x50);
      fVar14 = fVar18 - fVar17;
      fVar21 = *(float *)(param_1 + 0x60);
      fVar16 = fVar20 - fVar19;
      fVar22 = *(float *)(param_1 + 0x70);
      fVar15 = fVar22 - fVar21;
      puVar7 = &UNK_004c9bb4;
      if ((fVar14 < 0.0 || 6.283186 < fVar14) ||
         ((((puVar7 = &UNK_004f6ac6, fVar16 < 0.0 || (6.283186 < fVar16)) || (fVar15 < 0.0)) ||
          (6.283186 < fVar15)))) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0
           )) {
                    /* try { // try from 0076a7f8 to 0076a803 has its CatchHandler @ 0076a834 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        puVar2 = &UNK_004f6ac6;
        if (fVar16 < 0.0 || 6.283186 < fVar16) {
          puVar2 = &UNK_004c9bb4;
        }
        puVar3 = &UNK_004f6ac6;
        if (fVar15 < 0.0 || 6.283186 < fVar15) {
          puVar3 = &UNK_004c9bb4;
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Invalid joint rotation range x:%s y:%s z:%s on Transform Group \'%s\'.\n"
                           ,puVar7,puVar2,puVar3,*(undefined8 *)(lVar9 + 8));
      }
      else {
        *(long *)(*(long *)(this + 8) + uVar12 * 8) = lVar9;
        if (*(int *)(param_1 + 0x98) == 3) {
          uStack_a8 = 0;
          local_b0 = 0x3f800000;
          if (param_1[0x90] != (MethodInvocation)0x0) {
            GsQuaternion::set((GsQuaternion *)&local_b0,(Matrix4x4 *)(lVar9 + 0x78));
          }
        }
        else {
          uStack_a8 = 0;
          local_b0 = 0x3f800000;
        }
        local_b8 = NEON_fmov(0x3f800000,4);
        local_d0 = 0x7f7fffffff7fffff;
        local_c8 = 0;
        uStack_c0 = 0;
        puVar1 = (undefined8 *)(*(long *)this + uVar12 * 0xe4);
        CCDIKSolverUtil::JointLimits::setLocalJointLimits
                  ((JointLimits *)&local_d0,fVar17,fVar18,fVar19,fVar20,fVar21,fVar22,
                   (GsQuaternion *)&local_b0);
        *puVar1 = local_d0;
        puVar1[2] = uStack_c0;
        puVar1[1] = local_c8;
        puVar1[3] = local_b8;
        lVar13 = *(long *)this;
        *(undefined4 *)(lVar13 + uVar12 * 0xe4 + 0xe0) = *(undefined4 *)(param_1 + 0x80);
        if (uVar4 == 0) {
          RawTransformGroup::updateWorldTransformation();
          uVar12 = 0;
          lVar11 = 5;
        }
        else {
          lVar11 = 3;
        }
        lVar9 = lVar9 + lVar11 * 0x20;
        lVar13 = lVar13 + uVar12 * 0xe4;
        *(undefined4 *)(lVar13 + 0x60) = *(undefined4 *)(lVar9 + 0x18);
        *(undefined4 *)(lVar13 + 100) = *(undefined4 *)(lVar9 + 0x1c);
        *(undefined4 *)(lVar13 + 0x68) = *(undefined4 *)(lVar9 + 0x20);
        *(undefined4 *)(lVar13 + 0x6c) = *(undefined4 *)(lVar9 + 0x24);
        *(undefined4 *)(lVar13 + 0x70) = *(undefined4 *)(lVar9 + 0x28);
        *(undefined4 *)(lVar13 + 0x74) = *(undefined4 *)(lVar9 + 0x2c);
        *(undefined4 *)(lVar13 + 0x78) = *(undefined4 *)(lVar9 + 0x30);
        *(undefined4 *)(lVar13 + 0x7c) = *(undefined4 *)(lVar9 + 0x34);
        *(undefined4 *)(lVar13 + 0x80) = *(undefined4 *)(lVar9 + 0x38);
        *(undefined4 *)(lVar13 + 0x84) = *(undefined4 *)(lVar9 + 0x3c);
        *(undefined4 *)(lVar13 + 0x88) = *(undefined4 *)(lVar9 + 0x40);
        *(undefined4 *)(lVar13 + 0x8c) = *(undefined4 *)(lVar9 + 0x44);
        *(undefined4 *)(lVar13 + 0x90) = *(undefined4 *)(lVar9 + 0x48);
        *(undefined4 *)(lVar13 + 0x94) = *(undefined4 *)(lVar9 + 0x4c);
        *(undefined4 *)(lVar13 + 0x98) = *(undefined4 *)(lVar9 + 0x50);
        *(undefined4 *)(lVar13 + 0x9c) = *(undefined4 *)(lVar9 + 0x54);
      }
      goto LAB_0076a4bc;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0)) {
                    /* try { // try from 0076a7b0 to 0076a7bb has its CatchHandler @ 0076a838 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar10 = "Error: Invalid joint transform group id %u.\n";
    uVar4 = uVar5;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0)) {
                    /* try { // try from 0076a768 to 0076a773 has its CatchHandler @ 0076a83c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar10 = "Error: Invalid joint index %u.\n";
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar10,(ulong)uVar4);
LAB_0076a4bc:
  if (*(long *)(lVar6 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


