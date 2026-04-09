// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addLocalFolder
// Entry Point: 008bef78
// Size: 1816 bytes
// Signature: undefined __thiscall addLocalFolder(LocalFileListChannel * this, char * param_1, uint param_2, bool * param_3)


/* LocalFileListChannel::addLocalFolder(char const*, unsigned int, bool volatile&) */

void __thiscall
LocalFileListChannel::addLocalFolder
          (LocalFileListChannel *this,char *param_1,uint param_2,bool *param_3)

{
  basic_string *pbVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  size_t sVar8;
  void *__dest;
  char *pcVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  char *pcVar16;
  ulong uVar17;
  undefined8 local_2a0;
  size_t local_298;
  char *local_290;
  byte *local_288;
  byte *local_280;
  undefined8 local_278;
  undefined8 local_270;
  size_t local_268;
  void *local_260;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if ((param_2 < 8) && (*param_3 == false)) {
    local_288 = (byte *)0x0;
    local_280 = (byte *)0x0;
    local_278 = 0;
                    /* try { // try from 008bf008 to 008bf017 has its CatchHandler @ 008bf6cc */
    FileManager::getFiles
              ((FileManager *)FileManager::s_singletonFileManager,param_1,(vector *)&local_288);
    if (local_280 != local_288) {
      uVar17 = 0;
      do {
        if (0xfff < (ulong)((*(long *)(this + 0x10) - *(long *)(this + 8) >> 3) *
                           -0x5555555555555555)) {
          if (this[0x30] == (LocalFileListChannel)0x0) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar7 != 0)) {
                    /* try { // try from 008bf654 to 008bf65f has its CatchHandler @ 008bf690 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
                    /* try { // try from 008bf2f8 to 008bf30f has its CatchHandler @ 008bf6bc */
            LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "Warning: Music player maximum number of local files reached (maximum is %d files).\n"
                              ,0x1000);
            this[0x30] = (LocalFileListChannel)0x1;
          }
          break;
        }
        sVar8 = strlen(param_1);
        if (0xffffffffffffffef < sVar8) {
                    /* try { // try from 008bf5f4 to 008bf5fb has its CatchHandler @ 008bf6d8 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar8 < 0x17) {
          local_270 = CONCAT71(local_270._1_7_,(char)((int)sVar8 << 1));
          __dest = (void *)((ulong)&local_270 | 1);
          if (sVar8 != 0) goto LAB_008bf0d4;
        }
        else {
          uVar11 = sVar8 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 008bf0bc to 008bf0c3 has its CatchHandler @ 008bf6d0 */
          __dest = operator_new(uVar11);
          local_270 = uVar11 | 1;
          local_268 = sVar8;
          local_260 = __dest;
LAB_008bf0d4:
          memcpy(__dest,param_1,sVar8);
        }
        *(undefined *)((long)__dest + sVar8) = 0;
                    /* try { // try from 008bf0e8 to 008bf14f has its CatchHandler @ 008bf6e8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_270);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_270);
        if (*(int *)(local_288 + uVar17 * 0x30 + 0x18) == 1) {
          pbVar12 = local_288 + uVar17 * 0x30;
          pbVar14 = *(byte **)(pbVar12 + 0x10);
          if ((*pbVar12 & 1) == 0) {
            pbVar14 = pbVar12 + 1;
          }
          uVar6 = __strlen_chk(pbVar14,0xffffffffffffffff);
          if (4 < uVar6) {
            bVar5 = pbVar14[uVar6 - 3];
            uVar10 = bVar5 | 0x20;
            uVar2 = uVar6 - 2;
            uVar6 = uVar6 - 1;
            if (0x19 < bVar5 - 0x41) {
              uVar10 = (uint)bVar5;
            }
            if (uVar10 == (byte)*s_pFileExtensions) {
              bVar5 = pbVar14[uVar2];
              uVar15 = bVar5 | 0x20;
              if (0x19 < bVar5 - 0x41) {
                uVar15 = (uint)bVar5;
              }
              if (uVar15 != (byte)s_pFileExtensions[1]) goto LAB_008bf1d4;
              bVar5 = pbVar14[uVar6];
              uVar15 = bVar5 | 0x20;
              if (0x19 < bVar5 - 0x41) {
                uVar15 = (uint)bVar5;
              }
              if (uVar15 != (byte)s_pFileExtensions[2]) goto LAB_008bf1d4;
LAB_008bf284:
              pbVar1 = *(basic_string **)(this + 0x10);
              if (0xfff < (ulong)(((long)pbVar1 - *(long *)(this + 8) >> 3) * -0x5555555555555555))
              {
                if ((local_270 & 1) != 0) {
                  operator_delete(local_260);
                }
                break;
              }
              if (pbVar1 == *(basic_string **)(this + 0x18)) {
                    /* try { // try from 008bf2c0 to 008bf2cb has its CatchHandler @ 008bf6e8 */
                std::__ndk1::
                vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                ::
                __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                          ((basic_string *)(this + 8));
              }
              else {
                    /* try { // try from 008bf2a8 to 008bf2b3 has its CatchHandler @ 008bf6c0 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string(pbVar1);
                *(basic_string **)(this + 0x10) = pbVar1 + 6;
              }
            }
            else {
LAB_008bf1d4:
              if (uVar10 == (byte)*PTR_DAT_0103ef98) {
                bVar5 = pbVar14[uVar2];
                uVar15 = bVar5 | 0x20;
                if (0x19 < bVar5 - 0x41) {
                  uVar15 = (uint)bVar5;
                }
                if (uVar15 == (byte)PTR_DAT_0103ef98[1]) {
                  bVar5 = pbVar14[uVar6];
                  uVar15 = bVar5 | 0x20;
                  if (0x19 < bVar5 - 0x41) {
                    uVar15 = (uint)bVar5;
                  }
                  if (uVar15 == (byte)PTR_DAT_0103ef98[2]) goto LAB_008bf284;
                }
              }
              if (uVar10 == (byte)*PTR_DAT_0103efa0) {
                bVar5 = pbVar14[uVar2];
                uVar10 = bVar5 | 0x20;
                if (0x19 < bVar5 - 0x41) {
                  uVar10 = (uint)bVar5;
                }
                if (uVar10 == (byte)PTR_DAT_0103efa0[1]) {
                  bVar5 = pbVar14[uVar6];
                  uVar6 = bVar5 | 0x20;
                  if (0x19 < bVar5 - 0x41) {
                    uVar6 = (uint)bVar5;
                  }
                  if (uVar6 == (byte)PTR_DAT_0103efa0[2]) goto LAB_008bf284;
                }
              }
            }
          }
        }
        if ((local_270 & 1) != 0) {
          operator_delete(local_260);
        }
        uVar17 = (ulong)((int)uVar17 + 1);
        uVar11 = ((long)local_280 - (long)local_288 >> 4) * -0x5555555555555555;
      } while (uVar17 <= uVar11 && uVar11 - uVar17 != 0);
    }
    pbVar14 = local_280;
    if (local_280 != local_288) {
      uVar17 = 0;
      pcVar16 = (char *)((ulong)&local_2a0 | 1);
      do {
        sVar8 = strlen(param_1);
        if (0xffffffffffffffef < sVar8) {
                    /* try { // try from 008bf5ec to 008bf5f3 has its CatchHandler @ 008bf6e0 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar8 < 0x17) {
          local_2a0 = CONCAT71(local_2a0._1_7_,(char)((int)sVar8 << 1));
          pcVar9 = pcVar16;
          if (sVar8 != 0) goto LAB_008bf3c4;
        }
        else {
          uVar11 = sVar8 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 008bf3ac to 008bf3b3 has its CatchHandler @ 008bf6dc */
          pcVar9 = (char *)operator_new(uVar11);
          local_2a0 = uVar11 | 1;
          local_298 = sVar8;
          local_290 = pcVar9;
LAB_008bf3c4:
          memcpy(pcVar9,param_1,sVar8);
        }
        pcVar9[sVar8] = '\0';
                    /* try { // try from 008bf3d8 to 008bf407 has its CatchHandler @ 008bf6fc */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_2a0);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_2a0);
        if (*(int *)(local_288 + uVar17 * 0x30 + 0x18) == 2) {
          pcVar9 = pcVar16;
          if ((local_2a0 & 1) != 0) {
            pcVar9 = local_290;
          }
                    /* try { // try from 008bf52c to 008bf53b has its CatchHandler @ 008bf6fc */
          addLocalFolder(this,pcVar9,param_2 + 1,param_3);
        }
        else {
                    /* try { // try from 008bf428 to 008bf517 has its CatchHandler @ 008bf6d4 */
          if ((*(int *)(local_288 + uVar17 * 0x30 + 0x18) == 1) &&
             (pbVar14 = (byte *)PathShortcutUtil::getShortcutFileExtension(), param_2 == 0)) {
            pbVar13 = local_288 + uVar17 * 0x30;
            pbVar12 = *(byte **)(pbVar13 + 0x10);
            if ((*pbVar13 & 1) == 0) {
              pbVar12 = pbVar13 + 1;
            }
            uVar6 = __strlen_chk(pbVar12,0xffffffffffffffff);
            if (4 < uVar6) {
              bVar5 = pbVar12[uVar6 - 3];
              uVar10 = bVar5 | 0x20;
              if (0x19 < bVar5 - 0x41) {
                uVar10 = (uint)bVar5;
              }
              if (uVar10 == *pbVar14) {
                bVar5 = pbVar12[uVar6 - 2];
                uVar10 = bVar5 | 0x20;
                if (0x19 < bVar5 - 0x41) {
                  uVar10 = (uint)bVar5;
                }
                if (uVar10 == pbVar14[1]) {
                  bVar5 = pbVar12[uVar6 - 1];
                  uVar6 = bVar5 | 0x20;
                  if (0x19 < bVar5 - 0x41) {
                    uVar6 = (uint)bVar5;
                  }
                  if (uVar6 == pbVar14[2]) {
                    pcVar9 = pcVar16;
                    if ((local_2a0 & 1) != 0) {
                      pcVar9 = local_290;
                    }
                    bVar5 = PathShortcutUtil::getPath(pcVar9,(char *)&local_270);
                    if ((bVar5 & (char)local_270 != '\0') == 1) {
                      addLocalFolder(this,(char *)&local_270,1,param_3);
                    }
                  }
                }
              }
            }
          }
        }
        if ((local_2a0 & 1) != 0) {
          operator_delete(local_290);
        }
        uVar17 = (ulong)((int)uVar17 + 1);
        uVar11 = ((long)local_280 - (long)local_288 >> 4) * -0x5555555555555555;
        pbVar14 = local_288;
      } while (uVar17 <= uVar11 && uVar11 - uVar17 != 0);
    }
    pbVar12 = pbVar14;
    pbVar13 = local_280;
    if (pbVar14 != (byte *)0x0) {
      while (pbVar4 = pbVar13, pbVar4 != pbVar14) {
        pbVar13 = pbVar4 + -0x30;
        pbVar12 = local_288;
        if ((*pbVar13 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -0x20));
          pbVar12 = local_288;
        }
      }
      local_280 = pbVar14;
      operator_delete(pbVar12);
    }
  }
  else if (this[0x30] == (LocalFileListChannel)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 008bf60c to 008bf617 has its CatchHandler @ 008bf6a4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Music player maximum local files folder depth reached (maximum is %d levels).\n"
                      ,8);
    this[0x30] = (LocalFileListChannel)0x1;
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


