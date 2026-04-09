// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addHistoryEntry
// Entry Point: 00b32db0
// Size: 348 bytes
// Signature: undefined __thiscall addHistoryEntry(FileManager * this, char * param_1, ACCESS_MODE param_2)


/* FileManager::addHistoryEntry(char const*, File::ACCESS_MODE) */

void __thiscall FileManager::addHistoryEntry(FileManager *this,char *param_1,ACCESS_MODE param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  pair pVar6;
  undefined8 local_a8 [2];
  undefined8 *local_98;
  undefined8 uStack_90;
  void *local_88;
  ACCESS_MODE local_80;
  long local_78;
  long lStack_70;
  undefined local_68;
  FileManager *local_60;
  ulonglong *puStack_58;
  undefined local_50;
  long local_48;
  ulong uVar7;
  
  lVar5 = tpidr_el0;
  local_60 = this + 0xb8;
  local_48 = *(long *)(lVar5 + 0x28);
  local_50 = 0;
  puStack_58 = (ulonglong *)(this + 0xe0);
  Mutex::enterCriticalSection();
                    /* try { // try from 00b32df4 to 00b32e3b has its CatchHandler @ 00b32f34 */
  local_a8[0] = ThreadUtil::getCurrentThreadId();
  local_98 = local_a8;
  pVar6 = std::__ndk1::
          __tree<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Lockable<FileManager::AccessHistory>>>>
          ::
          __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long&&>,std::__ndk1::tuple<>>
                    ((ulonglong *)(this + 0xe0),(piecewise_construct_t *)local_a8,
                     (tuple *)&DAT_00524c8b,(tuple *)&local_98);
  uVar7 = (ulong)pVar6;
  local_78 = uVar7 + 0x28;
  lStack_70 = uVar7 + 0x50;
  local_68 = 0;
  Mutex::enterCriticalSection();
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  local_88 = (void *)0x0;
                    /* try { // try from 00b32e44 to 00b32e7b has its CatchHandler @ 00b32f14 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_98);
  uVar3 = *(uint *)(uVar7 + 0xcd8);
  uVar1 = *(int *)(uVar7 + 0xcd0) + *(int *)(uVar7 + 0xcd4);
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = uVar1 / uVar3;
  }
  lVar2 = uVar7 + (ulong)(uVar1 - uVar4 * uVar3) * 0x20;
  local_80 = param_2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (lVar2 + 0x50),(basic_string *)&local_98);
  *(ACCESS_MODE *)(lVar2 + 0x68) = local_80;
  uVar3 = *(uint *)(uVar7 + 0xcd8);
  uVar1 = *(int *)(uVar7 + 0xcd0) + 1;
  *(uint *)(uVar7 + 0xcd0) = uVar1;
  if (uVar3 < uVar1) {
    *(uint *)(uVar7 + 0xcd0) = uVar3;
    uVar1 = *(int *)(uVar7 + 0xcd4) + 1;
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar1 / uVar3;
    }
    *(uint *)(uVar7 + 0xcd4) = uVar1 - uVar4 * uVar3;
  }
  *(long *)(uVar7 + 0xce0) = *(long *)(uVar7 + 0xce0) + 1;
  if (((ulong)local_98 & 1) != 0) {
    operator_delete(local_88);
  }
                    /* try { // try from 00b32ed0 to 00b32ed7 has its CatchHandler @ 00b32f10 */
  Mutex::leaveCriticalSection();
                    /* try { // try from 00b32ed8 to 00b32edf has its CatchHandler @ 00b32f0c */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


