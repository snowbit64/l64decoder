// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadBlockedUsersFile
// Entry Point: 00c65bf8
// Size: 912 bytes
// Signature: undefined loadBlockedUsersFile(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* UserBlockManager::loadBlockedUsersFile() */

undefined4 UserBlockManager::loadBlockedUsersFile(void)

{
  long *this;
  char *pcVar1;
  UserDetails *pUVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  pair pVar6;
  int iVar7;
  long in_x0;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  char *pcVar12;
  uint uVar13;
  NativeFile aNStack_1f0 [40];
  byte local_1c8 [8];
  ulong local_1c0;
  char *local_1b8;
  ulong *local_1a8;
  ulong local_1a0;
  undefined8 uStack_198;
  void *local_190;
  ulong uStack_188;
  undefined8 uStack_180;
  void *local_178;
  undefined4 local_170;
  ulong local_168;
  undefined8 local_160;
  void *local_158;
  DomXMLFile aDStack_148 [216];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  FUN_006cadd8(local_1c8,in_x0 + 8,"blockedUserIds.xml");
  uVar8 = (ulong)(local_1c8[0] >> 1);
  if ((local_1c8[0] & 1) != 0) {
    uVar8 = local_1c0;
  }
  if (uVar8 != 0) {
    this = (long *)(in_x0 + 0x28);
    if (*(long *)(in_x0 + 0x40) != 0) {
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>>>
      ::__deallocate_node((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>>>
                           *)this,*(__hash_node_base **)(in_x0 + 0x38));
      lVar9 = *(long *)(in_x0 + 0x30);
      *(undefined8 *)(in_x0 + 0x38) = 0;
      if (lVar9 != 0) {
        lVar10 = 0;
        do {
          *(undefined8 *)(*this + lVar10 * 8) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar9 != lVar10);
      }
      *(undefined8 *)(in_x0 + 0x40) = 0;
    }
    lVar9 = *(long *)(in_x0 + 0x50);
    lVar10 = *(long *)(in_x0 + 0x58);
    while (lVar4 = lVar10, lVar4 != lVar9) {
      if ((*(byte *)(lVar4 + -0x18) & 1) != 0) {
        operator_delete(*(void **)(lVar4 + -8));
      }
      if ((*(byte *)(lVar4 + -0x38) & 1) != 0) {
        operator_delete(*(void **)(lVar4 + -0x28));
      }
      lVar10 = lVar4 + -0x50;
      if ((*(byte *)(lVar4 + -0x50) & 1) != 0) {
        operator_delete(*(void **)(lVar4 + -0x40));
      }
    }
    pcVar12 = (char *)((ulong)local_1c8 | 1);
    *(long *)(in_x0 + 0x58) = lVar9;
    pcVar1 = pcVar12;
    if ((local_1c8[0] & 1) != 0) {
      pcVar1 = local_1b8;
    }
                    /* try { // try from 00c65cc0 to 00c65cc3 has its CatchHandler @ 00c65fc8 */
    uVar8 = NativeFileUtil::fileExists(pcVar1);
    if ((uVar8 & 1) == 0) {
LAB_00c65f70:
      uVar11 = 1;
      *(undefined *)(in_x0 + 0x20) = 0;
      goto joined_r0x00c65f20;
    }
                    /* try { // try from 00c65cc8 to 00c65ccf has its CatchHandler @ 00c65fb8 */
    NativeFile::NativeFile(aNStack_1f0);
    pcVar1 = pcVar12;
    if ((local_1c8[0] & 1) != 0) {
      pcVar1 = local_1b8;
    }
                    /* try { // try from 00c65ce0 to 00c65cef has its CatchHandler @ 00c65fb0 */
    uVar8 = NativeFile::open((char *)aNStack_1f0,(ACCESS_MODE)pcVar1,false);
    if ((uVar8 & 1) != 0) {
                    /* try { // try from 00c65cf4 to 00c65cfb has its CatchHandler @ 00c65fa8 */
      DomXMLFile::DomXMLFile(aDStack_148);
      if ((local_1c8[0] & 1) != 0) {
        pcVar12 = local_1b8;
      }
                    /* try { // try from 00c65d0c to 00c65d17 has its CatchHandler @ 00c65fa0 */
      uVar8 = DomXMLFile::loadFromFile(aDStack_148,pcVar12,true);
      if ((uVar8 & 1) != 0) {
                    /* try { // try from 00c65d1c to 00c65d2b has its CatchHandler @ 00c65f9c */
        uVar5 = DomXMLFile::getNumChildren(aDStack_148,"blockedUserIds");
        if (uVar5 != 0) {
          uVar13 = 0;
          do {
            local_160 = 0;
            local_158 = (void *)0x0;
            local_168 = 0;
            uStack_188 = 0;
            local_190 = (void *)0x0;
            local_178 = (void *)0x0;
            uStack_180 = 0;
            uStack_198 = 0;
            local_1a0 = 0;
                    /* try { // try from 00c65db0 to 00c65e17 has its CatchHandler @ 00c65fd0 */
            uVar8 = loadBlockedUserDetails(aDStack_148,uVar13,(UserDetails *)&local_1a0);
            if ((uVar8 & 1) == 0) {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar7 != 0)) {
                    /* try { // try from 00c65ed0 to 00c65edb has its CatchHandler @ 00c65f88 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
                    /* try { // try from 00c65e50 to 00c65e77 has its CatchHandler @ 00c65fd0 */
              LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                                "[UserBlockManager] Skipped invalid blocked user details at index %u\n"
                                ,(ulong)uVar13);
            }
            else {
              local_1a8 = &local_1a0;
              pVar6 = std::__ndk1::
                      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,UserBlockManager::UserDetails>>>
                      ::
                      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                ((basic_string *)this,(piecewise_construct_t *)&local_1a0,
                                 (tuple *)&DAT_0053e4db,(tuple *)&local_1a8);
              uVar8 = (ulong)pVar6;
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)(uVar8 + 0x28),(basic_string *)&local_1a0);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)(uVar8 + 0x40),(basic_string *)&uStack_188);
              *(undefined4 *)(uVar8 + 0x58) = local_170;
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)(uVar8 + 0x60),(basic_string *)&local_168);
              pUVar2 = *(UserDetails **)(in_x0 + 0x58);
              if (pUVar2 == *(UserDetails **)(in_x0 + 0x60)) {
                std::__ndk1::
                vector<UserBlockManager::UserDetails,std::__ndk1::allocator<UserBlockManager::UserDetails>>
                ::__push_back_slow_path<UserBlockManager::UserDetails_const&>
                          ((vector<UserBlockManager::UserDetails,std::__ndk1::allocator<UserBlockManager::UserDetails>>
                            *)(long *)(in_x0 + 0x50),(UserDetails *)&local_1a0);
              }
              else {
                    /* try { // try from 00c65e24 to 00c65e33 has its CatchHandler @ 00c65fbc */
                std::__ndk1::allocator<UserBlockManager::UserDetails>::
                construct<UserBlockManager::UserDetails,UserBlockManager::UserDetails_const&>
                          ((allocator<UserBlockManager::UserDetails> *)(in_x0 + 0x60),pUVar2,
                           (UserDetails *)&local_1a0);
                *(UserDetails **)(in_x0 + 0x58) = pUVar2 + 0x50;
              }
            }
            if ((local_168 & 1) != 0) {
              operator_delete(local_158);
            }
            if ((uStack_188 & 1) != 0) {
              operator_delete(local_178);
            }
            if ((local_1a0 & 1) != 0) {
              operator_delete(local_190);
            }
            uVar13 = uVar13 + 1;
          } while (uVar5 != uVar13);
        }
        DomXMLFile::~DomXMLFile(aDStack_148);
        NativeFile::~NativeFile(aNStack_1f0);
        goto LAB_00c65f70;
      }
      DomXMLFile::~DomXMLFile(aDStack_148);
    }
    NativeFile::~NativeFile(aNStack_1f0);
  }
  uVar11 = 0;
joined_r0x00c65f20:
  if ((local_1c8[0] & 1) != 0) {
    operator_delete(local_1b8);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


