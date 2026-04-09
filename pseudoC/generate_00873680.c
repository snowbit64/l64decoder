// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generate
// Entry Point: 00873680
// Size: 776 bytes
// Signature: undefined __cdecl generate(Matrix4x4 * param_1, RawTransformGroup * param_2, NavigationMeshGeneratorDesc * param_3, uint param_4, char * param_5, uint param_6, float param_7)


/* NavigationMeshGeneratorUtil::generate(Matrix4x4 const&, RawTransformGroup*,
   NavigationMeshGeneratorDesc&, unsigned int, char const*, unsigned int, float) */

undefined8
NavigationMeshGeneratorUtil::generate
          (Matrix4x4 *param_1,RawTransformGroup *param_2,NavigationMeshGeneratorDesc *param_3,
          uint param_4,char *param_5,uint param_6,float param_7)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void *local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  void *local_80;
  undefined8 local_78;
  StopWatch aSStack_70 [24];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  StopWatch::StopWatch(aSStack_70);
  StopWatch::start();
  local_88 = (void *)0x0;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_a0 = (void *)0x0;
  local_98 = (void *)0x0;
  local_90 = 0;
                    /* try { // try from 008736e8 to 00873707 has its CatchHandler @ 008739a4 */
  collectAllStaticShapes
            (param_2,param_4,param_5,param_6,param_7,(vector *)&local_88,(vector *)&local_a0);
  if (((long)local_80 - (long)local_88 == 0) || (local_98 == local_a0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008738bc to 008738c7 has its CatchHandler @ 00873990 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: No triangles collected for navigation mesh generation. Enable build nav mesh flag on shapes.\n"
                     );
    uVar4 = 0;
  }
  else {
    uVar5 = 0;
    do {
      puVar1 = (undefined8 *)((long)local_88 + uVar5 * 4);
      uVar5 = (ulong)((int)uVar5 + 3);
      fVar10 = *(float *)puVar1;
      fVar6 = *(float *)((long)puVar1 + 4);
      uVar7 = NEON_fmadd(fVar10,*(undefined4 *)(param_1 + 8),fVar6 * *(float *)(param_1 + 0x18));
      fVar11 = *(float *)(puVar1 + 1);
      fVar8 = (float)NEON_fmadd(fVar11,*(undefined4 *)(param_1 + 0x28),uVar7);
      fVar9 = *(float *)(param_1 + 0x38);
      *puVar1 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) +
                         (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * fVar6 +
                         (float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar10 +
                         (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar11,
                         (float)*(undefined8 *)(param_1 + 0x30) +
                         (float)*(undefined8 *)(param_1 + 0x10) * fVar6 +
                         (float)*(undefined8 *)param_1 * fVar10 +
                         (float)*(undefined8 *)(param_1 + 0x20) * fVar11);
      *(float *)(puVar1 + 1) = fVar9 + fVar8;
    } while (uVar5 < (ulong)((long)local_80 - (long)local_88 >> 2));
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00873904 to 0087390f has its CatchHandler @ 0087398c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00873798 to 0087389b has its CatchHandler @ 008739a8 */
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Building navigation mesh ...\n");
    *(void **)param_3 = local_88;
    *(void **)(param_3 + 0x10) = local_a0;
    *(int *)(param_3 + 8) = (int)((ulong)((long)local_80 - (long)local_88 >> 2) / 3);
    *(int *)(param_3 + 0x18) = (int)((ulong)((long)local_98 - (long)local_a0 >> 2) / 3);
    uVar4 = RecastNavigationMeshGenerator::generate(param_3);
    StopWatch::stop();
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0087394c to 00873957 has its CatchHandler @ 00873988 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    StopWatch::getStoppedMs();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager," done in %f ms\n\n");
  }
  if (local_a0 != (void *)0x0) {
    local_98 = local_a0;
    operator_delete(local_a0);
  }
  if (local_88 != (void *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


