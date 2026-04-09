// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDeviceExtensions
// Entry Point: 00abcb74
// Size: 1464 bytes
// Signature: undefined __cdecl getDeviceExtensions(VkPhysicalDevice_T * param_1, uint param_2, uint * param_3, vector * param_4, uint param_5)


/* VulkanExtensionUtil::getDeviceExtensions(VkPhysicalDevice_T*, unsigned int, unsigned int&,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >&, unsigned int) */

bool VulkanExtensionUtil::getDeviceExtensions
               (VkPhysicalDevice_T *param_1,uint param_2,uint *param_3,vector *param_4,uint param_5)

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
  iVar8 = (*vkEnumerateDeviceExtensionProperties)(param_1,0,&local_74,0);
  if (iVar8 == 0) {
    uVar15 = (ulong)local_74;
    if (local_74 != 0) {
      pcVar10 = (char *)operator_new(uVar15 * 0x104);
      memset(pcVar10,0,((uVar15 * 0x104 - 0x104) / 0x104) * 0x104 + 0x104);
                    /* try { // try from 00abcc5c to 00abcc9f has its CatchHandler @ 00abd15c */
      iVar8 = (*vkEnumerateDeviceExtensionProperties)(param_1,0,&local_74,pcVar10);
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
                    /* try { // try from 00abd030 to 00abd037 has its CatchHandler @ 00abd184 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (sVar11 < 0x17) {
              local_a8 = CONCAT71(local_a8._1_7_,(char)((int)sVar11 << 1));
              pvVar16 = (void *)((ulong)&local_a8 | 1);
              if (sVar11 != 0) goto LAB_00abcd60;
            }
            else {
              uVar20 = sVar11 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00abcd48 to 00abcd4f has its CatchHandler @ 00abd174 */
              pvVar16 = operator_new(uVar20);
              local_a8 = uVar20 | 1;
              uStack_a0 = sVar11;
              local_98 = pvVar16;
LAB_00abcd60:
              memcpy(pvVar16,pcVar19,sVar11);
            }
            *(undefined *)((long)pvVar16 + sVar11) = 0;
                    /* try { // try from 00abcd74 to 00abcda7 has its CatchHandler @ 00abd18c */
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
        pbVar1 = *(byte **)param_4;
        pbVar17 = *(byte **)(param_4 + 8);
        while (pbVar5 = pbVar17, pbVar5 != pbVar1) {
          pbVar17 = pbVar5 + -0x18;
          if ((*pbVar17 & 1) != 0) {
            operator_delete(*(void **)(pbVar5 + -8));
          }
        }
        pvVar16 = (void *)((ulong)&local_a8 | 1);
        lVar18 = 0;
        *(byte **)(param_4 + 8) = pbVar1;
        do {
          uVar3 = *(uint *)((long)&s_deviceExtensionInfo + lVar18);
          if ((uVar3 & param_2) != 0) {
            pcVar19 = *(char **)((long)&PTR_s_VK_KHR_swapchain_00fe62e0 + lVar18);
            sVar11 = strlen(pcVar19);
            if (0xffffffffffffffef < sVar11) {
                    /* try { // try from 00abd038 to 00abd03f has its CatchHandler @ 00abd17c */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (sVar11 < 0x17) {
              local_a8 = CONCAT71(local_a8._1_7_,(char)((int)sVar11 << 1));
              pvVar14 = pvVar16;
              if (sVar11 != 0) goto LAB_00abcef4;
            }
            else {
              uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00abcedc to 00abcee3 has its CatchHandler @ 00abd170 */
              pvVar14 = operator_new(uVar15);
              local_a8 = uVar15 | 1;
              uStack_a0 = sVar11;
              local_98 = pvVar14;
LAB_00abcef4:
              memcpy(pvVar14,pcVar19,sVar11);
            }
            *(undefined *)((long)pvVar14 + sVar11) = 0;
                    /* try { // try from 00abcf08 to 00abcf13 has its CatchHandler @ 00abd180 */
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
              if (param_5 < *(uint *)((long)&DAT_00fe62e8 + lVar18)) goto LAB_00abce84;
            }
            else {
              sVar11 = strlen(pcVar19);
              if (0xffffffffffffffef < sVar11) {
                    /* try { // try from 00abd040 to 00abd047 has its CatchHandler @ 00abd178 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (sVar11 < 0x17) {
                local_a8 = CONCAT71(local_a8._1_7_,(char)((int)sVar11 << 1));
                pvVar14 = pvVar16;
                if (sVar11 != 0) goto LAB_00abcf9c;
              }
              else {
                uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00abcf84 to 00abcf8b has its CatchHandler @ 00abd168 */
                pvVar14 = operator_new(uVar15);
                local_a8 = uVar15 | 1;
                uStack_a0 = sVar11;
                local_98 = pvVar14;
LAB_00abcf9c:
                memcpy(pvVar14,pcVar19,sVar11);
              }
              *(undefined *)((long)pvVar14 + sVar11) = 0;
              puVar2 = *(ulong **)(param_4 + 8);
              if (puVar2 < *(ulong **)(param_4 + 0x10)) {
                puVar2[2] = (ulong)local_98;
                puVar2[1] = uStack_a0;
                *puVar2 = local_a8;
                *(ulong **)(param_4 + 8) = puVar2 + 3;
              }
              else {
                    /* try { // try from 00abcfbc to 00abcfc7 has its CatchHandler @ 00abd16c */
                std::__ndk1::
                vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                ::
                __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                            *)param_4,(basic_string *)&local_a8);
                if ((local_a8 & 1) != 0) {
                  operator_delete(local_98);
                }
              }
            }
            *param_3 = *param_3 | uVar3;
          }
LAB_00abce84:
          lVar18 = lVar18 + 0x18;
        } while (lVar18 != 0x138);
        std::__ndk1::
        __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::destroy((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                   *)&local_90,(__tree_node *)local_88);
      }
      else {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0
           )) {
                    /* try { // try from 00abd0a0 to 00abd0af has its CatchHandler @ 00abd130 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: failed to enumerate vulkan device extensions.\n");
      }
      operator_delete(pcVar10);
      goto LAB_00abcffc;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0)) {
                    /* try { // try from 00abd0f0 to 00abd0fb has its CatchHandler @ 00abd12c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar10 = "Error: no vulkan device extensions found.\n";
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0)) {
                    /* try { // try from 00abd058 to 00abd063 has its CatchHandler @ 00abd144 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar10 = "Error: failed to enumerate vulkan device extensions.\n";
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar10);
  bVar7 = false;
LAB_00abcffc:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}


