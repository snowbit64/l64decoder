// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compile
// Entry Point: 00ac5758
// Size: 1180 bytes
// Signature: undefined __thiscall compile(DxcCompiler3 * this, char * param_1, wchar_t * param_2, wchar_t * param_3)


/* DxcCompiler3::compile(char const*, wchar_t const*, wchar_t const*) */

long * __thiscall
DxcCompiler3::compile(DxcCompiler3 *this,char *param_1,wchar_t *param_2,wchar_t *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  wchar_t *pwVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  wchar_t **this_00;
  wchar_t **__src;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  wchar_t **ppwVar15;
  size_t __n;
  wchar_t **ppwVar16;
  long lVar17;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88;
  wchar_t **local_80;
  wchar_t **local_78;
  wchar_t **local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar12 = *(long *)(this + 8);
  local_80 = (wchar_t **)0x0;
  local_78 = (wchar_t **)0x0;
  local_70 = (wchar_t **)0x0;
  uVar11 = (*(long *)(this + 0x10) - lVar12 >> 3) * -0x5555555555555555;
  uVar10 = (uint)uVar11;
  this_00 = (wchar_t **)this;
  if (uVar10 != 0) {
    lVar17 = 0;
    ppwVar16 = (wchar_t **)0x0;
    while( true ) {
      __src = local_80;
      pbVar2 = (byte *)(lVar12 + lVar17);
      pwVar3 = (wchar_t *)(pbVar2 + 4);
      if ((*pbVar2 & 1) != 0) {
        pwVar3 = *(wchar_t **)(pbVar2 + 0x10);
      }
      if (ppwVar16 < local_70) {
        ppwVar15 = ppwVar16 + 1;
        *ppwVar16 = pwVar3;
        local_78 = ppwVar15;
      }
      else {
        __n = (long)ppwVar16 - (long)local_80;
        uVar1 = ((long)__n >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00ac5b4c to 00ac5b5f has its CatchHandler @ 00ac5c78 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar13 = (long)local_70 - (long)local_80 >> 2;
        if (uVar1 <= uVar13) {
          uVar1 = uVar13;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)local_70 - (long)local_80)) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          ppwVar16 = (wchar_t **)0x0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00ac5850 to 00ac5853 has its CatchHandler @ 00ac5c74 */
          this_00 = (wchar_t **)operator_new(uVar1 << 3);
          ppwVar16 = this_00;
        }
        ppwVar15 = ppwVar16 + ((long)__n >> 3) + 1;
        ppwVar16[(long)__n >> 3] = pwVar3;
        if (0 < (long)__n) {
          this_00 = (wchar_t **)memcpy(ppwVar16,__src,__n);
        }
        local_70 = ppwVar16 + uVar1;
        local_80 = ppwVar16;
        local_78 = ppwVar15;
        if (__src != (wchar_t **)0x0) {
          operator_delete(__src);
          this_00 = __src;
        }
      }
      if ((uVar11 & 0xffffffff) * 0x18 + -0x18 == lVar17) break;
      lVar12 = *(long *)(this + 8);
      lVar17 = lVar17 + 0x18;
      ppwVar16 = ppwVar15;
    }
  }
                    /* try { // try from 00ac58c8 to 00ac58d3 has its CatchHandler @ 00ac5c3c */
  plVar8 = (long *)createArguments((DxcCompiler3 *)this_00,param_2,param_3,local_80,uVar10);
  if (plVar8 == (long *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 00ac5bb8 to 00ac5bc3 has its CatchHandler @ 00ac5bf4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00ac5b28 to 00ac5b3b has its CatchHandler @ 00ac5c3c */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Failed to create DxcCompilerArgs\n");
    plVar8 = (long *)0x0;
  }
  else {
    local_98 = param_1;
                    /* try { // try from 00ac58e0 to 00ac58eb has its CatchHandler @ 00ac5c38 */
    local_90 = __strlen_chk(param_1,0xffffffffffffffff);
    local_a0 = (long *)0x0;
    plVar14 = *(long **)this;
    local_88 = 0xfde9;
                    /* try { // try from 00ac5908 to 00ac5923 has its CatchHandler @ 00ac5c40 */
    uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8);
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8);
    uStack_c8 = 0x59065eaf876f6194;
    local_d0 = 0x4497dde758346cda;
                    /* try { // try from 00ac593c to 00ac5957 has its CatchHandler @ 00ac5c34 */
    iVar7 = (**(code **)(*plVar14 + 0x18))(plVar14,&local_98,uVar9,uVar6,0,&local_d0,&local_a0);
                    /* try { // try from 00ac5964 to 00ac596b has its CatchHandler @ 00ac5c40 */
    (**(code **)(*plVar8 + 0x10))(plVar8);
    local_a8 = (long *)0x0;
    local_b0 = (long *)0x0;
    if (local_a0 != (long *)0x0) {
      uStack_c8 = 0x2013a9c980d58ac;
      local_d0 = 0x40e251958ba5fb08;
                    /* try { // try from 00ac5990 to 00ac59a3 has its CatchHandler @ 00ac5c2c */
      (**(code **)(*local_a0 + 0x38))(local_a0,1,&local_d0,&local_a8,0);
      uStack_c8 = 0x5b3025f1cb3001a3;
      local_d0 = 0x4024ba713da636c9;
                    /* try { // try from 00ac59bc to 00ac59cf has its CatchHandler @ 00ac5c28 */
      (**(code **)(*local_a0 + 0x38))(local_a0,2,&local_d0,&local_b0,0);
                    /* try { // try from 00ac59dc to 00ac59df has its CatchHandler @ 00ac5c24 */
      (**(code **)(*local_a0 + 0x10))();
    }
                    /* try { // try from 00ac59e0 to 00ac59e7 has its CatchHandler @ 00ac5c30 */
    local_c0 = (undefined8 *)operator_new(0x30);
    *(undefined *)((long)local_c0 + 0x29) = 0;
    uStack_c8 = 0x29;
    local_d0 = 0x31;
    local_c0[1] = 0x6c69706d6f63206f;
    *local_c0 = 0x742064656c696146;
    local_c0[3] = 0x776f6e6b6e752820;
    local_c0[2] = 0x7265646168732065;
    *(undefined8 *)((long)local_c0 + 0x21) = 0x296e6f7361657220;
    *(undefined8 *)((long)local_c0 + 0x19) = 0x6e776f6e6b6e7528;
    if (local_b0 != (long *)0x0) {
                    /* try { // try from 00ac5a24 to 00ac5ac3 has its CatchHandler @ 00ac5c44 */
      (**(code **)(*local_b0 + 0x30))(local_b0);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_d0);
      (**(code **)(*local_b0 + 0x10))();
    }
    if (((iVar7 < 0) || (local_a8 == (long *)0x0)) ||
       (lVar12 = (**(code **)(*local_a8 + 0x20))(), plVar8 = local_a8, lVar12 == 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0))
      {
                    /* try { // try from 00ac5b70 to 00ac5b7b has its CatchHandler @ 00ac5c10 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      puVar4 = (undefined8 *)((ulong)&local_d0 | 1);
      if ((local_d0 & 1) != 0) {
        puVar4 = local_c0;
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "SPIR-V Compilation Error: %s\n",puVar4);
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x10))();
      }
      plVar8 = (long *)0x0;
    }
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
  }
  if (local_80 != (wchar_t **)0x0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar8;
}


