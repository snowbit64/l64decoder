// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeCommand
// Entry Point: 006d4e98
// Size: 2736 bytes
// Signature: undefined executeCommand(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Console::executeCommand() */

void Console::executeCommand(void)

{
  basic_string *pbVar1;
  StringUtil *pSVar2;
  ulong **ppuVar3;
  uint uVar4;
  size_t __n;
  size_t sVar5;
  basic_string *pbVar6;
  StringUtil SVar7;
  StringUtil SVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  bool bVar12;
  byte *pbVar13;
  int iVar14;
  __tree_iterator _Var15;
  pair pVar16;
  long in_x0;
  long *plVar17;
  undefined8 uVar18;
  char *extraout_x1;
  char *extraout_x1_00;
  char *extraout_x1_01;
  StringUtil *pSVar19;
  char *extraout_x1_02;
  char *pcVar20;
  basic_string_conflict *in_x2;
  ulong uVar21;
  StringUtil *pSVar22;
  ulong **ppuVar23;
  long lVar24;
  ulong uVar25;
  byte *pbVar26;
  ulong **ppuVar27;
  ulong uVar28;
  void *pvVar29;
  basic_string **ppbVar30;
  basic_string *pbVar31;
  byte *pbVar32;
  ulong *puVar33;
  ulong **ppuVar34;
  byte local_128 [16];
  void *local_118;
  ulong local_110;
  ulong uStack_108;
  void *local_100;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  basic_string *local_c0;
  basic_string *pbStack_b8;
  basic_string *local_b0;
  basic_string *local_a8;
  basic_string *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  basic_string *pbStack_88;
  basic_string *local_80;
  undefined8 local_78;
  long local_70;
  
  lVar11 = tpidr_el0;
  local_70 = *(long *)(lVar11 + 0x28);
  Mutex::enterCriticalSection();
  pbVar1 = (basic_string *)(in_x0 + 0x80);
  std::__ndk1::operator+((__ndk1 *)(in_x0 + 0x98),(basic_string_conflict *)pbVar1,in_x2);
  ppbVar30 = *(basic_string ***)(in_x0 + 0x10);
  if (ppbVar30 < *(basic_string ***)(in_x0 + 0x18)) {
    ppbVar30[2] = local_80;
    ppbVar30[1] = pbStack_88;
    *ppbVar30 = local_90;
    *(basic_string ***)(in_x0 + 0x10) = ppbVar30 + 3;
  }
  else {
                    /* try { // try from 006d4f14 to 006d4f1b has its CatchHandler @ 006d59f8 */
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(in_x0 + 8),(basic_string *)&local_90);
    if (((ulong)local_90 & 1) != 0) {
      operator_delete(local_80);
    }
  }
  uVar25 = (ulong)(*(byte *)(in_x0 + 0x80) >> 1);
  if ((*(byte *)(in_x0 + 0x80) & 1) != 0) {
    uVar25 = *(ulong *)(in_x0 + 0x88);
  }
  if (uVar25 == 0) goto LAB_006d574c;
  Mutex::leaveCriticalSection();
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar14 != 0)) {
                    /* try { // try from 006d57a4 to 006d57af has its CatchHandler @ 006d5994 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  lVar24 = *(long *)(in_x0 + 0x90);
  pSVar2 = (StringUtil *)(in_x0 + 0x81);
  if ((*(byte *)(in_x0 + 0x80) & 1) == 0) {
    lVar24 = in_x0 + 0x81;
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"Console command: %s\n",
                    lVar24);
  bVar9 = *(byte *)(in_x0 + 0x80);
  uVar21 = *(ulong *)(in_x0 + 0x88);
  uVar28 = (ulong)(bVar9 >> 1);
  uVar25 = uVar28;
  if ((bVar9 & 1) != 0) {
    uVar25 = uVar21;
  }
  if (uVar25 == 4) {
                    /* try { // try from 006d4fa0 to 006d4fbb has its CatchHandler @ 006d59f0 */
    iVar14 = std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                       ((ulong)pbVar1,0,(char *)0xffffffffffffffff,0x4e1b58);
    pcVar20 = extraout_x1;
    if (iVar14 != 0) {
      bVar9 = *(byte *)(in_x0 + 0x80);
      uVar21 = *(ulong *)(in_x0 + 0x88);
      uVar28 = (ulong)(bVar9 >> 1);
      goto LAB_006d4fd0;
    }
  }
  else {
LAB_006d4fd0:
    uVar25 = uVar28;
    if ((bVar9 & 1) != 0) {
      uVar25 = uVar21;
    }
    if (uVar25 == 4) {
                    /* try { // try from 006d4fe0 to 006d4ffb has its CatchHandler @ 006d59e4 */
      iVar14 = std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               compare((ulong)pbVar1,0,(char *)0xffffffffffffffff,0x4c6fac);
      pcVar20 = extraout_x1_00;
      if (iVar14 == 0) goto LAB_006d5174;
      bVar9 = *(byte *)(in_x0 + 0x80);
      uVar21 = *(ulong *)(in_x0 + 0x88);
      uVar28 = (ulong)(bVar9 >> 1);
    }
    if ((bVar9 & 1) != 0) {
      uVar28 = uVar21;
    }
                    /* try { // try from 006d5020 to 006d503b has its CatchHandler @ 006d59c4 */
    if ((uVar28 != 1) ||
       (iVar14 = std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 compare((ulong)pbVar1,0,(char *)0xffffffffffffffff,0x4e1b5d),
       pcVar20 = extraout_x1_01, iVar14 != 0)) {
      local_90 = (basic_string *)0x0;
      pbStack_88 = (basic_string *)0x0;
      local_80 = (basic_string *)0x0;
                    /* try { // try from 006d5048 to 006d5053 has its CatchHandler @ 006d5a24 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &local_90,pbVar1);
      ppbVar30 = (basic_string **)(in_x0 + 0x40);
      pbVar31 = *ppbVar30;
      pbVar6 = *(basic_string **)(in_x0 + 0x48);
      local_78 = (ulong *)CONCAT44(local_78._4_4_,*(undefined4 *)(in_x0 + 0xe8));
      if (pbVar31 == pbVar6) {
        if (pbVar31 == *(basic_string **)(in_x0 + 0x50)) {
          std::__ndk1::vector<Console::HistoryEntry,std::__ndk1::allocator<Console::HistoryEntry>>::
          __push_back_slow_path<Console::HistoryEntry_const&>
                    ((vector<Console::HistoryEntry,std::__ndk1::allocator<Console::HistoryEntry>> *)
                     ppbVar30,(HistoryEntry *)&local_90);
        }
        else {
                    /* try { // try from 006d50fc to 006d5107 has its CatchHandler @ 006d59ac */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(pbVar31);
          pbVar31[6] = (basic_string)local_78;
          *(basic_string **)(in_x0 + 0x48) = pbVar31 + 8;
        }
      }
      else {
        bVar10 = *(byte *)(in_x0 + 0x80);
        bVar9 = *(byte *)(pbVar6 + -8);
        uVar25 = (ulong)(bVar9 >> 1);
        __n = uVar25;
        if ((bVar9 & 1) != 0) {
          __n = *(size_t *)(pbVar6 + -6);
        }
        sVar5 = (ulong)(bVar10 >> 1);
        if ((bVar10 & 1) != 0) {
          sVar5 = *(size_t *)(in_x0 + 0x88);
        }
        if (__n == sVar5) {
          pvVar29 = *(void **)(pbVar6 + -4);
          if ((bVar9 & 1) == 0) {
            pvVar29 = (void *)((long)pbVar6 + -0x1f);
          }
          pSVar19 = pSVar2;
          if ((bVar10 & 1) != 0) {
            pSVar19 = *(StringUtil **)(in_x0 + 0x90);
          }
          if ((bVar9 & 1) == 0) {
            if (__n != 0) {
              pSVar22 = (StringUtil *)((long)pbVar6 + -0x1f);
              do {
                uVar25 = uVar25 - 1;
                SVar7 = *pSVar22;
                SVar8 = *pSVar19;
                pSVar19 = pSVar19 + 1;
                pSVar22 = pSVar22 + 1;
              } while (SVar7 == SVar8 && uVar25 != 0);
              if (SVar7 != SVar8) goto LAB_006d5128;
            }
          }
          else if ((__n != 0) && (iVar14 = memcmp(pvVar29,pSVar19,__n), iVar14 != 0))
          goto LAB_006d5128;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(pbVar6 + -8),(basic_string *)&local_90);
          pbVar6[-2] = (basic_string)local_78;
        }
        else {
LAB_006d5128:
                    /* try { // try from 006d5128 to 006d5163 has its CatchHandler @ 006d5a24 */
          FUN_006d689c(ppbVar30,&local_90);
        }
      }
      saveHistoryToDisk();
      pcVar20 = extraout_x1_02;
      if (((ulong)local_90 & 1) != 0) {
        operator_delete(local_80);
      }
    }
  }
LAB_006d5174:
  local_a8 = (basic_string *)0x0;
  local_a0 = (basic_string *)0x0;
  local_98 = 0;
  local_c0 = (basic_string *)0x0;
  pbStack_b8 = (basic_string *)0x0;
  local_b0 = (basic_string *)0x0;
  pSVar19 = pSVar2;
  if ((*(byte *)(in_x0 + 0x80) & 1) != 0) {
    pSVar19 = *(StringUtil **)(in_x0 + 0x90);
  }
                    /* try { // try from 006d5194 to 006d519b has its CatchHandler @ 006d5a20 */
  StringUtil::trim(pSVar19,pcVar20);
  if (((ulong)local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  local_c0 = local_90;
  uVar25 = (ulong)local_90 >> 0x10;
  pbStack_b8 = pbStack_88;
  local_b0 = local_80;
  local_90 = (basic_string *)CONCAT62((uint6)uVar25 & 0xffffffffff00,0x2002);
                    /* try { // try from 006d51c8 to 006d51df has its CatchHandler @ 006d5a0c */
  StringUtil::split((basic_string *)&local_c0,(basic_string *)&local_90,(vector *)&local_a8,true,
                    true);
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  ppuVar34 = (ulong **)(in_x0 + 0x28);
                    /* try { // try from 006d51f8 to 006d51ff has its CatchHandler @ 006d5a08 */
  _Var15 = std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>>>
                       *)ppuVar34,local_a8);
  ppuVar3 = (ulong **)(in_x0 + 0x30);
  if (ppuVar3 == (ulong **)(ulong)_Var15) {
LAB_006d5294:
    bVar12 = false;
  }
  else {
    local_90 = local_a8;
                    /* try { // try from 006d5214 to 006d522b has its CatchHandler @ 006d59f4 */
    pVar16 = std::__ndk1::
             __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>>>
             ::
             __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                       ((basic_string *)ppuVar34,(piecewise_construct_t *)local_a8,
                        (tuple *)&DAT_00516b93,(tuple *)&local_90);
    plVar17 = *(long **)((ulong)pVar16 + 0x38);
    if (plVar17 == (long *)0x0) goto LAB_006d5294;
                    /* try { // try from 006d523c to 006d5247 has its CatchHandler @ 006d59d8 */
    (**(code **)(*plVar17 + 0x20))(&local_90,plVar17,&local_a8);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar14 != 0))
    {
                    /* try { // try from 006d57ec to 006d57f7 has its CatchHandler @ 006d5980 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pbVar31 = (basic_string *)((ulong)&local_90 | 1);
    if (((ulong)local_90 & 1) != 0) {
      pbVar31 = local_80;
    }
                    /* try { // try from 006d5268 to 006d527b has its CatchHandler @ 006d59c8 */
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_005118dd,pbVar31)
    ;
    if (((ulong)local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    bVar12 = true;
  }
                    /* try { // try from 006d5298 to 006d529f has its CatchHandler @ 006d5aa4 */
  Mutex::enterCriticalSection();
  bVar9 = *(byte *)local_a8;
  uVar21 = *(ulong *)(local_a8 + 2);
  uVar28 = (ulong)(bVar9 >> 1);
  uVar25 = uVar28;
  if ((bVar9 & 1) != 0) {
    uVar25 = uVar21;
  }
  if (uVar25 == 5) {
                    /* try { // try from 006d52c0 to 006d52d7 has its CatchHandler @ 006d59ec */
    iVar14 = std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                       ((ulong)local_a8,0,(char *)0xffffffffffffffff,0x4ec615);
    if (iVar14 != 0) {
      bVar9 = *(byte *)local_a8;
      uVar21 = *(ulong *)(local_a8 + 2);
      uVar28 = (ulong)(bVar9 >> 1);
      goto LAB_006d52f0;
    }
LAB_006d531c:
    pbVar26 = *(byte **)(in_x0 + 8);
    pbVar32 = *(byte **)(in_x0 + 0x10);
    while (pbVar13 = pbVar32, pbVar13 != pbVar26) {
      pbVar32 = pbVar13 + -0x18;
      if ((*pbVar32 & 1) != 0) {
        operator_delete(*(void **)(pbVar13 + -8));
      }
    }
    bVar12 = true;
    *(byte **)(in_x0 + 0x10) = pbVar26;
  }
  else {
LAB_006d52f0:
    if ((bVar9 & 1) != 0) {
      uVar28 = uVar21;
    }
                    /* try { // try from 006d5300 to 006d5317 has its CatchHandler @ 006d59e0 */
    if ((uVar28 == 3) &&
       (iVar14 = std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 compare((ulong)local_a8,0,(char *)0xffffffffffffffff,0x4e1bfc), iVar14 == 0))
    goto LAB_006d531c;
  }
  bVar9 = *(byte *)local_a8;
  uVar21 = *(ulong *)(local_a8 + 2);
  uVar28 = (ulong)(bVar9 >> 1);
  uVar25 = uVar28;
  if ((bVar9 & 1) != 0) {
    uVar25 = uVar21;
  }
  if (uVar25 == 3) {
                    /* try { // try from 006d5378 to 006d538f has its CatchHandler @ 006d59e8 */
    iVar14 = std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                       ((ulong)local_a8,0,(char *)0xffffffffffffffff,0x4cbe02);
    if (iVar14 != 0) {
      bVar9 = *(byte *)local_a8;
      uVar21 = *(ulong *)(local_a8 + 2);
      uVar28 = (ulong)(bVar9 >> 1);
      goto LAB_006d53a8;
    }
LAB_006d5408:
    if ((ulong)(((long)local_a0 - (long)local_a8 >> 3) * -0x5555555555555555) < 2) {
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = (void *)0x0;
      if ((ulong **)*ppuVar34 != ppuVar3) {
        ppuVar34 = (ulong **)*ppuVar34;
        do {
                    /* try { // try from 006d54e8 to 006d54ef has its CatchHandler @ 006d5aac */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)&local_90);
          puVar33 = ppuVar34[7];
          local_78 = puVar33;
          if (puVar33 != (ulong *)0x0) {
                    /* try { // try from 006d5504 to 006d5517 has its CatchHandler @ 006d5adc */
            uVar18 = (**(code **)(*puVar33 + 0x10))(puVar33);
            FUN_006cadd8(local_128,uVar18,&DAT_004fddf9);
                    /* try { // try from 006d5520 to 006d5547 has its CatchHandler @ 006d5abc */
            pbVar32 = (byte *)(**(code **)(*puVar33 + 0x18))(puVar33);
            pbVar26 = *(byte **)(pbVar32 + 0x10);
            if ((*pbVar32 & 1) == 0) {
              pbVar26 = pbVar32 + 1;
            }
            puVar33 = (ulong *)std::__ndk1::
                               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               ::append((char *)local_128,(ulong)pbVar26);
            local_100 = (void *)puVar33[2];
            uStack_108 = puVar33[1];
            local_110 = *puVar33;
            puVar33[1] = 0;
            puVar33[2] = 0;
            *puVar33 = 0;
                    /* try { // try from 006d5560 to 006d556b has its CatchHandler @ 006d5a84 */
            puVar33 = (ulong *)std::__ndk1::
                               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               ::append((char *)&local_110);
            local_e0 = (void *)puVar33[2];
            uStack_e8 = puVar33[1];
            local_f0 = *puVar33;
            puVar33[1] = 0;
            puVar33[2] = 0;
            *puVar33 = 0;
            pvVar29 = (void *)((ulong)&local_f0 | 1);
            if ((local_f0 & 1) != 0) {
              pvVar29 = local_e0;
            }
                    /* try { // try from 006d559c to 006d55a3 has its CatchHandler @ 006d5a40 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)&local_d8,(ulong)pvVar29);
            if ((local_f0 & 1) != 0) {
              operator_delete(local_e0);
            }
            if ((local_110 & 1) != 0) {
              operator_delete(local_100);
            }
            if ((local_128[0] & 1) != 0) {
              operator_delete(local_118);
            }
          }
          if (((ulong)local_90 & 1) != 0) {
            operator_delete(local_80);
          }
          ppuVar23 = (ulong **)ppuVar34[1];
          if ((ulong **)ppuVar34[1] == (ulong **)0x0) {
            ppuVar23 = ppuVar34 + 2;
            ppuVar27 = (ulong **)*ppuVar23;
            if ((ulong **)*ppuVar27 != ppuVar34) {
              do {
                puVar33 = *ppuVar23;
                ppuVar23 = (ulong **)(puVar33 + 2);
                ppuVar27 = (ulong **)*ppuVar23;
              } while (*ppuVar27 != puVar33);
            }
          }
          else {
            do {
              ppuVar27 = ppuVar23;
              ppuVar23 = (ulong **)*ppuVar27;
            } while ((ulong **)*ppuVar27 != (ulong **)0x0);
          }
          ppuVar34 = ppuVar27;
        } while (ppuVar27 != ppuVar3);
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar14 != 0
         )) {
                    /* try { // try from 006d587c to 006d5887 has its CatchHandler @ 006d5950 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pvVar29 = (void *)((ulong)&local_d8 | 1);
      if ((local_d8 & 1) != 0) {
        pvVar29 = local_c8;
      }
                    /* try { // try from 006d5668 to 006d567b has its CatchHandler @ 006d59b8 */
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004d33bb,
                        pvVar29);
      if ((local_d8 & 1) != 0) {
        operator_delete(local_c8);
      }
    }
    else {
                    /* try { // try from 006d542c to 006d5433 has its CatchHandler @ 006d59bc */
      _Var15 = std::__ndk1::
               __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>>>
               ::
               find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                         ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>>>
                           *)ppuVar34,local_a8 + 6);
      if (ppuVar3 == (ulong **)(ulong)_Var15) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar14 != 0)) {
                    /* try { // try from 006d590c to 006d5917 has its CatchHandler @ 006d5948 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pbVar26 = (byte *)((long)local_a8 + 0x19);
        if ((*(byte *)(local_a8 + 6) & 1) != 0) {
          pbVar26 = *(byte **)(local_a8 + 10);
        }
                    /* try { // try from 006d56b0 to 006d56d3 has its CatchHandler @ 006d5aa4 */
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "Command %s not found.\n",pbVar26);
      }
      else {
        local_90 = local_a8 + 6;
                    /* try { // try from 006d5448 to 006d54a3 has its CatchHandler @ 006d59c0 */
        pVar16 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,IConsoleCommand*>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                           ((basic_string *)ppuVar34,(piecewise_construct_t *)local_90,
                            (tuple *)&DAT_00516b93,(tuple *)&local_90);
        plVar17 = *(long **)((ulong)pVar16 + 0x38);
        if (plVar17 != (long *)0x0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar14 != 0)) {
                    /* try { // try from 006d58c4 to 006d58cf has its CatchHandler @ 006d594c */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pbVar32 = (byte *)(**(code **)(*plVar17 + 0x18))(plVar17);
          pbVar26 = *(byte **)(pbVar32 + 0x10);
          if ((*pbVar32 & 1) == 0) {
            pbVar26 = pbVar32 + 1;
          }
          LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_005118dd,
                            pbVar26);
        }
      }
    }
  }
  else {
LAB_006d53a8:
    if ((bVar9 & 1) != 0) {
      uVar28 = uVar21;
    }
                    /* try { // try from 006d53b8 to 006d53cf has its CatchHandler @ 006d59dc */
    if ((uVar28 == 4) &&
       (iVar14 = std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 compare((ulong)local_a8,0,(char *)0xffffffffffffffff,0x5058b4), iVar14 == 0))
    goto LAB_006d5408;
    if (!bVar12) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar14 != 0
         )) {
                    /* try { // try from 006d5834 to 006d583f has its CatchHandler @ 006d596c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      if ((*(byte *)(in_x0 + 0x80) & 1) != 0) {
        pSVar2 = *(StringUtil **)(in_x0 + 0x90);
      }
                    /* try { // try from 006d53f0 to 006d5403 has its CatchHandler @ 006d5aa4 */
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "%s : command not found\n",pSVar2);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)pbVar1);
  uVar4 = (uint)(*(byte *)(in_x0 + 0x80) >> 1);
  if ((*(byte *)(in_x0 + 0x80) & 1) != 0) {
    uVar4 = (uint)*(undefined8 *)(in_x0 + 0x88);
  }
  *(uint *)(in_x0 + 0xe8) = uVar4;
  if (((ulong)local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  pbVar1 = local_a8;
  pbVar31 = local_a0;
  if (local_a8 != (basic_string *)0x0) {
    while (pbVar6 = pbVar31, pbVar6 != pbVar1) {
      pbVar31 = pbVar6 + -6;
      if ((*(byte *)pbVar31 & 1) != 0) {
        operator_delete(*(void **)(pbVar6 + -2));
      }
    }
    local_a0 = pbVar1;
    operator_delete(local_a8);
  }
LAB_006d574c:
  *(undefined4 *)(in_x0 + 0xb0) = 0;
  *(undefined4 *)(in_x0 + 0x58) = 0;
  *(undefined4 *)(in_x0 + 0x108) = 0xffffffff;
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar11 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


