// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findNextSpline
// Entry Point: 0089ad00
// Size: 620 bytes
// Signature: undefined findNextSpline(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SimulatedPedestrian::findNextSpline() */

void SimulatedPedestrian::findNextSpline(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  float **__dest;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  size_t __n;
  ulong uVar7;
  float **ppfVar8;
  float **ppfVar9;
  float *pfVar10;
  float fVar11;
  float **local_80;
  float **local_70;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  local_80 = (float **)0x0;
  local_70 = (float **)0x0;
  lVar4 = *(long *)(*(long *)(in_x0 + 0x78) + 0x68);
  if (*(long *)(*(long *)(in_x0 + 0x78) + 0x70) == lVar4) {
LAB_0089ae9c:
    *(undefined8 *)(in_x0 + 200) = 0;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0089af30 to 0089af3b has its CatchHandler @ 0089af6c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: pedestrian can\'t find the next spline to walk on.\n");
    *(undefined *)(in_x0 + 0x71) = 1;
    if (local_80 == (float **)0x0) goto LAB_0089aedc;
  }
  else {
    uVar7 = 0;
    ppfVar9 = (float **)0x0;
    do {
      pfVar10 = (float *)(lVar4 + uVar7 * 0x28);
      fVar11 = *(float *)(in_x0 + 0x80);
      ppfVar8 = ppfVar9;
      __dest = local_80;
      if (pfVar10[2] == fVar11) {
        if ((fVar11 <= 0.0) || (*pfVar10 <= *(float *)(in_x0 + 0x84))) {
          if (fVar11 < 0.0) {
            if (*pfVar10 < *(float *)(in_x0 + 0x84)) goto LAB_0089add0;
          }
        }
        else {
LAB_0089add0:
          if (ppfVar9 < local_70) {
            ppfVar8 = ppfVar9 + 1;
            *ppfVar9 = pfVar10;
          }
          else {
            __n = (long)ppfVar9 - (long)local_80;
            uVar5 = ((long)__n >> 3) + 1;
            if (uVar5 >> 0x3d != 0) {
                    /* try { // try from 0089af0c to 0089af1f has its CatchHandler @ 0089af88 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar6 = (long)local_70 - (long)local_80 >> 2;
            if (uVar5 <= uVar6) {
              uVar5 = uVar6;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)local_70 - (long)local_80)) {
              uVar5 = 0x1fffffffffffffff;
            }
            if (uVar5 == 0) {
              __dest = (float **)0x0;
            }
            else {
              if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 0089ae24 to 0089ae27 has its CatchHandler @ 0089af84 */
              __dest = (float **)operator_new(uVar5 << 3);
            }
            ppfVar8 = __dest + ((long)__n >> 3) + 1;
            __dest[(long)__n >> 3] = pfVar10;
            if (0 < (long)__n) {
              memcpy(__dest,local_80,__n);
            }
            local_70 = __dest + uVar5;
            if (local_80 != (float **)0x0) {
              operator_delete(local_80);
            }
          }
        }
      }
      local_80 = __dest;
      uVar7 = (ulong)((int)uVar7 + 1);
      lVar4 = *(long *)(*(long *)(in_x0 + 0x78) + 0x68);
      uVar5 = (*(long *)(*(long *)(in_x0 + 0x78) + 0x70) - lVar4 >> 3) * -0x3333333333333333;
      ppfVar9 = ppfVar8;
    } while (uVar7 <= uVar5 && uVar5 - uVar7 != 0);
    if (local_80 == ppfVar8) goto LAB_0089ae9c;
                    /* try { // try from 0089ae88 to 0089aec3 has its CatchHandler @ 0089af80 */
    iVar2 = MathUtil::getRandomMinMax(0,(int)((ulong)((long)ppfVar8 - (long)local_80) >> 3) + -1);
    *(float **)(in_x0 + 200) = local_80[iVar2];
  }
  operator_delete(local_80);
LAB_0089aedc:
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


