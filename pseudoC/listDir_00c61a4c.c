// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: listDir
// Entry Point: 00c61a4c
// Size: 904 bytes
// Signature: undefined __cdecl listDir(char * param_1, bool param_2, bool param_3)


/* NativeFileUtil::listDir(char const*, bool, bool) */

void NativeFileUtil::listDir(char *param_1,bool param_2,bool param_3)

{
  char *pcVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  size_t __n;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  char *pcVar11;
  ulong uVar12;
  NativeFile local_d8 [16];
  void *local_c8;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  byte *local_98;
  byte *local_90;
  undefined8 local_88;
  undefined8 local_80;
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pcVar11 = (char *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00c61ae0;
  }
  else {
    uVar12 = __n + 0x10 & 0xfffffffffffffff0;
    pcVar11 = (char *)operator_new(uVar12);
    local_80 = uVar12 | 1;
    local_78 = __n;
    local_70 = pcVar11;
  }
  memcpy(pcVar11,param_1,__n);
LAB_00c61ae0:
  pcVar11[__n] = '\0';
                    /* try { // try from 00c61ae4 to 00c61aef has its CatchHandler @ 00c61e04 */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_80);
  local_98 = (byte *)0x0;
  local_90 = (byte *)0x0;
  local_88 = 0;
  pcVar11 = (char *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    pcVar11 = local_70;
  }
                    /* try { // try from 00c61b0c to 00c61b1b has its CatchHandler @ 00c61dfc */
  getFiles(pcVar11,(vector *)&local_98,false);
  pbVar5 = local_90;
  if (local_90 != local_98) {
    uVar12 = 0;
    pcVar11 = (char *)((ulong)&local_b0 | 1);
    do {
                    /* try { // try from 00c61b80 to 00c61b8b has its CatchHandler @ 00c61e2c */
      std::__ndk1::operator+("/",(basic_string *)(local_98 + uVar12 * 0x30));
                    /* try { // try from 00c61b8c to 00c61b9b has its CatchHandler @ 00c61e18 */
      puVar7 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::insert((ulong)local_d8,(char *)0x0);
      local_a0 = (char *)puVar7[2];
      uStack_a8 = puVar7[1];
      local_b0 = *puVar7;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      if (((byte)local_d8[0] & 1) != 0) {
        operator_delete(local_c8);
      }
      if (*(int *)(local_98 + uVar12 * 0x30 + 0x18) == 1) {
                    /* try { // try from 00c61bdc to 00c61be3 has its CatchHandler @ 00c61e0c */
        NativeFile::NativeFile(local_d8);
        pcVar1 = pcVar11;
        if ((local_b0 & 1) != 0) {
          pcVar1 = local_a0;
        }
                    /* try { // try from 00c61bf4 to 00c61c1b has its CatchHandler @ 00c61e34 */
        uVar8 = NativeFile::open((char *)local_d8,(ACCESS_MODE)pcVar1,false);
        if ((uVar8 & 1) == 0) {
          uVar9 = 0xffffffffffffffff;
        }
        else {
          uVar9 = NativeFile::getSize();
          NativeFile::close();
        }
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0
           )) {
                    /* try { // try from 00c61cfc to 00c61d03 has its CatchHandler @ 00c61dd4 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar1 = pcVar11;
        if ((local_b0 & 1) != 0) {
          pcVar1 = local_a0;
        }
                    /* try { // try from 00c61c88 to 00c61c9b has its CatchHandler @ 00c61e34 */
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"%s : %lld\n",
                          pcVar1,uVar9);
        NativeFile::~NativeFile(local_d8);
      }
      else {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0
           )) {
                    /* try { // try from 00c61cc4 to 00c61ccb has its CatchHandler @ 00c61de8 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar1 = pcVar11;
        if ((local_b0 & 1) != 0) {
          pcVar1 = local_a0;
        }
                    /* try { // try from 00c61c38 to 00c61c67 has its CatchHandler @ 00c61e10 */
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004d51b8,
                          pcVar1);
        if (param_2) {
          pcVar1 = pcVar11;
          if ((local_b0 & 1) != 0) {
            pcVar1 = local_a0;
          }
          listDir(pcVar1,true,false);
        }
      }
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      uVar12 = (ulong)((int)uVar12 + 1);
      uVar8 = ((long)local_90 - (long)local_98 >> 4) * -0x5555555555555555;
      pbVar5 = local_98;
    } while (uVar12 <= uVar8 && uVar8 - uVar12 != 0);
  }
  pbVar3 = pbVar5;
  pbVar10 = local_90;
  if (pbVar5 != (byte *)0x0) {
    while (pbVar4 = pbVar10, pbVar4 != pbVar5) {
      pbVar10 = pbVar4 + -0x30;
      pbVar3 = local_98;
      if ((*pbVar10 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -0x20));
        pbVar3 = local_98;
      }
    }
    local_90 = pbVar5;
    operator_delete(pbVar3);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


