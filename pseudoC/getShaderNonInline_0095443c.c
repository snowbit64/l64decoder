// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShaderNonInline
// Entry Point: 0095443c
// Size: 1156 bytes
// Signature: undefined __thiscall getShaderNonInline(MaterialShaderManager * this, MaterialShaderHash * param_1, uint param_2)


/* MaterialShaderManager::getShaderNonInline(MaterialShaderHash const&, unsigned int) */

MaterialShader * __thiscall
MaterialShaderManager::getShaderNonInline
          (MaterialShaderManager *this,MaterialShaderHash *param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  MaterialShaderManager MVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  MaterialShader *this_00;
  MaterialShaderManager **ppMVar11;
  MaterialShaderManager **ppMVar12;
  MaterialShaderManager **ppMVar13;
  MaterialShaderManager *pMVar14;
  MaterialShaderManager *pMVar15;
  uint local_dc;
  byte local_d8;
  void *local_c8;
  map *local_c0;
  map *pmStack_b8;
  ulong local_b0;
  undefined8 local_a8;
  char *local_a0;
  ShaderStructLayout *local_98;
  uint local_8c;
  IProgramObject *local_88;
  char acStack_7c [36];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar5 != 0)) {
                    /* try { // try from 009547ac to 009547b7 has its CatchHandler @ 009548f0 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  uVar6 = ShaderManager::getProgram
                    ((ShaderManager *)&ShaderManager::getInstance()::instance,0x10,(uchar *)param_1,
                     &local_88,&local_8c,&local_98);
  if ((uVar6 & 1) == 0) {
    if (((ShaderManager::getInstance()::instance & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar5 != 0)) {
                    /* try { // try from 009547f4 to 009547ff has its CatchHandler @ 009548ec */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
    if ((DAT_01048f80 == 0) || (DAT_01048f94 != '\0')) {
      reportMissingShader(this,param_1);
      this_00 = (MaterialShader *)0x0;
      goto LAB_00954708;
    }
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar2 != 0) {
      Mutex::enterCriticalSection();
      ppMVar12 = (MaterialShaderManager **)(this + 0xe0);
      ppMVar13 = (MaterialShaderManager **)*ppMVar12;
      ppMVar11 = ppMVar12;
      if (ppMVar13 != (MaterialShaderManager **)0x0) {
        do {
          if (*(uint *)(ppMVar13 + 4) >= uVar2) {
            ppMVar11 = ppMVar13;
          }
          ppMVar13 = (MaterialShaderManager **)ppMVar13[*(uint *)(ppMVar13 + 4) < uVar2];
        } while (ppMVar13 != (MaterialShaderManager **)0x0);
        if ((ppMVar11 != ppMVar12) && (*(uint *)(ppMVar11 + 4) <= uVar2)) {
          MVar3 = ppMVar11[5][0x9c];
          Mutex::leaveCriticalSection();
          if (MVar3 != (MaterialShaderManager)0x0) {
            DebugUtil::breakpoint();
          }
          goto LAB_00954578;
        }
      }
      Mutex::leaveCriticalSection();
    }
LAB_00954578:
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = (char *)0x0;
    local_c0 = (map *)0x0;
    pmStack_b8 = (map *)0x0;
                    /* try { // try from 00954584 to 00954597 has its CatchHandler @ 00954958 */
    lVar7 = Watch::getCurrentTicks();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_d8);
                    /* try { // try from 00954598 to 009545b3 has its CatchHandler @ 00954924 */
    generateCodeForShaderHash
              (this,param_1,(basic_string)&local_d8,(basic_string *)&local_b0,&pmStack_b8,&local_c0)
    ;
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
                    /* try { // try from 009545c4 to 009545c7 has its CatchHandler @ 00954920 */
    lVar8 = Watch::getCurrentTicks();
    *(long *)(this + 0x118) = (lVar8 - lVar7) + *(long *)(this + 0x118);
    *(int *)(this + 0x120) = *(int *)(this + 0x120) + 1;
                    /* try { // try from 009545ec to 009545ff has its CatchHandler @ 0095491c */
    FUN_00956d84(acStack_7c,0x24,"%8.8X.%8.8X-%8.8X.%8.8X",*(undefined4 *)(param_1 + 4),
                 *(undefined4 *)param_1,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8))
    ;
    if (((ShaderManager::getInstance()::instance & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar5 != 0)) {
                    /* try { // try from 0095483c to 00954847 has its CatchHandler @ 009548d0 */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
    pcVar1 = (char *)((ulong)&local_b0 | 1);
    uVar2 = (uint)((byte)local_b0 >> 1);
    if ((local_b0 & 1) != 0) {
      pcVar1 = local_a0;
      uVar2 = (uint)local_a8;
    }
                    /* try { // try from 00954630 to 0095465f has its CatchHandler @ 00954918 */
    uVar6 = ShaderManager::createProgram
                      ((ShaderManager *)&ShaderManager::getInstance()::instance,0x10,
                       (uchar *)param_1,uVar2,pcVar1,(map *)(this + 0x60),&local_88,&local_8c,
                       &local_98,&local_dc,acStack_7c);
    if ((uVar6 & 1) == 0) {
LAB_009546bc:
      this_00 = (MaterialShader *)0x0;
    }
    else {
      if ((local_dc & (param_2 ^ 0xffffffff)) != 0) {
                    /* try { // try from 00954670 to 009546bb has its CatchHandler @ 00954954 */
        RenderDeviceManager::getInstance();
        plVar9 = (long *)RenderDeviceManager::getCurrentRenderDevice();
        plVar9 = (long *)(**(code **)(*plVar9 + 0x88))();
        piVar10 = (int *)(**(code **)(*plVar9 + 0x10))();
        if (*piVar10 != 0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar5 != 0)) {
                    /* try { // try from 00954884 to 0095488f has its CatchHandler @ 009548c0 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "Error: Failed to create shader program: Vertex attribute mismatch\n");
          goto LAB_009546bc;
        }
      }
                    /* try { // try from 00954738 to 0095473f has its CatchHandler @ 00954914 */
      this_00 = (MaterialShader *)operator_new(0xa8);
                    /* try { // try from 00954754 to 0095475b has its CatchHandler @ 00954908 */
      MaterialShader::MaterialShader(this_00,local_88,param_1,pmStack_b8,local_c0,local_8c,local_98)
      ;
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    goto LAB_00954708;
  }
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar2 == 0) {
    pMVar14 = (MaterialShaderManager *)0x0;
    pMVar15 = (MaterialShaderManager *)0x0;
  }
  else {
    Mutex::enterCriticalSection();
    ppMVar13 = (MaterialShaderManager **)(this + 0xe0);
    ppMVar12 = (MaterialShaderManager **)*ppMVar13;
    ppMVar11 = ppMVar13;
    if (ppMVar12 == (MaterialShaderManager **)0x0) {
LAB_009544f4:
      pMVar14 = (MaterialShaderManager *)0x0;
      pMVar15 = (MaterialShaderManager *)0x0;
    }
    else {
      do {
        if (*(uint *)(ppMVar12 + 4) >= uVar2) {
          ppMVar11 = ppMVar12;
        }
        ppMVar12 = (MaterialShaderManager **)ppMVar12[*(uint *)(ppMVar12 + 4) < uVar2];
      } while (ppMVar12 != (MaterialShaderManager **)0x0);
      if ((ppMVar11 == ppMVar13) || (uVar2 < *(uint *)(ppMVar11 + 4))) goto LAB_009544f4;
      pMVar15 = ppMVar11[5] + 0x20;
      pMVar14 = ppMVar11[5] + 0x38;
    }
    Mutex::leaveCriticalSection();
  }
  this_00 = (MaterialShader *)operator_new(0xa8);
                    /* try { // try from 009546f8 to 00954707 has its CatchHandler @ 0095496c */
  MaterialShader::MaterialShader
            (this_00,local_88,param_1,(map *)pMVar15,(map *)pMVar14,local_8c,local_98);
LAB_00954708:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


