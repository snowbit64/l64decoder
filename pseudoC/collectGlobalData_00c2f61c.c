// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collectGlobalData
// Entry Point: 00c2f61c
// Size: 1480 bytes
// Signature: undefined __cdecl collectGlobalData(ConversionContext * param_1, uint param_2, IR_Type * param_3, vector * param_4, set * param_5, bool param_6)


/* IR_HllConvertUtil::collectGlobalData(IR_HllConvertUtil::ConversionContext&, unsigned int,
   IR_Type*, std::__ndk1::vector<IR_HllConvertUtil::GlobalData,
   std::__ndk1::allocator<IR_HllConvertUtil::GlobalData> >&,
   std::__ndk1::set<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > >&, bool) */

void IR_HllConvertUtil::collectGlobalData
               (ConversionContext *param_1,uint param_2,IR_Type *param_3,vector *param_4,
               set *param_5,bool param_6)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  IR_LANGUAGE IVar4;
  int iVar5;
  __tree_node_base **pp_Var6;
  undefined8 uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined4 uVar10;
  byte *pbVar11;
  long *plVar12;
  __tree_node_base *p_Var13;
  int *piVar14;
  undefined8 local_c0;
  byte *pbStack_b8;
  int *local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  undefined4 local_90;
  int iStack_8c;
  ulong uStack_88;
  byte local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x80) + (ulong)(param_2 & 0x7fffffff) * 0x18) ==
      10) {
    plVar12 = (long *)(*(long *)(*(long *)(param_1 + 8) + 0x80) +
                       (ulong)(param_2 & 0x7fffffff) * 0x18 + 8);
    pbVar9 = *(byte **)(*plVar12 + 8);
    pbVar11 = *(byte **)(pbVar9 + 0x10);
    if ((*pbVar9 & 1) == 0) {
      pbVar11 = pbVar9 + 1;
    }
    pbVar9 = (byte *)strlen((char *)pbVar11);
    if ((byte *)0xffffffffffffffef < pbVar9) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (pbVar9 < (byte *)0x17) {
      piVar14 = (int *)((ulong)&local_c0 | 1);
      local_c0 = CONCAT71(local_c0._1_7_,(char)((int)pbVar9 << 1));
      if (pbVar9 != (byte *)0x0) goto LAB_00c2f728;
    }
    else {
      piVar14 = (int *)operator_new((ulong)(pbVar9 + 0x10) & 0xfffffffffffffff0);
      local_c0 = (ulong)(pbVar9 + 0x10) & 0xfffffffffffffff0 | 1;
      pbStack_b8 = pbVar9;
      local_b0 = piVar14;
LAB_00c2f728:
      memcpy(piVar14,pbVar11,(size_t)pbVar9);
    }
    *(byte *)((long)piVar14 + (long)pbVar9) = 0;
    pp_Var6 = std::__ndk1::
              __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          *)param_5,(__tree_end_node **)&local_80,(basic_string *)&local_c0);
    p_Var13 = *pp_Var6;
    if (p_Var13 == (__tree_node_base *)0x0) {
                    /* try { // try from 00c2f7a0 to 00c2f7ab has its CatchHandler @ 00c2fc74 */
      puVar8 = (undefined8 *)operator_new(0x38);
      piVar14 = local_b0;
      pbVar11 = pbStack_b8;
      uVar3 = local_c0;
      *puVar8 = 0;
      puVar8[1] = 0;
      pbStack_b8 = (byte *)0x0;
      local_b0 = (int *)0x0;
      local_c0 = 0;
      puVar8[6] = piVar14;
      puVar8[5] = pbVar11;
      puVar8[4] = uVar3;
      puVar8[2] = CONCAT71(uStack_7f,local_80);
      *pp_Var6 = (__tree_node_base *)puVar8;
      if (**(long **)param_5 != 0) {
        *(long *)param_5 = **(long **)param_5;
        puVar8 = (undefined8 *)*pp_Var6;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(param_5 + 8),(__tree_node_base *)puVar8);
      *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if (p_Var13 == (__tree_node_base *)0x0) {
      piVar14 = *(int **)(param_3 + 8);
      IVar4 = (IR_LANGUAGE)piVar14;
      if (*piVar14 == 8) {
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = (void *)0x0;
        local_c0 = CONCAT44(local_c0._4_4_,4);
                    /* try { // try from 00c2f90c to 00c2f917 has its CatchHandler @ 00c2fc3c */
        IR_Type::getTypeString(IVar4);
        local_a8 = CONCAT71(uStack_7f,local_80);
        uStack_a0 = uStack_78;
        local_98 = local_70;
        pbVar11 = *(byte **)(*plVar12 + 8);
        pbStack_b8 = *(byte **)(pbVar11 + 0x10);
        iStack_8c = 0;
        uStack_88 = 0;
        puVar1 = *(ulong **)(param_4 + 8);
        if ((*pbVar11 & 1) == 0) {
          pbStack_b8 = pbVar11 + 1;
        }
        if (puVar1 == *(ulong **)(param_4 + 0x10)) {
                    /* try { // try from 00c2fa7c to 00c2fa87 has its CatchHandler @ 00c2fc1c */
          local_b0 = piVar14;
          std::__ndk1::
          vector<IR_HllConvertUtil::GlobalData,std::__ndk1::allocator<IR_HllConvertUtil::GlobalData>>
          ::__push_back_slow_path<IR_HllConvertUtil::GlobalData_const&>
                    ((vector<IR_HllConvertUtil::GlobalData,std::__ndk1::allocator<IR_HllConvertUtil::GlobalData>>
                      *)param_4,(GlobalData *)&local_c0);
        }
        else {
          puVar1[2] = (ulong)piVar14;
          puVar1[1] = (ulong)pbStack_b8;
          *puVar1 = local_c0;
          local_b0 = piVar14;
                    /* try { // try from 00c2f974 to 00c2f977 has its CatchHandler @ 00c2fc20 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)(puVar1 + 3));
          puVar1[7] = uStack_88;
          puVar1[6] = CONCAT44(iStack_8c,local_90);
          *(ulong **)(param_4 + 8) = puVar1 + 8;
        }
        local_70 = local_98;
        if ((local_a8 & 1) != 0) {
LAB_00c2fa94:
          operator_delete(local_70);
        }
      }
      else if (*piVar14 == 7) {
        IR_Type::getTypeString(IVar4);
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = (void *)0x0;
        uVar10 = 2;
        if (*(char *)(piVar14 + 5) != '\0') {
          uVar10 = 3;
        }
        local_c0 = CONCAT44(local_c0._4_4_,uVar10);
                    /* try { // try from 00c2f870 to 00c2f87b has its CatchHandler @ 00c2fc50 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_a8,(basic_string *)&local_80);
        pbVar11 = *(byte **)(*plVar12 + 8);
        pbStack_b8 = *(byte **)(pbVar11 + 0x10);
        iStack_8c = 0;
        uStack_88 = 0;
        puVar1 = *(ulong **)(param_4 + 8);
        if ((*pbVar11 & 1) == 0) {
          pbStack_b8 = pbVar11 + 1;
        }
        if (puVar1 == *(ulong **)(param_4 + 0x10)) {
                    /* try { // try from 00c2fa50 to 00c2fa5b has its CatchHandler @ 00c2fc50 */
          local_b0 = piVar14;
          std::__ndk1::
          vector<IR_HllConvertUtil::GlobalData,std::__ndk1::allocator<IR_HllConvertUtil::GlobalData>>
          ::__push_back_slow_path<IR_HllConvertUtil::GlobalData_const&>
                    ((vector<IR_HllConvertUtil::GlobalData,std::__ndk1::allocator<IR_HllConvertUtil::GlobalData>>
                      *)param_4,(GlobalData *)&local_c0);
        }
        else {
          puVar1[2] = (ulong)piVar14;
          puVar1[1] = (ulong)pbStack_b8;
          *puVar1 = local_c0;
          local_b0 = piVar14;
                    /* try { // try from 00c2f8c0 to 00c2f8c7 has its CatchHandler @ 00c2fc2c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)(puVar1 + 3));
          puVar1[7] = uStack_88;
          puVar1[6] = CONCAT44(iStack_8c,local_90);
          *(ulong **)(param_4 + 8) = puVar1 + 8;
        }
        if ((local_a8 & 1) != 0) {
          operator_delete(local_98);
        }
        if ((local_80 & 1) != 0) goto LAB_00c2fa94;
      }
      else {
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = (void *)0x0;
        if (param_6) {
          if (*piVar14 == 4) {
            local_c0 = CONCAT44(local_c0._4_4_,1);
                    /* try { // try from 00c2f9d8 to 00c2f9df has its CatchHandler @ 00c2fc14 */
            IR_Type::getTypeString((IR_LANGUAGE)*(undefined8 *)(piVar14 + 2));
            local_a8 = CONCAT71(uStack_7f,local_80);
            uStack_a0 = uStack_78;
            local_98 = local_70;
            pbVar11 = *(byte **)(*plVar12 + 8);
            pbStack_b8 = *(byte **)(pbVar11 + 0x10);
            if ((*pbVar11 & 1) == 0) {
              pbStack_b8 = pbVar11 + 1;
            }
            iStack_8c = piVar14[4];
          }
          else {
            local_c0 = (ulong)local_c0._4_4_ << 0x20;
                    /* try { // try from 00c2fac0 to 00c2facf has its CatchHandler @ 00c2fc10 */
            IR_Type::getTypeString(IVar4);
                    /* try { // try from 00c2fae4 to 00c2faeb has its CatchHandler @ 00c2fbf8 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((char *)&local_a8);
            if ((local_80 & 1) != 0) {
              operator_delete(local_70);
            }
            pbVar11 = *(byte **)(*plVar12 + 8);
            pbStack_b8 = *(byte **)(pbVar11 + 0x10);
            if ((*pbVar11 & 1) == 0) {
              pbStack_b8 = pbVar11 + 1;
            }
            iStack_8c = 0;
          }
          puVar1 = *(ulong **)(param_4 + 8);
          uStack_88 = 0;
          if (puVar1 == *(ulong **)(param_4 + 0x10)) {
                    /* try { // try from 00c2fb68 to 00c2fb73 has its CatchHandler @ 00c2fc38 */
            local_b0 = piVar14;
            std::__ndk1::
            vector<IR_HllConvertUtil::GlobalData,std::__ndk1::allocator<IR_HllConvertUtil::GlobalData>>
            ::__push_back_slow_path<IR_HllConvertUtil::GlobalData_const&>
                      ((vector<IR_HllConvertUtil::GlobalData,std::__ndk1::allocator<IR_HllConvertUtil::GlobalData>>
                        *)param_4,(GlobalData *)&local_c0);
          }
          else {
            puVar1[2] = (ulong)piVar14;
            puVar1[1] = (ulong)pbStack_b8;
            *puVar1 = local_c0;
            local_b0 = piVar14;
                    /* try { // try from 00c2fb44 to 00c2fb4b has its CatchHandler @ 00c2fc18 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string((basic_string *)(puVar1 + 3));
            puVar1[7] = uStack_88;
            puVar1[6] = CONCAT44(iStack_8c,local_90);
            *(ulong **)(param_4 + 8) = puVar1 + 8;
          }
        }
        else {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar5 != 0)) {
                    /* try { // try from 00c2fba8 to 00c2fbb3 has its CatchHandler @ 00c2fbe4 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pbVar9 = *(byte **)(*plVar12 + 8);
          pbVar11 = *(byte **)(pbVar9 + 0x10);
          if ((*pbVar9 & 1) == 0) {
            pbVar11 = pbVar9 + 1;
          }
                    /* try { // try from 00c2fa38 to 00c2fa4b has its CatchHandler @ 00c2fc38 */
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Error: Cannot have non-LDS variables (\'%s\')\n",pbVar11);
        }
        if ((local_a8 & 1) != 0) {
          operator_delete(local_98);
        }
        if (!param_6) {
          uVar7 = 0;
          goto LAB_00c2f76c;
        }
      }
    }
  }
  uVar7 = 1;
LAB_00c2f76c:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


