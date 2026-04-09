// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007afbbc
// Entry Point: 007afbbc
// Size: 292 bytes
// Signature: undefined FUN_007afbbc(void)


void FUN_007afbbc(DensityMapUpdater *param_1,char **param_2)

{
  byte bVar1;
  long *plVar2;
  size_t __n;
  void *__dest;
  char *__s;
  ulong uVar3;
  char *pcVar4;
  
  if (*(int *)(param_2 + 3) == 8) {
    pcVar4 = param_2[2];
  }
  else {
    pcVar4 = (char *)0x0;
  }
  plVar2 = (long *)operator_new(0x28);
  __s = *param_2;
  *plVar2 = (long)&PTR__DensityMapUpdaterApplyUpdateFinishedCallback_00fdb900;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 007afcd8 to 007afcdf has its CatchHandler @ 007afce0 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)plVar2 + 9);
    *(char *)(plVar2 + 1) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_007afc74;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 007afc4c to 007afc53 has its CatchHandler @ 007afce0 */
    __dest = operator_new(uVar3);
    plVar2[2] = __n;
    plVar2[3] = (long)__dest;
    plVar2[1] = uVar3 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_007afc74:
  *(undefined *)((long)__dest + __n) = 0;
  plVar2[4] = (long)pcVar4;
  bVar1 = DensityMapUpdater::setApplyUpdateFinishedCallback
                    (param_1,(ApplyUpdateFinishedCallback *)plVar2);
  *(undefined4 *)(param_2 + 0x21) = 3;
  *(byte *)(param_2 + 0x20) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x007afcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


