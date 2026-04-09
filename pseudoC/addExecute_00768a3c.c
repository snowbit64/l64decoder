// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addExecute
// Entry Point: 00768a3c
// Size: 1480 bytes
// Signature: undefined __thiscall addExecute(DensityMapMultiModifierLua * this, int param_1, uint param_2, char * param_3, MethodInvocation * param_4)


/* DensityMapMultiModifierLua::addExecute(int, unsigned int, char const*, MethodInvocation*) */

void __thiscall
DensityMapMultiModifierLua::addExecute
          (DensityMapMultiModifierLua *this,int param_1,uint param_2,char *param_3,
          MethodInvocation *param_4)

{
  IntervalRoundingMode IVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  LuauScriptSystem *this_00;
  ulong uVar6;
  void *pvVar7;
  void *pvVar8;
  char *pcVar9;
  undefined8 *puVar10;
  void *pvVar11;
  long lVar12;
  void *pvVar13;
  long **this_01;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long **pplVar17;
  long **pplVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  long *plVar25;
  float fVar26;
  float fVar27;
  long **local_138;
  long **local_130;
  long *plStack_128;
  long local_120;
  long lStack_118;
  long lStack_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  long lStack_f0;
  long lStack_e8;
  long local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  puVar10 = *(undefined8 **)(param_4 + 0x10);
  if (((puVar10 == (undefined8 *)0x0) || (this_01 = (long **)*puVar10, this_01 == (long **)0x0)) ||
     (iVar3 = strcmp((char *)puVar10[1],"DensityMapModifier"), iVar3 != 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00768fc8 to 00768fd3 has its CatchHandler @ 00769004 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Supplied object to \'%s\' is not a valid DensityMapModifier.\n",
                       param_3);
    ScriptSystemManager::getInstance();
    this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(this_00,param_3);
    goto LAB_00768ad8;
  }
  local_130 = (long **)0x0;
  plStack_128 = (long *)0x0;
  local_138 = (long **)0x0;
  uVar6 = DensityMapModifierLua::getFilters
                    ((DensityMapModifierLua *)this_01,param_4,2,param_3,
                     (DensityMapFilter **)&plStack_128,(DensityMapFilter **)&local_130,
                     (DensityMapFilter **)&local_138);
  if ((uVar6 & 1) == 0) goto LAB_00768ad8;
  lVar14 = *(long *)this;
  lVar12 = *(long *)(this + 8) - lVar14;
  if (lVar12 == 0) {
LAB_00768bec:
    std::__ndk1::
    vector<DensityMapMultiModifierLua::TerrainExecute,std::__ndk1::allocator<DensityMapMultiModifierLua::TerrainExecute>>
    ::__append((vector<DensityMapMultiModifierLua::TerrainExecute,std::__ndk1::allocator<DensityMapMultiModifierLua::TerrainExecute>>
                *)this,1);
    lVar14 = *(long *)(this + 8);
  }
  else {
    uVar6 = 0;
    do {
      pplVar18 = (long **)(lVar14 + uVar6 * 0x20);
      if (*pplVar18 == this_01[5]) goto LAB_00768c04;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)(lVar12 >> 5));
    if (lVar12 != -0x20) goto LAB_00768bec;
    lVar14 = lVar14 + (lVar12 >> 5) * 0x20 + 0x20;
    lVar12 = *(long *)(this + 8);
    while (lVar21 = lVar12, lVar21 != lVar14) {
      pvVar8 = *(void **)(lVar21 + -0x18);
      lVar12 = lVar21 + -0x20;
      if (pvVar8 != (void *)0x0) {
        pvVar7 = pvVar8;
        pvVar11 = *(void **)(lVar21 + -0x10);
        if (*(void **)(lVar21 + -0x10) != pvVar8) {
          do {
            pvVar7 = *(void **)((long)pvVar11 + -0x40);
            pvVar13 = (void *)((long)pvVar11 + -0xb0);
            if (pvVar7 != (void *)0x0) {
              *(void **)((long)pvVar11 + -0x38) = pvVar7;
              operator_delete(pvVar7);
            }
            pvVar11 = pvVar13;
          } while (pvVar13 != pvVar8);
          pvVar7 = *(void **)(lVar21 + -0x18);
        }
        *(void **)(lVar21 + -0x10) = pvVar8;
        operator_delete(pvVar7);
      }
    }
    *(long *)(this + 8) = lVar14;
  }
  pplVar18 = (long **)(lVar14 + -0x20);
  *pplVar18 = this_01[5];
LAB_00768c04:
  plVar15 = pplVar18[1];
  lVar14 = (long)pplVar18[2] - (long)plVar15;
  if (lVar14 != 0) {
    uVar19 = 0;
    uVar6 = (lVar14 >> 4) * 0x2e8ba2e8ba2e8ba3;
code_r0x00768c44:
    pplVar17 = (long **)(plVar15 + uVar19 * 0x16);
    if (*pplVar17 != *this_01) goto code_r0x00768c54;
    lVar14 = plVar15[uVar19 * 0x16 + 0x13];
    if (lVar14 != 0) {
      lVar12 = *(long *)(lVar14 + -8);
      if (lVar12 != 0) {
        lVar12 = lVar12 * 0x18;
        do {
          pvVar8 = *(void **)(lVar14 + lVar12 + -0x18);
          if (pvVar8 != (void *)0x0) {
            *(void **)(lVar14 + lVar12 + -0x10) = pvVar8;
            operator_delete(pvVar8);
          }
          lVar12 = lVar12 + -0x18;
        } while (lVar12 != 0);
      }
      operator_delete__((long *)(lVar14 + -8));
    }
    plVar15[uVar19 * 0x16 + 0x13] = 0;
    lVar14 = plVar15[uVar19 * 0x16 + 0x14];
    if (lVar14 != 0) {
      lVar12 = *(long *)(lVar14 + -8);
      if (lVar12 != 0) {
        lVar12 = lVar12 * 0x18;
        do {
          pvVar8 = *(void **)(lVar14 + lVar12 + -0x18);
          if (pvVar8 != (void *)0x0) {
            *(void **)(lVar14 + lVar12 + -0x10) = pvVar8;
            operator_delete(pvVar8);
          }
          lVar12 = lVar12 + -0x18;
        } while (lVar12 != 0);
      }
      operator_delete__((long *)(lVar14 + -8));
    }
    plVar15[uVar19 * 0x16 + 0x14] = 0;
    goto LAB_00768e20;
  }
LAB_00768ca8:
  std::__ndk1::
  vector<DensityMapMultiModifierLua::DensityMapExecute,std::__ndk1::allocator<DensityMapMultiModifierLua::DensityMapExecute>>
  ::__append((vector<DensityMapMultiModifierLua::DensityMapExecute,std::__ndk1::allocator<DensityMapMultiModifierLua::DensityMapExecute>>
              *)(pplVar18 + 1),1);
  plVar15 = pplVar18[2];
LAB_00768cb4:
  pplVar17 = (long **)(plVar15 + -0x16);
  *pplVar17 = *this_01;
  plVar15[-5] = 0;
  plVar15[-4] = 0;
  IVar1 = *(IntervalRoundingMode *)(this_01 + 4);
  *(IntervalRoundingMode *)(plVar15 + -9) = IVar1;
  plVar16 = *this_01;
  uVar4 = (**(code **)(*plVar16 + 0x48))(plVar16);
  uVar5 = (**(code **)(*plVar16 + 0x50))(plVar16);
  fVar26 = (float)(ulong)uVar4;
  fVar27 = (float)(ulong)uVar5;
  ParallelogramHelper::ParallelogramHelper
            ((ParallelogramHelper *)&local_120,*(float *)(this_01 + 1) * fVar26,
             *(float *)((long)this_01 + 0xc) * fVar27,*(float *)(this_01 + 2) * fVar26,
             *(float *)((long)this_01 + 0x14) * fVar27,*(float *)(this_01 + 3) * fVar26,
             *(float *)((long)this_01 + 0x1c) * fVar27,uVar4,uVar5,IVar1);
  plVar15[-0x14] = lStack_118;
  plVar15[-0x15] = local_120;
  plVar15[-0x12] = CONCAT44(local_104,local_108);
  plVar15[-0x13] = lStack_110;
  plVar15[-10] = CONCAT44(local_c4,uStack_c8);
  plVar15[-0xb] = CONCAT44(local_cc,uStack_d0);
  plVar15[-0xc] = CONCAT44(uStack_d4,uStack_d8);
  plVar15[-0xd] = local_e0;
  plVar15[-3] = 0;
  plVar15[-2] = 0;
  plVar15[-0x10] = CONCAT44(uStack_f4,uStack_f8);
  plVar15[-0x11] = CONCAT44(uStack_fc,uStack_100);
  plVar15[-0xe] = lStack_e8;
  plVar15[-0xf] = lStack_f0;
LAB_00768e20:
  lStack_e8 = 0;
  uStack_88 = 0;
  uStack_b8 = 0;
  lStack_118 = 0;
  local_120 = 0;
  lStack_110 = 0;
  local_108 = 2;
  local_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0x7fffffff;
  lStack_f0 = 0;
  local_e0 = 0;
  uStack_d8 = 2;
  uStack_d4 = 0;
  uStack_d0 = 0;
  local_cc = 0;
  uStack_c8 = 0;
  local_c4 = 0x7fffffff;
  local_c0 = 0;
  local_b0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_a8 = 2;
  uStack_94 = 0x7fffffff;
  uStack_90 = 0;
  FUN_0076a0a8(pplVar17 + 0xe,&local_120);
  plVar15 = pplVar17[0xf];
  lVar21 = *plStack_128;
  lVar12 = plStack_128[3];
  lVar14 = plStack_128[2];
  uVar24 = *(undefined8 *)((long)plStack_128 + 0x24);
  uVar20 = *(undefined8 *)((long)plStack_128 + 0x1c);
  plVar15[-0x11] = plStack_128[1];
  plVar15[-0x12] = lVar21;
  plVar15[-0xf] = lVar12;
  plVar15[-0x10] = lVar14;
  *(undefined8 *)((long)plVar15 + -0x6c) = uVar24;
  *(undefined8 *)((long)plVar15 + -0x74) = uVar20;
  if ((local_130 != (long **)0x0) && (plVar16 = *local_130, plVar16 != (long *)0x0)) {
    plVar22 = (long *)0x0;
    if (*pplVar17 != (long *)0x0) {
      plVar22 = *pplVar17 + 0xb;
    }
    if (plVar22 == plVar16) {
LAB_00768f14:
      plVar25 = local_130[1];
      plVar23 = *local_130;
      plVar22 = local_130[3];
      plVar16 = local_130[2];
      uVar20 = *(undefined8 *)((long)local_130 + 0x1c);
      *(undefined8 *)((long)plVar15 + -0x3c) = *(undefined8 *)((long)local_130 + 0x24);
      *(undefined8 *)((long)plVar15 + -0x44) = uVar20;
      plVar15[-0xb] = (long)plVar25;
      plVar15[-0xc] = (long)plVar23;
      plVar15[-9] = (long)plVar22;
      plVar15[-10] = (long)plVar16;
    }
    else {
      pplVar18 = pplVar17 + 0x11;
      if ((*pplVar18 == (long *)0x0) || (*pplVar18 == plVar16)) {
LAB_00768f10:
        *pplVar18 = plVar16;
        goto LAB_00768f14;
      }
      pplVar18 = pplVar17 + 0x12;
      if ((*pplVar18 == (long *)0x0) || (*pplVar18 == plVar16)) goto LAB_00768f10;
      pcVar9 = (char *)LogManager::getInstance();
      LogManager::warnf(pcVar9,
                        "Warning: Setting too many different density maps as filters in \'%s\'. Additional filter is ignored.\n"
                        ,param_3);
    }
    if ((local_138 != (long **)0x0) && (plVar16 = *local_138, plVar16 != (long *)0x0)) {
      plVar22 = (long *)0x0;
      if (*pplVar17 != (long *)0x0) {
        plVar22 = *pplVar17 + 0xb;
      }
      if (plVar22 != plVar16) {
        pplVar18 = pplVar17 + 0x11;
        if ((*pplVar18 != (long *)0x0) && (*pplVar18 != plVar16)) {
          pplVar18 = pplVar17 + 0x12;
          if ((*pplVar18 != (long *)0x0) && (*pplVar18 != plVar16)) {
            pcVar9 = (char *)LogManager::getInstance();
            LogManager::warnf(pcVar9,
                              "Warning: Setting too many different density maps as filters in \'%s\'. Additional filter is ignored.\n"
                              ,param_3);
            goto LAB_00768fa0;
          }
        }
        *pplVar18 = plVar16;
      }
      plVar25 = local_138[1];
      plVar23 = *local_138;
      plVar22 = local_138[3];
      plVar16 = local_138[2];
      uVar20 = *(undefined8 *)((long)local_138 + 0x1c);
      *(undefined8 *)((long)plVar15 + -0xc) = *(undefined8 *)((long)local_138 + 0x24);
      *(undefined8 *)((long)plVar15 + -0x14) = uVar20;
      plVar15[-5] = (long)plVar25;
      plVar15[-6] = (long)plVar23;
      plVar15[-3] = (long)plVar22;
      plVar15[-4] = (long)plVar16;
    }
  }
LAB_00768fa0:
  *(uint *)(plVar15 + -0x14) = param_2;
  *(int *)((long)plVar15 + -0x9c) = param_1;
  *(undefined4 *)(plVar15 + -0x13) = *(undefined4 *)(this_01 + 6);
  *(undefined4 *)((long)plVar15 + -0x94) = *(undefined4 *)(this_01 + 7);
LAB_00768ad8:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00768c54:
  uVar19 = (ulong)((int)uVar19 + 1);
  if (uVar6 < uVar19 || uVar6 - uVar19 == 0) goto code_r0x00768c60;
  goto code_r0x00768c44;
code_r0x00768c60:
  plVar16 = pplVar18[2];
  if (lVar14 != -0xb0) goto LAB_00768ca8;
  while (plVar22 = plVar16, plVar22 != plVar15) {
    pvVar8 = (void *)plVar22[-8];
    plVar16 = plVar22 + -0x16;
    if (pvVar8 != (void *)0x0) {
      plVar22[-7] = (long)pvVar8;
      operator_delete(pvVar8);
    }
  }
  pplVar18[2] = plVar15;
  goto LAB_00768cb4;
}


