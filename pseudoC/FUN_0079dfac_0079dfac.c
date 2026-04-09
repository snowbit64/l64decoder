// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079dfac
// Entry Point: 0079dfac
// Size: 1048 bytes
// Signature: undefined FUN_0079dfac(void)


/* WARNING: Type propagation algorithm not settling */

void FUN_0079dfac(long *param_1)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  __tree_iterator _Var7;
  int iVar8;
  basic_string *pbVar9;
  __tree_node_base **pp_Var10;
  undefined8 *puVar11;
  Logger *pLVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  char **ppcVar17;
  __tree_node_base *p_Var18;
  __tree_node_base *p_Var19;
  byte local_c0;
  undefined7 uStack_bf;
  void *local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  long local_90;
  basic_string local_88 [4];
  void *local_78;
  __tree_node_base **local_70;
  __tree_node_base *local_68;
  long local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_68 = (__tree_node_base *)0x0;
  local_60 = 0;
  local_70 = &local_68;
                    /* try { // try from 0079dfe8 to 0079dffb has its CatchHandler @ 0079e440 */
  ScriptSystemManager::getInstance();
  pbVar9 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
  LuauScriptSystem::getCallerSite(pbVar9);
                    /* try { // try from 0079dffc to 0079e007 has its CatchHandler @ 0079e428 */
  _Var7 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_long_long>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_long_long>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_long_long>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_long_long>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_long_long>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_long_long>>>
                      *)&local_70,local_88);
  pp_Var10 = (__tree_node_base **)(ulong)_Var7;
  if (&local_68 == pp_Var10) {
    lVar15 = param_1[2];
                    /* try { // try from 0079e034 to 0079e03f has its CatchHandler @ 0079e3fc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_a8);
                    /* try { // try from 0079e044 to 0079e053 has its CatchHandler @ 0079e400 */
    local_90 = lVar15;
    pp_Var10 = std::__ndk1::
               __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_long_long>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_long_long>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_long_long>>>
               ::
               __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                         ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_long_long>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_long_long>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_long_long>>>
                           *)&local_70,(__tree_end_node **)&local_c0,(basic_string *)&local_a8);
    if (*pp_Var10 == (__tree_node_base *)0x0) {
                    /* try { // try from 0079e0f4 to 0079e0ff has its CatchHandler @ 0079e400 */
      puVar11 = (undefined8 *)operator_new(0x40);
      pvVar3 = local_98;
      uVar5 = uStack_a0;
      uVar6 = local_a8;
      *puVar11 = 0;
      puVar11[1] = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = (void *)0x0;
      puVar11[6] = pvVar3;
      puVar11[7] = local_90;
      puVar11[5] = uVar5;
      puVar11[4] = uVar6;
      puVar11[2] = CONCAT71(uStack_bf,local_c0);
      *pp_Var10 = (__tree_node_base *)puVar11;
      if ((__tree_node_base **)*local_70 != (__tree_node_base **)0x0) {
        puVar11 = (undefined8 *)*pp_Var10;
        local_70 = (__tree_node_base **)*local_70;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (local_68,(__tree_node_base *)puVar11);
      local_60 = local_60 + 1;
    }
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
  }
  else {
    p_Var19 = (__tree_node_base *)param_1[2];
    p_Var18 = pp_Var10[7];
    if ((__tree_node_base *)((ulong)p_Var18 & (ulong)p_Var19) == p_Var19) {
      pp_Var10[7] = p_Var19;
    }
    else if ((__tree_node_base *)((ulong)p_Var18 & (ulong)p_Var19) != p_Var18) {
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = (void *)0x0;
                    /* try { // try from 0079e07c to 0079e08f has its CatchHandler @ 0079e410 */
      ScriptSystemManager::getInstance();
      pbVar9 = (basic_string *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::getCallerSite(pbVar9);
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0))
      {
                    /* try { // try from 0079e334 to 0079e33b has its CatchHandler @ 0079e3e8 */
        pLVar12 = (Logger *)operator_new(0x38);
                    /* try { // try from 0079e340 to 0079e343 has its CatchHandler @ 0079e3d8 */
        Logger::Logger(pLVar12);
        LogManager::getInstance()::singletonLogManager = pLVar12;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pvVar3 = (void *)((ulong)local_88 | 1);
      if (((byte)local_88[0] & 1) != 0) {
        pvVar3 = local_78;
      }
      if (p_Var19 == (__tree_node_base *)0xffffffffffffffff) {
        pcVar14 = "ALL_ENTITY_TYPES";
        pcVar13 = "ALL_ENTITY_TYPES";
        if (p_Var18 != (__tree_node_base *)0xffffffffffffffff) goto LAB_0079e0e4;
LAB_0079e174:
        pcVar14 = "ALL_ENTITY_TYPES";
      }
      else {
        if (p_Var19 == (__tree_node_base *)0x0) {
          pcVar14 = "NULL_ENTITY_TYPE";
        }
        else {
          if (p_Var19 < (__tree_node_base *)0x2) {
            lVar15 = 0;
LAB_0079e218:
            ppcVar17 = &BaseEntityType::s_baseIdNames + lVar15;
          }
          else {
            uVar6 = 0xffffffff;
            do {
              uVar16 = uVar6;
              uVar2 = (int)uVar16 + 1;
              bVar1 = (__tree_node_base *)0x3 < p_Var19;
              uVar6 = (ulong)uVar2;
              p_Var19 = (__tree_node_base *)((ulong)p_Var19 >> 1);
            } while (bVar1);
            if (uVar2 == 0) {
              lVar15 = 1;
              goto LAB_0079e218;
            }
            if (0x3b < uVar2) {
              pcVar14 = "BAD_ENTITY_TYPE";
              goto joined_r0x0079e22c;
            }
            ppcVar17 = (char **)(EngineEntityType::s_engineIdNames + uVar16 * 8);
          }
          pcVar14 = *ppcVar17;
        }
joined_r0x0079e22c:
        pcVar13 = pcVar14;
        if (p_Var18 == (__tree_node_base *)0xffffffffffffffff) goto LAB_0079e174;
LAB_0079e0e4:
        pcVar13 = pcVar14;
        if (p_Var18 == (__tree_node_base *)0x0) {
          pcVar14 = "NULL_ENTITY_TYPE";
        }
        else {
          if (p_Var18 < (__tree_node_base *)0x2) {
            lVar15 = 0;
          }
          else {
            uVar6 = 0xffffffff;
            do {
              uVar16 = uVar6;
              uVar2 = (int)uVar16 + 1;
              bVar1 = (__tree_node_base *)0x3 < p_Var18;
              uVar6 = (ulong)uVar2;
              p_Var18 = (__tree_node_base *)((ulong)p_Var18 >> 1);
            } while (bVar1);
            if (uVar2 != 0) {
              if (uVar2 < 0x3c) {
                pcVar14 = *(char **)(EngineEntityType::s_engineIdNames + uVar16 * 8);
              }
              else {
                pcVar14 = "BAD_ENTITY_TYPE";
              }
              goto LAB_0079e248;
            }
            lVar15 = 1;
          }
          pcVar14 = (&BaseEntityType::s_baseIdNames)[lVar15];
        }
      }
LAB_0079e248:
                    /* try { // try from 0079e248 to 0079e293 has its CatchHandler @ 0079e410 */
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: %s: passed entity is type %s, but usually the type is %s\n",pvVar3
                        ,pcVar13,pcVar14);
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0))
      {
                    /* try { // try from 0079e384 to 0079e38b has its CatchHandler @ 0079e3d4 */
        pLVar12 = (Logger *)operator_new(0x38);
                    /* try { // try from 0079e390 to 0079e393 has its CatchHandler @ 0079e3c4 */
        Logger::Logger(pLVar12);
        LogManager::getInstance()::singletonLogManager = pLVar12;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pvVar3 = (void *)((ulong)&local_a8 | 1);
      if ((local_a8 & 1) != 0) {
        pvVar3 = local_98;
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,"  %s\n",pvVar3);
      pp_Var10[7] = (__tree_node_base *)0x0;
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
      if (param_1 == (long *)0x0) goto LAB_0079e2bc;
    }
  }
  (**(code **)(*param_1 + 8))(param_1);
LAB_0079e2bc:
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_long_long>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_long_long>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_long_long>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_long_long>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_long_long>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_long_long>>>
             *)&local_70,(__tree_node *)local_68);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


