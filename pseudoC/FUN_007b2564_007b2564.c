// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b2564
// Entry Point: 007b2564
// Size: 412 bytes
// Signature: undefined FUN_007b2564(void)


void FUN_007b2564(DensityMapHeightUpdater *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  size_t __n;
  DensityMap *pDVar6;
  void *__dest;
  char *__s;
  ulong uVar7;
  float fVar8;
  float fVar9;
  
  if ((param_2[0x14] == 0) ||
     (lVar4 = ReflectionUtil::getEntity
                        (param_2[0x14],0xa00000000000,"applyDensityMapHeightUpdate","blockMask"),
     lVar4 == 0)) {
    pDVar6 = (DensityMap *)0x0;
  }
  else {
    lVar1 = 0x50;
    if ((*(byte *)(lVar4 + 0x15) & 0x20) != 0) {
      lVar1 = 0x20;
    }
    pDVar6 = *(DensityMap **)(lVar4 + lVar1);
  }
  if (param_2[0x26] == 8) {
    lVar4 = *(long *)(param_2 + 0x24);
  }
  else {
    lVar4 = 0;
  }
  plVar5 = (long *)operator_new(0x28);
  __s = *(char **)(param_2 + 0x20);
  *plVar5 = (long)&PTR__DensityMapHeightUpdaterApplyUpdateFinishedCallback_00fdb9f0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 007b26f8 to 007b26ff has its CatchHandler @ 007b2700 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)plVar5 + 9);
    *(char *)(plVar5 + 1) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_007b2668;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 007b2640 to 007b2647 has its CatchHandler @ 007b2700 */
    __dest = operator_new(uVar7);
    plVar5[2] = __n;
    plVar5[3] = (long)__dest;
    plVar5[1] = uVar7 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_007b2668:
  *(undefined *)((long)__dest + __n) = 0;
  uVar2 = *param_2;
  fVar8 = (float)param_2[4];
  fVar9 = (float)param_2[8];
  plVar5[4] = lVar4;
  bVar3 = DensityMapHeightUpdater::applyGlobalUpdate
                    (param_1,uVar2,fVar8,fVar9,*(bool *)(param_2 + 0xc),*(bool *)(param_2 + 0x10),
                     pDVar6,param_2[0x18],param_2[0x1c],(ApplyUpdateFinishedCallback *)plVar5,
                     (float)param_2[0x28]);
  param_2[0x42] = 3;
  *(byte *)(param_2 + 0x40) = bVar3 & 1;
  if ((bVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x007b26f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 8))(plVar5);
    return;
  }
  return;
}


