// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadingThreadMain
// Entry Point: 008bd1a0
// Size: 1348 bytes
// Signature: undefined __thiscall loadingThreadMain(SoundPlayer * this, bool * param_1)


/* WARNING: Type propagation algorithm not settling */
/* SoundPlayer::loadingThreadMain(bool volatile&) */

void __thiscall SoundPlayer::loadingThreadMain(SoundPlayer *this,bool *param_1)

{
  Sample **ppSVar1;
  long lVar2;
  byte bVar3;
  byte *pbVar4;
  char *pcVar5;
  long **pplVar6;
  byte bVar7;
  long lVar8;
  bool bVar9;
  Sample *pSVar10;
  Sample *pSVar11;
  int iVar12;
  long *this_00;
  void *__dest;
  SoundPlayer *pSVar13;
  ulong uVar14;
  Sample *pSVar15;
  ulong uVar16;
  Sample *pSVar17;
  long lVar18;
  void *__src;
  ulong __n;
  Sample *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  char *local_a8;
  long *local_a0;
  basic_string local_98 [4];
  byte *local_88;
  SoundPlayer *local_80;
  SoundPlayer *pSStack_78;
  undefined local_70;
  undefined7 uStack_6f;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  pSVar13 = *(SoundPlayer **)(this + 0x80);
  local_c0 = (Sample *)0x0;
  local_b8 = (Sample *)0x0;
  local_b0 = 0;
  if (((byte)this[0x70] & 1) == 0) {
    pSVar13 = this + 0x71;
  }
                    /* try { // try from 008bd1f4 to 008bd203 has its CatchHandler @ 008bd6f8 */
  FileManager::getFiles
            ((FileManager *)FileManager::s_singletonFileManager,(char *)pSVar13,(vector *)&local_c0)
  ;
  pSVar15 = local_b8;
  pSVar17 = local_b8;
  if (local_b8 != local_c0) {
    uVar16 = 0;
    pSVar17 = local_c0;
    do {
      if (*(int *)(pSVar17 + uVar16 * 0x30 + 0x18) == 2) {
                    /* try { // try from 008bd278 to 008bd283 has its CatchHandler @ 008bd70c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)&local_80);
                    /* try { // try from 008bd284 to 008bd2b7 has its CatchHandler @ 008bd724 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_80);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_80);
                    /* try { // try from 008bd2c4 to 008bd2cb has its CatchHandler @ 008bd704 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(local_98);
        pbVar4 = (byte *)((ulong)local_98 | 1);
        if (((byte)local_98[0] & 1) != 0) {
          pbVar4 = local_88;
        }
        bVar7 = *pbVar4;
        bVar3 = bVar7 ^ 0x20;
        if (0x19 < bVar7 - 0x61) {
          bVar3 = bVar7;
        }
        *pbVar4 = bVar3;
                    /* try { // try from 008bd2f8 to 008bd2ff has its CatchHandler @ 008bd72c */
        this_00 = (long *)operator_new(0x70);
        pbVar4 = (byte *)((ulong)local_98 | 1);
        if (((byte)local_98[0] & 1) != 0) {
          pbVar4 = local_88;
        }
                    /* try { // try from 008bd31c to 008bd31f has its CatchHandler @ 008bd714 */
        LocalFileListChannel::LocalFileListChannel
                  ((LocalFileListChannel *)this_00,(char *)pbVar4,*(uint *)(this + 0x104));
        pcVar5 = (char *)((ulong)&local_80 | 1);
        if (((ulong)local_80 & 1) != 0) {
          pcVar5 = (char *)CONCAT71(uStack_6f,local_70);
        }
                    /* try { // try from 008bd334 to 008bd34f has its CatchHandler @ 008bd72c */
        LocalFileListChannel::addFiles((LocalFileListChannel *)this_00,pcVar5,param_1);
        iVar12 = (**(code **)(*this_00 + 0x38))(this_00);
        if (iVar12 == 0) {
          (**(code **)(*this_00 + 8))(this_00);
        }
        else {
                    /* try { // try from 008bd360 to 008bd367 has its CatchHandler @ 008bd700 */
          local_a0 = this_00;
          std::__ndk1::vector<SoundPlayer::IChannel*,std::__ndk1::allocator<SoundPlayer::IChannel*>>
          ::insert((vector<SoundPlayer::IChannel*,std::__ndk1::allocator<SoundPlayer::IChannel*>> *)
                   (this + 0xe8),(__wrap_iter)*(undefined8 *)(this + 0xe8),(IChannel **)&local_a0);
          pplVar6 = *(long ***)(this + 200);
          if (pplVar6 == *(long ***)(this + 0xd0)) {
            __src = *(void **)(this + 0xc0);
            __n = (long)pplVar6 - (long)__src;
            uVar14 = ((long)__n >> 3) + 1;
            if (uVar14 >> 0x3d != 0) {
                    /* try { // try from 008bd6cc to 008bd6df has its CatchHandler @ 008bd6fc */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar14 <= (ulong)((long)__n >> 2)) {
              uVar14 = (long)__n >> 2;
            }
            if (0x7ffffffffffffff7 < __n) {
              uVar14 = 0x1fffffffffffffff;
            }
            if (uVar14 == 0) {
              __dest = (void *)0x0;
            }
            else {
              if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 008bd3dc to 008bd3df has its CatchHandler @ 008bd72c */
              __dest = operator_new(uVar14 << 3);
            }
            pplVar6 = (long **)((long)__dest + ((long)__n >> 3) * 8);
            *pplVar6 = this_00;
            if (0 < (long)__n) {
              memcpy(__dest,__src,__n);
            }
            *(void **)(this + 0xc0) = __dest;
            *(long ***)(this + 200) = pplVar6 + 1;
            *(void **)(this + 0xd0) = (void *)((long)__dest + uVar14 * 8);
            if (__src != (void *)0x0) {
              operator_delete(__src);
            }
          }
          else {
            *pplVar6 = this_00;
            *(long ***)(this + 200) = pplVar6 + 1;
          }
        }
        if (((byte)local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
        pSVar15 = local_b8;
        pSVar17 = local_c0;
        if (((ulong)local_80 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_6f,local_70));
          pSVar15 = local_b8;
          pSVar17 = local_c0;
        }
      }
      uVar16 = (ulong)((int)uVar16 + 1);
      uVar14 = ((long)pSVar15 - (long)pSVar17 >> 4) * -0x5555555555555555;
    } while (uVar16 <= uVar14 && uVar14 - uVar16 != 0);
  }
  *(undefined8 *)(this + 0xb8) = 0;
  this[0xd9] = (SoundPlayer)0x1;
  pSVar11 = pSVar17;
  if (pSVar17 != (Sample *)0x0) {
    while (pSVar10 = pSVar15, pSVar10 != pSVar17) {
      pSVar15 = pSVar10 + -0x30;
      pSVar11 = local_c0;
      if (((byte)*pSVar15 & 1) != 0) {
        operator_delete(*(void **)(pSVar10 + -0x20));
        pSVar11 = local_c0;
      }
    }
    local_b8 = pSVar17;
    operator_delete(pSVar11);
  }
  if (*param_1 == false) {
    do {
      Event::wait((Event *)(this + 400),0xffffffff);
      do {
        if (*param_1 != false) break;
        Mutex::enterCriticalSection();
        local_b8 = (Sample *)0x0;
        local_b0 = 0;
        local_a8 = (char *)0x0;
        local_70 = 0;
        local_80 = this + 0x110;
        pSStack_78 = this + 0x138;
                    /* try { // try from 008bd544 to 008bd54b has its CatchHandler @ 008bd774 */
        Mutex::enterCriticalSection();
        lVar18 = *(long *)(this + 0x160);
        if (lVar18 == 0) {
          bVar9 = true;
        }
        else {
          ppSVar1 = (Sample **)
                    (*(long *)(*(long *)(this + 0x140) +
                              (*(ulong *)(this + 0x158) >> 4 & 0xffffffffffffff8)) +
                    (*(ulong *)(this + 0x158) & 0x7f) * 0x20);
          local_c0 = *ppSVar1;
                    /* try { // try from 008bd578 to 008bd57f has its CatchHandler @ 008bd75c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_b8,(basic_string *)(ppSVar1 + 1));
          uVar16 = *(ulong *)(this + 0x158);
          lVar2 = *(long *)(*(long *)(this + 0x140) + (uVar16 >> 4 & 0xffffffffffffff8)) +
                  (uVar16 & 0x7f) * 0x20;
          if ((*(byte *)(lVar2 + 8) & 1) != 0) {
            operator_delete(*(void **)(lVar2 + 0x18));
            uVar16 = *(ulong *)(this + 0x158);
          }
          *(ulong *)(this + 0x158) = uVar16 + 1;
          *(long *)(this + 0x160) = *(long *)(this + 0x160) + -1;
          if (uVar16 + 1 < 0x100) {
            bVar9 = false;
          }
          else {
            operator_delete(**(void ***)(this + 0x140));
            bVar9 = false;
            *(long *)(this + 0x140) = *(long *)(this + 0x140) + 8;
            *(long *)(this + 0x158) = *(long *)(this + 0x158) + -0x80;
          }
        }
                    /* try { // try from 008bd600 to 008bd607 has its CatchHandler @ 008bd798 */
        Mutex::leaveCriticalSection();
        if (lVar18 != 0) {
          pcVar5 = (char *)((long)&local_b8 + 1);
          if (((ulong)local_b8 & 1) != 0) {
            pcVar5 = local_a8;
          }
                    /* try { // try from 008bd620 to 008bd65f has its CatchHandler @ 008bd76c */
          uVar16 = Sample::load(local_c0,pcVar5,false,2);
          if ((uVar16 & 1) == 0) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar12 != 0)) {
                    /* try { // try from 008bd694 to 008bd69f has its CatchHandler @ 008bd6e4 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            pcVar5 = (char *)((long)&local_b8 + 1);
            if (((ulong)local_b8 & 1) != 0) {
              pcVar5 = local_a8;
            }
            LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "Warning: Failed to load ambient sample from file \'%s\'\n",pcVar5);
          }
          bVar9 = false;
        }
        if (((ulong)local_b8 & 1) != 0) {
          operator_delete(local_a8);
        }
                    /* try { // try from 008bd674 to 008bd67b has its CatchHandler @ 008bd770 */
        Mutex::leaveCriticalSection();
      } while (!bVar9);
    } while (*param_1 == false);
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


