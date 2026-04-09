// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addFeedingPlace
// Entry Point: 006fd6f0
// Size: 868 bytes
// Signature: undefined __thiscall addFeedingPlace(AnimalHusbandry * this, float * param_1, float * param_2, float param_3, FEEDING_TYPE param_4, char * param_5)


/* AnimalHusbandry::addFeedingPlace(float const*, float const*, float,
   AnimalHusbandry::FEEDING_TYPE, char const*) */

void __thiscall
AnimalHusbandry::addFeedingPlace
          (AnimalHusbandry *this,float *param_1,float *param_2,float param_3,FEEDING_TYPE param_4,
          char *param_5)

{
  AnimalHusbandry *pAVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  Logger *pLVar5;
  ulong uVar6;
  AnimalHusbandry **ppAVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  bool local_e4 [4];
  float afStack_e0 [4];
  float afStack_d0 [4];
  float local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  long local_b0;
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  local_e4[0] = false;
  if (*(int *)(this + 0x54) != 0) {
    uVar6 = 0;
    fVar15 = *param_1;
    fVar16 = param_1[1];
    fVar17 = param_1[2];
    ppAVar7 = (AnimalHusbandry **)(this + 0x3ee8);
    pfVar8 = (float *)(this + 0x7c);
    fVar18 = *param_2;
    fVar19 = param_2[1];
    fVar20 = param_2[2];
    do {
      fVar9 = *pfVar8;
      fVar10 = (fVar16 - fVar19 * fVar9) - *(float *)(this + 0x1f730);
      fVar12 = (fVar15 - fVar18 * fVar9) - *(float *)(this + 0x1f72c);
      fVar9 = (fVar17 - fVar20 * fVar9) - *(float *)(this + 0x1f734);
      uVar13 = NEON_fmadd(fVar12,*(undefined4 *)(this + 0x1f6fc),fVar10 * *(float *)(this + 0x1f700)
                         );
      uVar14 = NEON_fmadd(fVar12,*(undefined4 *)(this + 0x1f70c),fVar10 * *(float *)(this + 0x1f710)
                         );
      uVar11 = NEON_fmadd(fVar12,*(undefined4 *)(this + 0x1f71c),fVar10 * *(float *)(this + 0x1f720)
                         );
      local_c0 = (float)NEON_fmadd(fVar9,*(undefined4 *)(this + 0x1f704),uVar13);
      uStack_bc = NEON_fmadd(fVar9,*(undefined4 *)(this + 0x1f714),uVar14);
      local_b8 = NEON_fmadd(fVar9,*(undefined4 *)(this + 0x1f724),uVar11);
      DetourNavigationMeshQuery::findDistanceToWall
                (*(DetourNavigationMeshQuery **)(this + 0x1f748),&local_c0,0.01,local_e4,afStack_d0,
                 afStack_e0);
      if (local_e4[0] == false) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 006fd8a0 to 006fd8ab has its CatchHandler @ 006fda78 */
          pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 006fd8ac to 006fd8b3 has its CatchHandler @ 006fda68 */
          Logger::Logger(pLVar5);
          LogManager::getInstance()::singletonLogManager = pLVar5;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pAVar1 = (AnimalHusbandry *)((long)ppAVar7 + -0xf);
        if ((*(byte *)(ppAVar7 + -2) & 1) != 0) {
          pAVar1 = *ppAVar7;
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,(double)*pfVar8,
                          "Warning: Feeding place \"%s\" is outside of navmesh for type %s with head offset %f.\n"
                          ,param_5,pAVar1);
      }
      uVar6 = uVar6 + 1;
      pfVar8 = pfVar8 + 0xfa8;
      ppAVar7 = ppAVar7 + 0x7d4;
    } while (uVar6 < *(uint *)(this + 0x54));
  }
  uVar2 = *(uint *)(this + 0x1f7b0);
  uVar6 = (ulong)uVar2;
  if (uVar2 < 0x19) {
    *(float *)(this + uVar6 * 0x24 + 0x1f7b4) = *param_1;
    *(float *)(this + uVar6 * 0x24 + 0x1f7b8) = param_1[1];
    *(float *)(this + uVar6 * 0x24 + 0x1f7bc) = param_1[2];
    *(float *)(this + uVar6 * 0x24 + 0x1f7c0) = *param_2;
    *(float *)(this + uVar6 * 0x24 + 0x1f7c4) = param_2[1];
    fVar15 = param_2[2];
    *(float *)(this + uVar6 * 0x24 + 0x1f7cc) = param_3;
    this[uVar6 * 0x24 + 0x1f7d4] = (AnimalHusbandry)0x0;
    *(FEEDING_TYPE *)(this + uVar6 * 0x24 + 0x1f7d0) = param_4;
    *(float *)(this + uVar6 * 0x24 + 0x1f7c8) = fVar15;
    *(uint *)(this + 0x1f7b0) = uVar2 + 1;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 006fda10 to 006fda17 has its CatchHandler @ 006fda64 */
      pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 006fda1c to 006fda1f has its CatchHandler @ 006fda54 */
      Logger::Logger(pLVar5);
      LogManager::getInstance()::singletonLogManager = pLVar5;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Too many feeding places (.\n");
    uVar6 = 0xffffffff;
  }
  if (*(long *)(lVar3 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


