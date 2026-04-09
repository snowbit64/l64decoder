// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cloneAndBindCharacterSet
// Entry Point: 0074a13c
// Size: 736 bytes
// Signature: undefined __cdecl cloneAndBindCharacterSet(CharacterSet * param_1, map * param_2)


/* CloneUtil::cloneAndBindCharacterSet(CharacterSet*, std::__ndk1::map<TransformGroup*,
   TransformGroup*, std::__ndk1::less<TransformGroup*>,
   std::__ndk1::allocator<std::__ndk1::pair<TransformGroup* const, TransformGroup*> > >&) */

void CloneUtil::cloneAndBindCharacterSet(CharacterSet *param_1,map *param_2)

{
  map **ppmVar1;
  long lVar2;
  int iVar3;
  CharacterSet *this;
  char *pcVar4;
  long lVar5;
  map **ppmVar6;
  ulong uVar7;
  map *pmVar8;
  ulong __n;
  ulong uVar9;
  ulong uVar10;
  map **ppmVar11;
  uint uVar12;
  map **local_80;
  map **local_78;
  map **local_70;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  ppmVar6 = *(map ***)(param_1 + 0xd0);
  local_70 = (map **)0x0;
  uVar7 = *(long *)(param_1 + 0xd8) - (long)ppmVar6;
  uVar10 = uVar7 >> 3 & 0xffffffff;
  if (uVar10 == 0) {
    local_78 = (map **)0x0;
    iVar3 = (int)(uVar7 >> 3);
  }
  else {
                    /* try { // try from 0074a18c to 0074a18f has its CatchHandler @ 0074a434 */
    local_78 = (map **)operator_new(uVar10 << 3);
    local_70 = local_78 + uVar10;
    iVar3 = (int)(uVar7 >> 3);
  }
  local_80 = local_78;
  if (iVar3 != 0) {
    ppmVar1 = (map **)(param_2 + 8);
    pmVar8 = *ppmVar6;
    ppmVar6 = (map **)*ppmVar1;
    if (ppmVar6 != (map **)0x0) {
      uVar12 = 0;
      ppmVar11 = ppmVar1;
      do {
        do {
          if (ppmVar6[4] >= pmVar8) {
            ppmVar11 = ppmVar6;
          }
          ppmVar6 = (map **)ppmVar6[ppmVar6[4] < pmVar8];
        } while (ppmVar6 != (map **)0x0);
        if ((ppmVar11 == ppmVar1) || (pmVar8 < ppmVar11[4])) break;
        if (local_78 == local_70) {
          __n = (long)local_78 - (long)local_80;
          uVar9 = ((long)__n >> 3) + 1;
          if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 0074a3bc to 0074a3cf has its CatchHandler @ 0074a440 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar9 <= (ulong)((long)__n >> 2)) {
            uVar9 = (long)__n >> 2;
          }
          if (0x7ffffffffffffff7 < __n) {
            uVar9 = 0x1fffffffffffffff;
          }
          if (uVar9 == 0) {
            ppmVar6 = (map **)0x0;
          }
          else {
            if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 0074a260 to 0074a263 has its CatchHandler @ 0074a438 */
            ppmVar6 = (map **)operator_new(uVar9 << 3);
          }
          local_78 = ppmVar6 + ((long)__n >> 3) + 1;
          ppmVar6[(long)__n >> 3] = ppmVar11[5];
          if (0 < (long)__n) {
            memcpy(ppmVar6,local_80,__n);
          }
          local_70 = ppmVar6 + uVar9;
          if (local_80 != (map **)0x0) {
            operator_delete(local_80);
          }
        }
        else {
          *local_78 = ppmVar11[5];
          ppmVar6 = local_80;
          local_78 = local_78 + 1;
        }
        local_80 = ppmVar6;
        uVar12 = uVar12 + 1;
        if (uVar12 == (uint)(uVar7 >> 3)) goto LAB_0074a30c;
        pmVar8 = *(map **)(*(long *)(param_1 + 0xd0) + (ulong)uVar12 * 8);
        ppmVar6 = (map **)*ppmVar1;
        ppmVar11 = ppmVar1;
      } while (ppmVar6 != (map **)0x0);
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0074a3e0 to 0074a3eb has its CatchHandler @ 0074a41c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    if (pmVar8 == (map *)0x0) {
      pcVar4 = "unknown";
    }
    else {
      pcVar4 = *(char **)(pmVar8 + 8);
    }
                    /* try { // try from 0074a2f4 to 0074a307 has its CatchHandler @ 0074a430 */
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: CharacterSet cloning failed. Could not find Transformgroup \'%s\' in Characterset \'%s\'\n"
                      ,pcVar4,*(undefined8 *)(param_1 + 8));
  }
LAB_0074a30c:
  uVar9 = (long)local_78 - (long)local_80 >> 3;
  if (uVar9 == uVar10) {
                    /* try { // try from 0074a320 to 0074a327 has its CatchHandler @ 0074a43c */
    this = (CharacterSet *)CharacterSet::clone();
    FUN_00f276d0(1,this + 0x28);
                    /* try { // try from 0074a33c to 0074a34b has its CatchHandler @ 0074a43c */
    CharacterSet::bindTransforms(this,(TransformGroup **)local_80,(uint)(uVar7 >> 3));
    iVar3 = FUN_00f27700(0xffffffff,this + 0x28);
    if (iVar3 < 2) {
                    /* try { // try from 0074a36c to 0074a36f has its CatchHandler @ 0074a43c */
      (**(code **)(*(long *)(this + 0x20) + 0x10))();
    }
  }
  if (local_80 != (map **)0x0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9 == uVar10);
}


