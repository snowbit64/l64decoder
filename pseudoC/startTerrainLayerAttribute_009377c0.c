// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTerrainLayerAttribute
// Entry Point: 009377c0
// Size: 1656 bytes
// Signature: undefined __cdecl startTerrainLayerAttribute(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startTerrainLayerAttribute(void*, char const*, char const**) */

void I3DSceneGraphFactory::startTerrainLayerAttribute(void *param_1,char *param_2,char **param_3)

{
  __tree_node_base **pp_Var1;
  ulong *puVar2;
  long lVar3;
  byte *pbVar4;
  void *pvVar5;
  void *pvVar6;
  __tree_node_base **pp_Var7;
  int iVar8;
  char *pcVar9;
  char *__s1;
  undefined8 *puVar10;
  byte *pbVar11;
  ulong uVar12;
  __tree_node_base *p_Var13;
  long *plVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  __tree_node_base **pp_Var19;
  __tree_node_base **pp_Var20;
  ulong uVar21;
  double dVar22;
  byte *local_e8;
  byte *local_e0;
  undefined8 local_d8;
  byte *local_d0;
  byte *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong uStack_b0;
  void *local_a8;
  void *local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_88;
  __tree_node **local_80;
  __tree_node *local_78;
  ulong local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pcVar9 = (char *)ExpatUtil::getAttr("name",param_3);
  if (pcVar9 == (char *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0)) {
                    /* try { // try from 00937d6c to 00937d77 has its CatchHandler @ 00937e40 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar9 = "Warning: no LayerAttribute name specified. LayerAttribute ignored.\n";
  }
  else {
    __s1 = (char *)ExpatUtil::getAttr("type",param_3);
    if (__s1 == (char *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0))
      {
                    /* try { // try from 00937db4 to 00937dbf has its CatchHandler @ 00937e3c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar9 = "Warning: no LayerAttribute type specified. LayerAttribute ignored.\n";
    }
    else {
      lVar18 = *(long *)((long)param_1 + 0x280);
      TerrainTransformGroupDesc::LayerAttribute::LayerAttribute
                ((LayerAttribute *)&local_b8,pcVar9,__s1);
      puVar2 = *(ulong **)(lVar18 + 0x108);
      if (puVar2 < *(ulong **)(lVar18 + 0x110)) {
        puVar2[2] = (ulong)local_a8;
        puVar2[1] = uStack_b0;
        *puVar2 = local_b8;
        local_b8 = 0;
        uStack_b0 = 0;
        puVar2[4] = uStack_98;
        puVar2[3] = (ulong)local_a0;
        puVar2[5] = (ulong)local_90;
        local_a8 = (void *)0x0;
        local_a0 = (void *)0x0;
        uStack_98 = 0;
        local_90 = (void *)0x0;
        puVar2[6] = local_88;
        puVar2[7] = (ulong)local_80;
        puVar2[8] = (ulong)local_78;
        puVar2[9] = local_70;
        if (local_70 == 0) {
          puVar2[7] = (ulong)(puVar2 + 8);
        }
        else {
          local_80 = &local_78;
          *(ulong **)(local_78 + 0x10) = puVar2 + 8;
          local_78 = (__tree_node *)0x0;
          local_70 = 0;
        }
        *(ulong **)(lVar18 + 0x108) = puVar2 + 10;
      }
      else {
                    /* try { // try from 009378fc to 00937903 has its CatchHandler @ 00937e98 */
        std::__ndk1::
        vector<TerrainTransformGroupDesc::LayerAttribute,std::__ndk1::allocator<TerrainTransformGroupDesc::LayerAttribute>>
        ::__push_back_slow_path<TerrainTransformGroupDesc::LayerAttribute>
                  ((vector<TerrainTransformGroupDesc::LayerAttribute,std::__ndk1::allocator<TerrainTransformGroupDesc::LayerAttribute>>
                    *)(lVar18 + 0x100),(LayerAttribute *)&local_b8);
      }
      std::__ndk1::
      __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
      ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                 *)&local_80,local_78);
      if (((ulong)local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      lVar18 = *(long *)(*(long *)((long)param_1 + 0x280) + 0x100);
      lVar17 = (*(long *)(*(long *)((long)param_1 + 0x280) + 0x108) - lVar18 >> 4) *
               -0x3333333333333333 + -1;
      pcVar9 = (char *)ExpatUtil::getAttr("minValue",param_3);
      if (pcVar9 != (char *)0x0) {
        dVar22 = atof(pcVar9);
        *(float *)(lVar18 + lVar17 * 0x50 + 0x30) = (float)dVar22;
      }
      pcVar9 = (char *)ExpatUtil::getAttr("maxValue",param_3);
      if (pcVar9 != (char *)0x0) {
        dVar22 = atof(pcVar9);
        *(float *)(lVar18 + lVar17 * 0x50 + 0x34) = (float)dVar22;
      }
      iVar8 = strncmp(__s1,"enum",4);
      if (iVar8 != 0) goto LAB_009379d0;
      pcVar9 = (char *)ExpatUtil::getAttr("enumValues",param_3);
      if (pcVar9 != (char *)0x0) {
        local_d0 = (byte *)0x0;
        local_c8 = (byte *)0x0;
        local_c0 = 0;
        uVar21 = local_b8 >> 0x10;
        local_b8 = CONCAT62((uint6)uVar21 & 0xffffffffff00,0x3b02);
                    /* try { // try from 00937a28 to 00937a3b has its CatchHandler @ 00937e6c */
        StringUtil::split(pcVar9,(basic_string *)&local_b8,'\\',true,(vector *)&local_d0);
        if ((local_b8 & 1) != 0) {
          operator_delete(local_a8);
        }
        pbVar15 = local_c8;
        if (local_c8 != local_d0) {
          uVar21 = 0;
          lVar18 = lVar18 + lVar17 * 0x50;
          pp_Var1 = (__tree_node_base **)(lVar18 + 0x40);
          do {
            pbVar11 = local_d0 + uVar21 * 0x18;
            local_e8 = (byte *)0x0;
            local_e0 = (byte *)0x0;
            local_d8 = 0;
            pbVar15 = *(byte **)(pbVar11 + 0x10);
            local_b8 = CONCAT53(local_b8._3_5_,0x3a02);
            if ((*pbVar11 & 1) == 0) {
              pbVar15 = pbVar11 + 1;
            }
                    /* try { // try from 00937ab8 to 00937acb has its CatchHandler @ 00937ebc */
            StringUtil::split((char *)pbVar15,(basic_string *)&local_b8,'\\',true,
                              (vector *)&local_e8);
            if ((local_b8 & 1) != 0) {
              operator_delete(local_a8);
            }
            lVar17 = (long)local_e0 - (long)local_e8;
            if (lVar17 == 0x30) {
              pbVar15 = local_e8 + 0x19;
              if ((local_e8[0x18] & 1) != 0) {
                pbVar15 = *(byte **)(local_e8 + 0x28);
              }
              iVar8 = atoi((char *)pbVar15);
              local_b8 = CONCAT44(local_b8._4_4_,iVar8);
                    /* try { // try from 00937b08 to 00937b13 has its CatchHandler @ 00937eac */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string((basic_string *)&uStack_b0);
              pp_Var19 = pp_Var1;
              pp_Var20 = pp_Var1;
              if ((__tree_node_base **)*pp_Var1 == (__tree_node_base **)0x0) {
LAB_00937b90:
                p_Var13 = *pp_Var20;
              }
              else {
                pp_Var7 = (__tree_node_base **)*pp_Var1;
                do {
                  while (pp_Var19 = pp_Var7, *(uint *)(pp_Var19 + 4) <= (uint)local_b8) {
                    if ((uint)local_b8 <= *(uint *)(pp_Var19 + 4)) goto LAB_00937b90;
                    pp_Var20 = pp_Var19 + 1;
                    pp_Var7 = (__tree_node_base **)*pp_Var20;
                    if ((__tree_node_base **)*pp_Var20 == (__tree_node_base **)0x0)
                    goto LAB_00937b90;
                  }
                  pp_Var7 = (__tree_node_base **)*pp_Var19;
                  pp_Var20 = pp_Var19;
                } while ((__tree_node_base **)*pp_Var19 != (__tree_node_base **)0x0);
                p_Var13 = *pp_Var19;
              }
              if (p_Var13 == (__tree_node_base *)0x0) {
                    /* try { // try from 00937c2c to 00937c37 has its CatchHandler @ 00937e84 */
                puVar10 = (undefined8 *)operator_new(0x40);
                pvVar6 = local_a0;
                pvVar5 = local_a8;
                uVar12 = uStack_b0;
                local_a0 = (void *)0x0;
                *puVar10 = 0;
                puVar10[1] = 0;
                uStack_b0 = 0;
                local_a8 = (void *)0x0;
                puVar10[7] = pvVar6;
                *(uint *)(puVar10 + 4) = (uint)local_b8;
                puVar10[6] = pvVar5;
                puVar10[5] = uVar12;
                puVar10[2] = pp_Var19;
                *pp_Var20 = (__tree_node_base *)puVar10;
                plVar14 = (long *)**(long **)(lVar18 + 0x38);
                if (plVar14 != (long *)0x0) {
                  *(long **)(lVar18 + 0x38) = plVar14;
                  puVar10 = (undefined8 *)*pp_Var20;
                }
                std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                          (*pp_Var1,(__tree_node_base *)puVar10);
                *(long *)(lVar18 + 0x48) = *(long *)(lVar18 + 0x48) + 1;
              }
              if ((uStack_b0 & 1) != 0) {
                operator_delete(local_a0);
              }
            }
            else {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar8 != 0)) {
                    /* try { // try from 00937cb0 to 00937cbb has its CatchHandler @ 00937e58 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
                    /* try { // try from 00937b70 to 00937b83 has its CatchHandler @ 00937eb4 */
              LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                                "Warning: no LayerAttribute enumValues syntax error. LayerAttribute ignored.\n"
                               );
            }
            pbVar15 = local_e8;
            pbVar11 = local_e0;
            if (local_e8 != (byte *)0x0) {
              while (pbVar16 = pbVar11, pbVar16 != pbVar15) {
                pbVar11 = pbVar16 + -0x18;
                if ((*pbVar11 & 1) != 0) {
                  operator_delete(*(void **)(pbVar16 + -8));
                }
              }
              local_e0 = pbVar15;
              operator_delete(local_e8);
            }
            pbVar15 = local_d0;
          } while ((lVar17 == 0x30) &&
                  (uVar21 = (ulong)((int)uVar21 + 1),
                  uVar12 = ((long)local_c8 - (long)local_d0 >> 3) * -0x5555555555555555,
                  uVar21 <= uVar12 && uVar12 - uVar21 != 0));
        }
        pbVar11 = pbVar15;
        pbVar16 = local_c8;
        if (pbVar15 != (byte *)0x0) {
          while (pbVar4 = pbVar16, pbVar4 != pbVar15) {
            pbVar16 = pbVar4 + -0x18;
            pbVar11 = local_d0;
            if ((*pbVar16 & 1) != 0) {
              operator_delete(*(void **)(pbVar4 + -8));
              pbVar11 = local_d0;
            }
          }
          local_c8 = pbVar15;
          operator_delete(pbVar11);
        }
        goto LAB_009379d0;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0))
      {
                    /* try { // try from 00937dfc to 00937e07 has its CatchHandler @ 00937e38 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar9 = "Warning: no LayerAttribute enumValues specified. LayerAttribute ignored.\n";
    }
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,pcVar9);
LAB_009379d0:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


