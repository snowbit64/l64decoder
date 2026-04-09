// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finalizeT
// Entry Point: 00c01dd4
// Size: 892 bytes
// Signature: undefined finalizeT(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DictionaryCreator::Main::finalizeT() */

undefined8 DictionaryCreator::Main::finalizeT(void)

{
  int *piVar1;
  uint uVar2;
  void *__src;
  byte bVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  long in_x0;
  void *pvVar8;
  void *pvVar9;
  void **this;
  long **pplVar10;
  ulong uVar11;
  ulong uVar12;
  long **pplVar13;
  long *plVar14;
  ulong uVar15;
  void *__dest;
  long **pplVar16;
  uint uVar17;
  ulong uVar18;
  int local_a0 [2];
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  int *local_80;
  int *local_78;
  int *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_80 = (int *)0x0;
  local_78 = (int *)0x0;
  local_70 = (int *)0x0;
  if (*(long ***)(in_x0 + 0x10) != (long **)(in_x0 + 0x18)) {
    pplVar16 = *(long ***)(in_x0 + 0x10);
    do {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      bVar3 = *(byte *)(pplVar16 + 4);
      uVar17 = (uint)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar17 = *(uint *)(pplVar16 + 5);
      }
      local_a0[0] = (uVar17 - 3) * *(int *)(pplVar16 + 7);
                    /* try { // try from 00c01e64 to 00c01e6b has its CatchHandler @ 00c0219c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &local_98,(basic_string *)(pplVar16 + 4));
      piVar1 = local_78;
      if (local_78 == local_70) {
                    /* try { // try from 00c01e98 to 00c01ea3 has its CatchHandler @ 00c0219c */
        std::__ndk1::
        vector<DictionaryCreator::Main::Entry,std::__ndk1::allocator<DictionaryCreator::Main::Entry>>
        ::__push_back_slow_path<DictionaryCreator::Main::Entry_const&>
                  ((vector<DictionaryCreator::Main::Entry,std::__ndk1::allocator<DictionaryCreator::Main::Entry>>
                    *)&local_80,(Entry *)local_a0);
      }
      else {
        *local_78 = local_a0[0];
                    /* try { // try from 00c01e84 to 00c01e8b has its CatchHandler @ 00c02190 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)(local_78 + 2));
        local_78 = piVar1 + 8;
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      pplVar10 = (long **)pplVar16[1];
      if ((long **)pplVar16[1] == (long **)0x0) {
        pplVar10 = pplVar16 + 2;
        pplVar13 = (long **)*pplVar10;
        if ((long **)*pplVar13 != pplVar16) {
          do {
            plVar14 = *pplVar10;
            pplVar10 = (long **)(plVar14 + 2);
            pplVar13 = (long **)*pplVar10;
          } while (*pplVar13 != plVar14);
        }
      }
      else {
        do {
          pplVar13 = pplVar10;
          pplVar10 = (long **)*pplVar13;
        } while (*pplVar13 != (long *)0x0);
      }
      pplVar16 = pplVar13;
    } while (pplVar13 != (long **)(in_x0 + 0x18));
  }
                    /* try { // try from 00c01f0c to 00c01f13 has its CatchHandler @ 00c02180 */
  std::__ndk1::
  __sort<std::__ndk1::greater<DictionaryCreator::Main::Entry>&,DictionaryCreator::Main::Entry*>
            ((Entry *)local_80,(Entry *)local_78,(greater *)local_a0);
  uVar15 = (long)local_78 - (long)local_80;
  if (0x800000 < uVar15) {
    piVar1 = local_80 + 0x200000;
    piVar6 = local_78;
    while (piVar5 = piVar6, piVar5 != piVar1) {
      piVar6 = piVar5 + -8;
      if ((*(byte *)(piVar5 + -6) & 1) != 0) {
        operator_delete(*(void **)(piVar5 + -2));
      }
    }
    uVar15 = (long)piVar1 - (long)local_80;
    local_78 = piVar1;
  }
  piVar1 = local_80;
  uVar18 = (long)uVar15 >> 5;
  if (uVar15 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    uVar12 = 0;
    do {
      uVar11 = (ulong)((int)uVar12 + 1);
      uVar2 = (uint)(*(byte *)(local_80 + uVar12 * 8 + 2) >> 1);
      if ((*(byte *)(local_80 + uVar12 * 8 + 2) & 1) != 0) {
        uVar2 = local_80[uVar12 * 8 + 4];
      }
      uVar17 = uVar17 + uVar2;
      uVar12 = uVar11;
    } while (uVar11 < uVar18);
  }
                    /* try { // try from 00c01fa8 to 00c01fab has its CatchHandler @ 00c02178 */
  pvVar8 = operator_new__((ulong)uVar17);
  uVar12 = uVar18 << 2;
  if (uVar18 >> 0x3e != 0) {
    uVar12 = 0xffffffffffffffff;
  }
                    /* try { // try from 00c01fbc to 00c01fbf has its CatchHandler @ 00c02170 */
  pvVar9 = operator_new__(uVar12);
  if (uVar15 != 0) {
    uVar15 = 0;
    __dest = pvVar8;
    do {
      bVar3 = *(byte *)(piVar1 + uVar15 * 8 + 2);
      uVar11 = *(ulong *)(piVar1 + uVar15 * 8 + 4);
      *(int *)((long)pvVar9 + uVar15 * 4) = (int)__dest - (int)pvVar8;
      uVar12 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar12 = uVar11;
      }
      __src = (void *)((long)piVar1 + uVar15 * 0x20 + 9);
      if ((*(byte *)(piVar1 + uVar15 * 8 + 2) & 1) != 0) {
        __src = *(void **)(piVar1 + uVar15 * 8 + 6);
      }
      memcpy(__dest,__src,uVar12 & 0xffffffff);
      __dest = (void *)((long)__dest + (uVar12 & 0xffffffff));
      uVar15 = (ulong)((int)uVar15 + 1);
    } while (uVar15 < uVar18);
  }
                    /* try { // try from 00c02024 to 00c0202b has its CatchHandler @ 00c02188 */
  this = (void **)operator_new(0x20);
                    /* try { // try from 00c02030 to 00c02033 has its CatchHandler @ 00c02164 */
  CompressionDictionary::CompressionDictionary((CompressionDictionary *)this);
  *(uint *)(this + 1) = uVar17;
  *this = pvVar8;
  this[2] = pvVar9;
  *(int *)(this + 3) = (int)((ulong)((long)local_78 - (long)local_80) >> 5);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 00c02114 to 00c0211f has its CatchHandler @ 00c02150 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
                    /* try { // try from 00c0206c to 00c0207f has its CatchHandler @ 00c02188 */
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "Dict size = %u (%u strings)\n",
                    (ulong)(uint)(*(int *)(this + 1) + *(int *)(this + 3) * 4));
  piVar1 = local_80;
  *(void ***)(in_x0 + 0x28) = this;
  piVar6 = local_78;
  if (local_80 != (int *)0x0) {
    while (piVar5 = piVar6, piVar5 != piVar1) {
      piVar6 = piVar5 + -8;
      if ((*(byte *)(piVar5 + -6) & 1) != 0) {
        operator_delete(*(void **)(piVar5 + -2));
      }
    }
    local_78 = piVar1;
    operator_delete(local_80);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


