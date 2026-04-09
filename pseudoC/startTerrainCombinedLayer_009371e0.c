// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTerrainCombinedLayer
// Entry Point: 009371e0
// Size: 1040 bytes
// Signature: undefined __cdecl startTerrainCombinedLayer(void * param_1, char * param_2, char * * param_3)


/* WARNING: Type propagation algorithm not settling */
/* I3DSceneGraphFactory::startTerrainCombinedLayer(void*, char const*, char const**) */

void I3DSceneGraphFactory::startTerrainCombinedLayer(void *param_1,char *param_2,char **param_3)

{
  char *pcVar1;
  size_t __n;
  size_t sVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  void *__s1;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  uint local_138;
  float local_134;
  ulong local_130;
  ulong uStack_128;
  void *local_120;
  ulong local_118;
  ulong uStack_110;
  ulong local_108;
  uint auStack_100 [4];
  ulong local_f0;
  size_t sStack_e8;
  char *local_e0;
  ulong local_d8;
  undefined8 local_d0;
  void *pvStack_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  void *pvStack_98;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  pcVar9 = (char *)ExpatUtil::getAttr("name",param_3);
  local_134 = 1.0;
  ExpatUtil::getFloatAttr("noiseFrequency",&local_134,param_3);
  pcVar1 = "UnnamedLayer";
  if (pcVar9 != (char *)0x0) {
    pcVar1 = pcVar9;
  }
  local_80 = (void *)0x0;
  pvStack_98 = (void *)0x0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = (void *)0x0;
  pvStack_c8 = (void *)0x0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  sStack_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = (char *)0x0;
                    /* try { // try from 00937274 to 009372cf has its CatchHandler @ 00937664 */
  uVar7 = ExpatUtil::getArrayAttr("layers",(basic_string *)&local_f0,5,';',param_3);
  uVar14 = (ulong)uVar7;
  if (uVar7 != 0) {
    if (4 < uVar7) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0))
      {
                    /* try { // try from 009375b4 to 009375bf has its CatchHandler @ 009375f0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      uVar14 = 4;
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Too many layers for combined layer %s. Maximum is %u.\n",pcVar1,4)
      ;
    }
    uVar17 = 0;
    lVar13 = *(long *)((long)param_1 + 0x280);
    local_138 = 0;
    do {
      lVar3 = *(long *)(lVar13 + 0xa0);
      puVar18 = &local_f0 + uVar17 * 3;
      lVar11 = *(long *)(lVar13 + 0xa8) - lVar3;
      if (lVar11 != 0) {
        bVar5 = *(byte *)puVar18;
        uVar15 = 0;
        uVar16 = (lVar11 >> 3) * -0x30c30c30c30c30c3;
        __n = (ulong)(bVar5 >> 1);
        if ((bVar5 & 1) != 0) {
          __n = (&sStack_e8)[uVar17 * 3];
        }
        do {
          lVar11 = lVar3 + uVar15 * 0xa8;
          bVar4 = *(byte *)(lVar11 + 0x10);
          uVar10 = (ulong)(bVar4 >> 1);
          sVar2 = uVar10;
          if ((bVar4 & 1) != 0) {
            sVar2 = *(size_t *)(lVar11 + 0x18);
          }
          if (sVar2 == __n) {
            __s1 = *(void **)(lVar3 + uVar15 * 0xa8 + 0x20);
            if ((bVar4 & 1) == 0) {
              __s1 = (void *)(lVar11 + 0x11);
            }
            pcVar9 = (char *)((ulong)puVar18 | 1);
            if ((bVar5 & 1) != 0) {
              pcVar9 = (&local_e0)[uVar17 * 3];
            }
            if ((bVar4 & 1) == 0) {
              if (__n == 0) {
LAB_009372f0:
                auStack_100[local_138] = (uint)uVar15;
                local_138 = local_138 + 1;
                goto LAB_00937304;
              }
              pcVar12 = (char *)(lVar11 + 0x11);
              while (*pcVar12 == *pcVar9) {
                uVar10 = uVar10 - 1;
                pcVar12 = pcVar12 + 1;
                pcVar9 = pcVar9 + 1;
                if (uVar10 == 0) goto LAB_009372f0;
              }
            }
            else if ((__n == 0) || (iVar8 = memcmp(__s1,pcVar9,__n), iVar8 == 0)) goto LAB_009372f0;
          }
          uVar15 = (ulong)((uint)uVar15 + 1);
        } while (uVar15 <= uVar16 && uVar16 - uVar15 != 0);
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0))
      {
                    /* try { // try from 0093744c to 00937457 has its CatchHandler @ 009375f4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar9 = (char *)((ulong)puVar18 | 1);
      if ((*(byte *)puVar18 & 1) != 0) {
        pcVar9 = (&local_e0)[uVar17 * 3];
      }
                    /* try { // try from 00937420 to 00937437 has its CatchHandler @ 00937668 */
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Layer %s for combined layer %s was not found.\n",pcVar9,pcVar1);
LAB_00937304:
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar14);
                    /* try { // try from 00937488 to 0093749b has its CatchHandler @ 00937660 */
    TerrainTransformGroupDesc::CombinedLayerDesc::CombinedLayerDesc
              ((CombinedLayerDesc *)&local_130,pcVar1,local_138,auStack_100,local_134);
    puVar18 = *(ulong **)(lVar13 + 0xd8);
    if (puVar18 < *(ulong **)(lVar13 + 0xe0)) {
      puVar18[2] = (ulong)local_120;
      puVar18[1] = uStack_128;
      *puVar18 = local_130;
      uStack_128 = 0;
      local_120 = (void *)0x0;
      local_130 = 0;
      puVar18[4] = uStack_110;
      puVar18[3] = local_118;
      puVar18[5] = local_108;
      *(ulong **)(lVar13 + 0xd8) = puVar18 + 6;
    }
    else {
                    /* try { // try from 009374e8 to 009374ef has its CatchHandler @ 00937610 */
      std::__ndk1::
      vector<TerrainTransformGroupDesc::CombinedLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::CombinedLayerDesc>>
      ::__push_back_slow_path<TerrainTransformGroupDesc::CombinedLayerDesc>
                ((vector<TerrainTransformGroupDesc::CombinedLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::CombinedLayerDesc>>
                  *)(lVar13 + 0xd0),(CombinedLayerDesc *)&local_130);
      if ((local_130 & 1) != 0) {
        operator_delete(local_120);
      }
    }
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((uStack_a8 & 1) != 0) {
    operator_delete(pvStack_98);
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_d8 & 1) != 0) {
    operator_delete(pvStack_c8);
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


