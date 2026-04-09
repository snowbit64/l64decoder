// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ensureShaderAsync
// Entry Point: 00954db8
// Size: 696 bytes
// Signature: undefined __thiscall ensureShaderAsync(MaterialShaderManager * this, MaterialShaderHash * param_1)


/* MaterialShaderManager::ensureShaderAsync(MaterialShaderHash const&) */

uint __thiscall
MaterialShaderManager::ensureShaderAsync(MaterialShaderManager *this,MaterialShaderHash *param_1)

{
  long lVar1;
  char *pcVar2;
  MaterialShaderManager *pMVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  MaterialShaderManager **ppMVar9;
  MaterialShaderManager **ppMVar10;
  MaterialShaderManager **ppMVar11;
  basic_string local_b0 [4];
  void *local_a0;
  map *local_98;
  map *pmStack_90;
  ulong local_88;
  undefined8 local_80;
  char *local_78;
  char acStack_6c [36];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  ppMVar9 = (MaterialShaderManager **)(this + 0x80);
  ppMVar10 = (MaterialShaderManager **)*ppMVar9;
  if (ppMVar10 == (MaterialShaderManager **)0x0) {
LAB_00954e4c:
    if (((ShaderManager::getInstance()::instance & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar7 != 0)) {
                    /* try { // try from 00954fa4 to 00954faf has its CatchHandler @ 00955090 */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
    uVar8 = ShaderManager::doesProgramIdEntryExist
                      ((ShaderManager *)&ShaderManager::getInstance()::instance,0x10,
                       (uchar *)param_1);
    if ((uVar8 & 1) == 0) {
      if (((ShaderManager::getInstance()::instance & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar7 != 0)) {
                    /* try { // try from 00954fec to 00954ff7 has its CatchHandler @ 0095508c */
        ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
        __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&ShaderManager::getInstance()::instance);
      }
      if ((DAT_01048f80 == 0) || (DAT_01048f94 != '\0')) {
        reportMissingShader(this,param_1);
        uVar6 = 0;
      }
      else {
        local_88 = 0;
        local_80 = 0;
        local_78 = (char *)0x0;
        local_98 = (map *)0x0;
        pmStack_90 = (map *)0x0;
                    /* try { // try from 00954ea4 to 00954eaf has its CatchHandler @ 009550d8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(local_b0);
                    /* try { // try from 00954eb0 to 00954ecb has its CatchHandler @ 009550a8 */
        generateCodeForShaderHash
                  (this,param_1,(basic_string)local_b0,(basic_string *)&local_88,&pmStack_90,
                   &local_98);
        if (((byte)local_b0[0] & 1) != 0) {
          operator_delete(local_a0);
        }
                    /* try { // try from 00954ee4 to 00954f3f has its CatchHandler @ 009550dc */
        FUN_00956d84(acStack_6c,0x24,"%8.8X.%8.8X-%8.8X.%8.8X",*(undefined4 *)(param_1 + 4),
                     *(undefined4 *)param_1,*(undefined4 *)(param_1 + 0xc),
                     *(undefined4 *)(param_1 + 8));
        if (((ShaderManager::getInstance()::instance & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar7 != 0)) {
                    /* try { // try from 00955034 to 0095503f has its CatchHandler @ 00955070 */
          ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
          __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&ShaderManager::getInstance()::instance);
        }
        pcVar2 = (char *)((ulong)&local_88 | 1);
        uVar6 = (uint)((byte)local_88 >> 1);
        if ((local_88 & 1) != 0) {
          pcVar2 = local_78;
          uVar6 = (uint)local_80;
        }
        uVar6 = ShaderManager::createProgramAsync
                          ((ShaderManager *)&ShaderManager::getInstance()::instance,0x10,
                           (uchar *)param_1,uVar6,pcVar2,(map *)(this + 0x60),acStack_6c);
        if ((local_88 & 1) != 0) {
          operator_delete(local_78);
        }
      }
      goto LAB_00954f68;
    }
  }
  else {
    pMVar3 = *(MaterialShaderManager **)param_1;
    ppMVar11 = ppMVar9;
    do {
      bVar5 = ppMVar10[5] < *(MaterialShaderManager **)(param_1 + 8);
      if (ppMVar10[4] != pMVar3) {
        bVar5 = ppMVar10[4] < pMVar3;
      }
      lVar1 = 8;
      if (!bVar5) {
        lVar1 = 0;
        ppMVar11 = ppMVar10;
      }
      ppMVar10 = *(MaterialShaderManager ***)((long)ppMVar10 + lVar1);
    } while (ppMVar10 != (MaterialShaderManager **)0x0);
    if (ppMVar11 == ppMVar9) goto LAB_00954e4c;
    bVar5 = ppMVar11[5] <= *(MaterialShaderManager **)(param_1 + 8);
    if (pMVar3 != ppMVar11[4]) {
      bVar5 = ppMVar11[4] <= pMVar3;
    }
    if (!bVar5) goto LAB_00954e4c;
  }
  uVar6 = 1;
LAB_00954f68:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 & 1;
}


