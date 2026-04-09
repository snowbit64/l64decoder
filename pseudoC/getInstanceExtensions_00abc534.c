// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstanceExtensions
// Entry Point: 00abc534
// Size: 1456 bytes
// Signature: undefined __cdecl getInstanceExtensions(uint param_1, uint * param_2, vector * param_3, uint param_4)


/* VulkanExtensionUtil::getInstanceExtensions(unsigned int, unsigned int&,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >&, unsigned int) */

bool VulkanExtensionUtil::getInstanceExtensions
               (uint param_1,uint *param_2,vector *param_3,uint param_4)

{
  byte *pbVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  bool bVar7;
  int iVar8;
  __tree_iterator _Var9;
  char *pcVar10;
  size_t sVar11;
  __tree_node_base **pp_Var12;
  undefined8 *puVar13;
  void *pvVar14;
  ulong uVar15;
  void *pvVar16;
  byte *pbVar17;
  long lVar18;
  char *pcVar19;
  ulong uVar20;
  undefined8 local_a8;
  ulong uStack_a0;
  void *local_98;
  __tree_node **local_90;
  __tree_node_base *local_88;
  long local_80;
  uint local_74;
  __tree_end_node *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_74 = 0;
  iVar8 = (*vkEnumerateInstanceExtensionProperties)(0,&local_74,0);
  if (iVar8 == 0) {
    uVar15 = (ulong)local_74;
    if (local_74 != 0) {
      pcVar10 = (char *)operator_new(uVar15 * 0x104);
      memset(pcVar10,0,((uVar15 * 0x104 - 0x104) / 0x104) * 0x104 + 0x104);
                    /* try { // try from 00abc618 to 00abc657 has its CatchHandler @ 00abcb14 */
      iVar8 = (*vkEnumerateInstanceExtensionProperties)(0,&local_74,pcVar10);
      bVar7 = iVar8 == 0;
      if (iVar8 == 0) {
        local_88 = (__tree_node_base *)0x0;
        local_80 = 0;
        local_90 = (__tree_node **)&local_88;
        if (local_74 != 0) {
          uVar15 = 0;
          pcVar19 = pcVar10;
          do {
            sVar11 = strlen(pcVar19);
            if (0xffffffffffffffef < sVar11) {
                    /* try { // try from 00abc9e8 to 00abc9ef has its CatchHandler @ 00abcb3c */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (sVar11 < 0x17) {
              local_a8 = CONCAT71(local_a8._1_7_,(char)((int)sVar11 << 1));
              pvVar16 = (void *)((ulong)&local_a8 | 1);
              if (sVar11 != 0) goto LAB_00abc718;
            }
            else {
              uVar20 = sVar11 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00abc700 to 00abc707 has its CatchHandler @ 00abcb2c */
              pvVar16 = operator_new(uVar20);
              local_a8 = uVar20 | 1;
              uStack_a0 = sVar11;
              local_98 = pvVar16;
LAB_00abc718:
              memcpy(pvVar16,pcVar19,sVar11);
            }
            *(undefined *)((long)pvVar16 + sVar11) = 0;
                    /* try { // try from 00abc72c to 00abc75f has its CatchHandler @ 00abcb44 */
            pp_Var12 = std::__ndk1::
                       __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                       ::
                       __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                 ((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                                   *)&local_90,&local_70,(basic_string *)&local_a8);
            if (*pp_Var12 == (__tree_node_base *)0x0) {
              puVar13 = (undefined8 *)operator_new(0x38);
              pvVar16 = local_98;
              uVar6 = uStack_a0;
              uVar20 = local_a8;
              *puVar13 = 0;
              puVar13[1] = 0;
              uStack_a0 = 0;
              local_98 = (void *)0x0;
              local_a8 = 0;
              puVar13[6] = pvVar16;
              puVar13[5] = uVar6;
              puVar13[4] = uVar20;
              puVar13[2] = local_70;
              *pp_Var12 = (__tree_node_base *)puVar13;
              if ((__tree_node **)*local_90 != (__tree_node **)0x0) {
                puVar13 = (undefined8 *)*pp_Var12;
                local_90 = (__tree_node **)*local_90;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        (local_88,(__tree_node_base *)puVar13);
              local_80 = local_80 + 1;
            }
            if ((local_a8 & 1) != 0) {
              operator_delete(local_98);
            }
            uVar15 = uVar15 + 1;
            pcVar19 = pcVar19 + 0x104;
          } while (uVar15 < local_74);
        }
        pbVar1 = *(byte **)param_3;
        pbVar17 = *(byte **)(param_3 + 8);
        while (pbVar5 = pbVar17, pbVar5 != pbVar1) {
          pbVar17 = pbVar5 + -0x18;
          if ((*pbVar17 & 1) != 0) {
            operator_delete(*(void **)(pbVar5 + -8));
          }
        }
        pvVar16 = (void *)((ulong)&local_a8 | 1);
        lVar18 = 0;
        *(byte **)(param_3 + 8) = pbVar1;
        do {
          uVar3 = *(uint *)((long)&s_instanceExtensionInfo + lVar18);
          if ((uVar3 & param_1) != 0) {
            pcVar19 = *(char **)((long)&PTR_s_VK_KHR_surface_00fe6268 + lVar18);
            sVar11 = strlen(pcVar19);
            if (0xffffffffffffffef < sVar11) {
                    /* try { // try from 00abc9f0 to 00abc9f7 has its CatchHandler @ 00abcb34 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (sVar11 < 0x17) {
              local_a8 = CONCAT71(local_a8._1_7_,(char)((int)sVar11 << 1));
              pvVar14 = pvVar16;
              if (sVar11 != 0) goto LAB_00abc8ac;
            }
            else {
              uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00abc894 to 00abc89b has its CatchHandler @ 00abcb28 */
              pvVar14 = operator_new(uVar15);
              local_a8 = uVar15 | 1;
              uStack_a0 = sVar11;
              local_98 = pvVar14;
LAB_00abc8ac:
              memcpy(pvVar14,pcVar19,sVar11);
            }
            *(undefined *)((long)pvVar14 + sVar11) = 0;
                    /* try { // try from 00abc8c0 to 00abc8cb has its CatchHandler @ 00abcb38 */
            _Var9 = std::__ndk1::
                    __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    ::
                    find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                              ((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                                *)&local_90,(basic_string *)&local_a8);
            if ((local_a8 & 1) != 0) {
              operator_delete(local_98);
            }
            if (&local_88 == (__tree_node_base **)(ulong)_Var9) {
              if (param_4 < *(uint *)((long)&DAT_00fe6270 + lVar18)) goto LAB_00abc83c;
            }
            else {
              sVar11 = strlen(pcVar19);
              if (0xffffffffffffffef < sVar11) {
                    /* try { // try from 00abc9f8 to 00abc9ff has its CatchHandler @ 00abcb30 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (sVar11 < 0x17) {
                local_a8 = CONCAT71(local_a8._1_7_,(char)((int)sVar11 << 1));
                pvVar14 = pvVar16;
                if (sVar11 != 0) goto LAB_00abc954;
              }
              else {
                uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00abc93c to 00abc943 has its CatchHandler @ 00abcb20 */
                pvVar14 = operator_new(uVar15);
                local_a8 = uVar15 | 1;
                uStack_a0 = sVar11;
                local_98 = pvVar14;
LAB_00abc954:
                memcpy(pvVar14,pcVar19,sVar11);
              }
              *(undefined *)((long)pvVar14 + sVar11) = 0;
              puVar2 = *(ulong **)(param_3 + 8);
              if (puVar2 < *(ulong **)(param_3 + 0x10)) {
                puVar2[2] = (ulong)local_98;
                puVar2[1] = uStack_a0;
                *puVar2 = local_a8;
                *(ulong **)(param_3 + 8) = puVar2 + 3;
              }
              else {
                    /* try { // try from 00abc974 to 00abc97f has its CatchHandler @ 00abcb24 */
                std::__ndk1::
                vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                ::
                __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                            *)param_3,(basic_string *)&local_a8);
                if ((local_a8 & 1) != 0) {
                  operator_delete(local_98);
                }
              }
            }
            *param_2 = *param_2 | uVar3;
          }
LAB_00abc83c:
          lVar18 = lVar18 + 0x18;
        } while (lVar18 != 0x78);
        std::__ndk1::
        __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::destroy((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                   *)&local_90,(__tree_node *)local_88);
      }
      else {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0
           )) {
                    /* try { // try from 00abca58 to 00abca67 has its CatchHandler @ 00abcae8 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: failed to enumerate vulkan instance extensions.\n");
      }
      operator_delete(pcVar10);
      goto LAB_00abc9b4;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0)) {
                    /* try { // try from 00abcaa8 to 00abcab3 has its CatchHandler @ 00abcae4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar10 = "Error: no vulkan instance extensions found.\n";
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0)) {
                    /* try { // try from 00abca10 to 00abca1b has its CatchHandler @ 00abcafc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar10 = "Error: failed to enumerate vulkan instance extensions.\n";
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar10);
  bVar7 = false;
LAB_00abc9b4:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}


