// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007af850
// Entry Point: 007af850
// Size: 296 bytes
// Signature: undefined FUN_007af850(void)


void FUN_007af850(DensityMapUpdater *param_1,char **param_2)

{
  byte bVar1;
  long *plVar2;
  size_t __n;
  void *__dest;
  char *__s;
  ulong uVar3;
  char *pcVar4;
  float fVar5;
  
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
                    /* try { // try from 007af970 to 007af977 has its CatchHandler @ 007af978 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)plVar2 + 9);
    *(char *)(plVar2 + 1) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_007af908;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 007af8e0 to 007af8e7 has its CatchHandler @ 007af978 */
    __dest = operator_new(uVar3);
    plVar2[2] = __n;
    plVar2[3] = (long)__dest;
    plVar2[1] = uVar3 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_007af908:
  *(undefined *)((long)__dest + __n) = 0;
  fVar5 = *(float *)(param_2 + 4);
  plVar2[4] = (long)pcVar4;
  bVar1 = DensityMapUpdater::applyUpdate(param_1,(ApplyUpdateFinishedCallback *)plVar2,fVar5);
  *(undefined4 *)(param_2 + 0x21) = 3;
  *(byte *)(param_2 + 0x20) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x007af96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


