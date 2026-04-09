// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endAnimationSet
// Entry Point: 009040a0
// Size: 676 bytes
// Signature: undefined __cdecl endAnimationSet(void * param_1, char * param_2)


/* I3DAnimationSetsFactory::endAnimationSet(void*, char const*) */

void I3DAnimationSetsFactory::endAnimationSet(void *param_1,char *param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  TransformGroup **ppTVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong __n;
  ulong uVar10;
  long *plVar11;
  TransformGroup **ppTVar12;
  TransformGroup **local_80;
  TransformGroup **local_70;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  uVar10 = 0;
  plVar1 = (long *)((long)param_1 + 0x138);
  local_80 = (TransformGroup **)0x0;
  local_70 = (TransformGroup **)0x0;
  lVar8 = *(long *)(*(long *)((long)param_1 + 0x288) + 0x38);
  ppTVar6 = (TransformGroup **)0x0;
  do {
    plVar9 = (long *)*plVar1;
    if (plVar9 == (long *)0x0) {
LAB_009041f4:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 00904308 to 00904313 has its CatchHandler @ 00904344 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 00904218 to 0090422b has its CatchHandler @ 00904360 */
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Animation set %s skipped. Transform group id %u not found.\n",
                        *(undefined8 *)(**(long **)((long)param_1 + 0x288) + 8),
                        (ulong)*(uint *)((*(long **)((long)param_1 + 0x288))[7] + uVar10 * 4));
      FUN_00f276d0(1,**(long **)((long)param_1 + 0x288) + 0x28);
      goto LAB_00904270;
    }
    uVar3 = *(uint *)(lVar8 + uVar10 * 4);
    plVar11 = plVar1;
    do {
      if (*(uint *)(plVar9 + 4) >= uVar3) {
        plVar11 = plVar9;
      }
      plVar9 = (long *)plVar9[*(uint *)(plVar9 + 4) < uVar3];
    } while (plVar9 != (long *)0x0);
    if ((plVar11 == plVar1) || (uVar3 < *(uint *)(plVar11 + 4))) goto LAB_009041f4;
    if (ppTVar6 == local_70) {
      __n = (long)ppTVar6 - (long)local_80;
      uVar2 = ((long)__n >> 3) + 1;
      if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 009042e4 to 009042f7 has its CatchHandler @ 00904360 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar2 <= (ulong)((long)__n >> 2)) {
        uVar2 = (long)__n >> 2;
      }
      if (0x7ffffffffffffff7 < __n) {
        uVar2 = 0x1fffffffffffffff;
      }
      if (uVar2 == 0) {
        ppTVar6 = (TransformGroup **)0x0;
      }
      else {
        if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 009041a4 to 009041a7 has its CatchHandler @ 0090435c */
        ppTVar6 = (TransformGroup **)operator_new(uVar2 << 3);
      }
      ppTVar12 = ppTVar6 + ((long)__n >> 3) + 1;
      ppTVar6[(long)__n >> 3] = (TransformGroup *)plVar11[5];
      if (0 < (long)__n) {
        memcpy(ppTVar6,local_80,__n);
      }
      local_70 = ppTVar6 + uVar2;
      if (local_80 != (TransformGroup **)0x0) {
        operator_delete(local_80);
      }
    }
    else {
      ppTVar12 = ppTVar6 + 1;
      *ppTVar6 = (TransformGroup *)plVar11[5];
      ppTVar6 = local_80;
    }
    local_80 = ppTVar6;
    plVar9 = *(long **)((long)param_1 + 0x288);
    uVar10 = (ulong)((int)uVar10 + 1);
    lVar8 = plVar9[7];
    ppTVar6 = ppTVar12;
  } while (uVar10 < (ulong)(plVar9[8] - lVar8 >> 2));
  FUN_00f276d0(1,*plVar9 + 0x28);
                    /* try { // try from 00904268 to 0090426f has its CatchHandler @ 00904358 */
  CharacterSet::bindTransforms
            (**(CharacterSet ***)((long)param_1 + 0x288),local_80,
             (uint)((ulong)((long)ppTVar12 - (long)local_80) >> 3));
LAB_00904270:
  lVar8 = **(long **)((long)param_1 + 0x288);
  iVar5 = FUN_00f27700(0xffffffff,lVar8 + 0x28);
  if (iVar5 < 2) {
                    /* try { // try from 00904298 to 0090429b has its CatchHandler @ 00904358 */
    (**(code **)(*(long *)(lVar8 + 0x20) + 0x10))();
  }
  **(undefined8 **)((long)param_1 + 0x288) = 0;
  if (local_80 != (TransformGroup **)0x0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


