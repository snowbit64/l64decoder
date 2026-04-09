// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ae600
// Entry Point: 007ae600
// Size: 304 bytes
// Signature: undefined FUN_007ae600(void)


AudioSource * FUN_007ae600(char **param_1)

{
  long lVar1;
  size_t __n;
  AudioSource *this;
  char *pcVar2;
  char *__dest;
  ulong uVar3;
  undefined8 local_60;
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar2 = param_1[2];
  __n = strlen(pcVar2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (char *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_007ae690;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (char *)operator_new(uVar3);
    local_60 = uVar3 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,pcVar2,__n);
LAB_007ae690:
  __dest[__n] = '\0';
                    /* try { // try from 007ae694 to 007ae6a3 has its CatchHandler @ 007ae740 */
  PathUtil::makeUnifiedPathInPlace((basic_string *)&local_60);
  this = (AudioSource *)operator_new(0x298);
  pcVar2 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    pcVar2 = local_50;
  }
                    /* try { // try from 007ae6e0 to 007ae6e7 has its CatchHandler @ 007ae730 */
  AudioSource::AudioSource
            (this,*param_1,pcVar2,*(float *)(param_1 + 4),*(float *)(param_1 + 6),
             *(float *)(param_1 + 8),*(int *)(param_1 + 10),AudioSource::s_defaultGroup,1);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}


