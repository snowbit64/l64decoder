// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b15b4
// Entry Point: 007b15b4
// Size: 292 bytes
// Signature: undefined FUN_007b15b4(void)


void FUN_007b15b4(FieldCropsUpdater *param_1,char **param_2)

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
  *plVar2 = (long)&PTR__FieldCropsUpdaterApplyGrowthFinishedCallback_00fdb950;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 007b16d0 to 007b16d7 has its CatchHandler @ 007b16d8 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)plVar2 + 9);
    *(char *)(plVar2 + 1) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_007b166c;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 007b1644 to 007b164b has its CatchHandler @ 007b16d8 */
    __dest = operator_new(uVar3);
    plVar2[2] = __n;
    plVar2[3] = (long)__dest;
    plVar2[1] = uVar3 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_007b166c:
  *(undefined *)((long)__dest + __n) = 0;
  plVar2[4] = (long)pcVar4;
  bVar1 = FieldCropsUpdater::setApplyGrowthFinishedCallback
                    (param_1,(ApplyGrowthFinishedCallback *)plVar2);
  *(undefined4 *)(param_2 + 0x21) = 3;
  *(byte *)(param_2 + 0x20) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x007b16cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


