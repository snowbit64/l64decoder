// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSystemFileLoaders
// Entry Point: 00c6fc64
// Size: 536 bytes
// Signature: undefined addSystemFileLoaders(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidSysUtil::addSystemFileLoaders() */

void AndroidSysUtil::addSystemFileLoaders(void)

{
  long lVar1;
  byte *pbVar2;
  size_t __n;
  APKFileLoader *this;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  void *__dest;
  ulong uVar7;
  ushort local_8b8;
  undefined local_8b6;
  void *local_8a8;
  undefined8 local_8a0;
  size_t local_898;
  void *local_890;
  byte *local_888;
  byte *local_880;
  undefined8 local_878;
  uint local_86c;
  char acStack_868 [2048];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_86c = 0x800;
  AndroidJNICall::callString(s_pActivityJNICall,"getApkPath",acStack_868,&local_86c);
  local_888 = (byte *)0x0;
  local_880 = (byte *)0x0;
  local_878 = 0;
  __n = strlen(acStack_868);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00c6fe70 to 00c6fe77 has its CatchHandler @ 00c6fea0 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_8a0 | 1);
    local_8a0 = CONCAT71(local_8a0._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00c6fd24;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c6fcfc to 00c6fd03 has its CatchHandler @ 00c6fea0 */
    __dest = operator_new(uVar7);
    local_8a0 = uVar7 | 1;
    local_898 = __n;
    local_890 = __dest;
  }
  memcpy(__dest,acStack_868,__n);
LAB_00c6fd24:
  *(undefined *)((long)__dest + __n) = 0;
  local_8b6 = 0;
  local_8b8 = 0x3b02;
                    /* try { // try from 00c6fd34 to 00c6fd4b has its CatchHandler @ 00c6fe7c */
  StringUtil::split((basic_string *)&local_8a0,(basic_string *)&local_8b8,(vector *)&local_888,false
                    ,true);
  if ((local_8b8 & 1) != 0) {
    operator_delete(local_8a8);
  }
  if ((local_8a0 & 1) != 0) {
    operator_delete(local_890);
  }
  pbVar5 = local_880;
  if (local_880 != local_888) {
    uVar7 = 0;
    do {
                    /* try { // try from 00c6fd98 to 00c6fd9f has its CatchHandler @ 00c6feb4 */
      pbVar3 = local_888;
      this = (APKFileLoader *)operator_new(0x30);
      pbVar3 = pbVar3 + uVar7 * 0x18;
      pbVar5 = *(byte **)(pbVar3 + 0x10);
      if ((*pbVar3 & 1) == 0) {
        pbVar5 = pbVar3 + 1;
      }
                    /* try { // try from 00c6fdb8 to 00c6fdc3 has its CatchHandler @ 00c6fea4 */
      APKFileLoader::APKFileLoader(this,(char *)pbVar5,9,"assets/");
                    /* try { // try from 00c6fdc4 to 00c6fdcf has its CatchHandler @ 00c6feb4 */
      FileManager::addFileLoader
                ((FileManager *)FileManager::s_singletonFileManager,(IFileLoader *)this);
      uVar7 = (ulong)((int)uVar7 + 1);
      uVar4 = ((long)local_880 - (long)local_888 >> 3) * -0x5555555555555555;
      pbVar5 = local_888;
    } while (uVar7 <= uVar4 && uVar4 - uVar7 != 0);
  }
  pbVar3 = pbVar5;
  pbVar6 = local_880;
  if (pbVar5 != (byte *)0x0) {
    while (pbVar2 = pbVar6, pbVar2 != pbVar5) {
      pbVar6 = pbVar2 + -0x18;
      pbVar3 = local_888;
      if ((*pbVar6 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + -8));
        pbVar3 = local_888;
      }
    }
    local_880 = pbVar5;
    operator_delete(pbVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


