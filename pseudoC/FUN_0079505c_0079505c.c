// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079505c
// Entry Point: 0079505c
// Size: 432 bytes
// Signature: undefined FUN_0079505c(void)


void FUN_0079505c(uint *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  EntityRegistryManager *this;
  long lVar4;
  Bt2ScenegraphPhysicsContext *this_00;
  Logger *this_01;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_68;
  undefined4 local_60;
  float local_58;
  float fStack_54;
  float local_50;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = param_1[4];
  if (uVar1 < 2) {
    this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    lVar4 = EntityRegistryManager::getEntityById(this,param_1[8]);
    if (lVar4 != 0) {
      RawTransformGroup::updateWorldTransformation();
      local_48 = *(float *)(lVar4 + 0xb8);
      fStack_44 = *(float *)(lVar4 + 0xbc);
      local_40 = *(float *)(lVar4 + 0xc0);
      fVar8 = 1.0;
      uVar5 = NEON_fmadd(local_48,local_48,fStack_44 * fStack_44);
      fVar7 = (float)NEON_fmadd(local_40,local_40,uVar5);
      fVar6 = 1.0;
      if (1e-06 < fVar7) {
        fVar8 = 1.0 / SQRT(fVar7);
      }
      local_58 = *(float *)(lVar4 + 200);
      fStack_54 = *(float *)(lVar4 + 0xcc);
      local_48 = local_48 * fVar8;
      fStack_44 = fStack_44 * fVar8;
      local_40 = local_40 * fVar8;
      uVar5 = NEON_fmadd(local_58,local_58,fStack_54 * fStack_54);
      local_50 = *(float *)(lVar4 + 0xd0);
      fVar7 = (float)NEON_fmadd(local_50,local_50,uVar5);
      if (1e-06 < fVar7) {
        fVar6 = 1.0 / SQRT(fVar7);
      }
      local_68 = *(undefined8 *)(lVar4 + 0xe8);
      local_58 = local_58 * fVar6;
      fStack_54 = fStack_54 * fVar6;
      local_50 = local_50 * fVar6;
      local_60 = *(undefined4 *)(lVar4 + 0xf0);
      ScenegraphPhysicsContextManager::getInstance();
      this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
      Bt2ScenegraphPhysicsContext::enqueueSetLightJointFrame
                (this_00,*param_1,uVar1,(Vector3 *)&local_68,(Vector3 *)&local_48,
                 (Vector3 *)&local_58);
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 007951c8 to 007951cf has its CatchHandler @ 0079521c */
      this_01 = (Logger *)operator_new(0x38);
                    /* try { // try from 007951d4 to 007951d7 has its CatchHandler @ 0079520c */
      Logger::Logger(this_01);
      LogManager::getInstance()::singletonLogManager = this_01;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: setJointFrame, actor must be 0 or 1.\n");
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


