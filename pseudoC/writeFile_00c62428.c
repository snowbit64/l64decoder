// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeFile
// Entry Point: 00c62428
// Size: 332 bytes
// Signature: undefined __cdecl writeFile(char * param_1, uchar * param_2, uint param_3)


/* NativeFileUtil::writeFile(char const*, unsigned char const*, unsigned int) */

undefined4 NativeFileUtil::writeFile(char *param_1,uchar *param_2,uint param_3)

{
  ACCESS_MODE AVar1;
  long lVar2;
  uint uVar3;
  size_t __n;
  ulong uVar4;
  undefined4 uVar5;
  ACCESS_MODE AVar6;
  void *__dest;
  NativeFile aNStack_98 [40];
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00c624bc;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_70 = uVar4 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_00c624bc:
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00c624c0 to 00c624c7 has its CatchHandler @ 00c62578 */
  PathUtil::removeBackReferencesInPlace((basic_string *)&local_70);
  uVar4 = local_70;
  AVar6 = (ACCESS_MODE)local_60;
                    /* try { // try from 00c624d0 to 00c624d7 has its CatchHandler @ 00c62574 */
  NativeFile::NativeFile(aNStack_98);
  AVar1 = (uint)&local_70 | 1;
  if ((uVar4 & 1) != 0) {
    AVar1 = AVar6;
  }
                    /* try { // try from 00c624e8 to 00c6250b has its CatchHandler @ 00c62580 */
  uVar4 = NativeFile::open((char *)aNStack_98,AVar1,true);
  if (((uVar4 & 1) == 0) ||
     (uVar3 = NativeFile::write(aNStack_98,param_2,param_3), uVar3 != param_3)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  NativeFile::~NativeFile(aNStack_98);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


