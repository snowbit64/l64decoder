// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b9ee4
// Entry Point: 007b9ee4
// Size: 756 bytes
// Signature: undefined FUN_007b9ee4(void)


VehicleNavigationAgentEntity * FUN_007b9ee4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  uint3 uVar6;
  int iVar7;
  void *pvVar8;
  undefined8 *puVar9;
  EntityRegistryManager *this;
  VehicleNavigationMapGenerator *pVVar10;
  VehicleNavigationPlanner **ppVVar11;
  Logger *pLVar12;
  VehicleNavigationAgentEntity *this_00;
  DynamicAvoidance *pDVar13;
  VehicleNavigationPlanner *pVVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined local_9c;
  long local_98;
  
  lVar5 = tpidr_el0;
  local_98 = *(long *)(lVar5 + 0x28);
  uVar6 = *(uint3 *)(param_1 + 0x2b);
  if ((uVar6 >> 1 & 3) == 0) {
    uVar4 = (uint)(uVar6 >> 3);
    if (uVar6 < 0x28) {
      uVar2 = *param_1;
      fVar15 = (float)param_1[4];
      fVar16 = (float)param_1[8];
      cVar3 = *(char *)(param_1 + 0xc);
      fVar17 = (float)param_1[0x10];
      fVar18 = (float)param_1[0x14];
      fVar19 = (float)param_1[0x18];
      fVar20 = (float)param_1[0x1c];
      fVar21 = (float)param_1[0x20];
      fVar22 = (float)param_1[0x24];
      puVar9 = *(undefined8 **)(param_1 + 0x28);
      if (uVar6 < 8) {
        if (puVar9 != (undefined8 *)0x0) goto LAB_007ba0c0;
      }
      else {
        local_d0 = *(undefined4 *)(puVar9 + 1);
        uVar1 = uVar4;
        if (uVar4 < 2) {
          uVar1 = 1;
        }
        local_d8 = *puVar9;
        local_cc = 0.0 < *(float *)((long)puVar9 + 0xc);
        if (0xf < uVar6) {
          local_c0 = *(undefined4 *)(puVar9 + 3);
          local_c8 = puVar9[2];
          local_bc = 0.0 < *(float *)((long)puVar9 + 0x1c);
          if (uVar1 != 2) {
            local_b0 = *(undefined4 *)(puVar9 + 5);
            local_b8 = puVar9[4];
            local_ac = 0.0 < *(float *)((long)puVar9 + 0x2c);
            if (uVar1 != 3) {
              local_a0 = *(undefined4 *)(puVar9 + 7);
              local_a8 = puVar9[6];
              local_9c = 0.0 < *(float *)((long)puVar9 + 0x3c);
            }
          }
        }
LAB_007ba0c0:
        operator_delete__(puVar9);
      }
      this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
      pVVar10 = (VehicleNavigationMapGenerator *)EntityRegistryManager::getEntityById(this,uVar2);
      ppVVar11 = (VehicleNavigationPlanner **)VehicleNavigationManager::getInstance();
      pVVar14 = *ppVVar11;
      pDVar13 = *(DynamicAvoidance **)(pVVar10 + 0x140);
      this_00 = (VehicleNavigationAgentEntity *)operator_new(0x140);
                    /* try { // try from 007ba0f4 to 007ba12f has its CatchHandler @ 007ba208 */
      VehicleNavigationAgentEntity::VehicleNavigationAgentEntity
                (this_00,pVVar14,pDVar13,pVVar10,fVar15,fVar16,fVar17,fVar18,fVar19,fVar20,fVar21,
                 fVar22,cVar3 != '\0',uVar4,(TrailerDesc *)&local_d8);
      goto LAB_007b9f70;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 007ba194 to 007ba19b has its CatchHandler @ 007ba1dc */
      pLVar12 = (Logger *)operator_new(0x38);
                    /* try { // try from 007ba1a0 to 007ba1a3 has its CatchHandler @ 007ba1d8 */
      Logger::Logger(pLVar12);
      LogManager::getInstance()::singletonLogManager = pLVar12;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Creating VehicleNavigationAgent with too many trailers %u. Maximum supported is %u.\n"
                       ,(ulong)uVar4,4);
    pvVar8 = *(void **)(param_1 + 0x28);
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 007ba144 to 007ba14b has its CatchHandler @ 007ba1f0 */
      pLVar12 = (Logger *)operator_new(0x38);
                    /* try { // try from 007ba150 to 007ba153 has its CatchHandler @ 007ba1e0 */
      Logger::Logger(pLVar12);
      LogManager::getInstance()::singletonLogManager = pLVar12;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Creating VehicleNavigationAgent with invalid trailer data size %u. Must be a multiple of 4.\n"
                       ,(ulong)(uVar6 >> 1));
    pvVar8 = *(void **)(param_1 + 0x28);
  }
  if (pvVar8 != (void *)0x0) {
    operator_delete__(pvVar8);
  }
  this_00 = (VehicleNavigationAgentEntity *)0x0;
LAB_007b9f70:
  if (*(long *)(lVar5 + 0x28) == local_98) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


