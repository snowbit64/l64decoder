// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileShader
// Entry Point: 00ac47cc
// Size: 812 bytes
// Signature: undefined __thiscall compileShader(SpirvCompilerDxc * this, ShaderObjectDesc * param_1, vector * param_2)


/* SpirvCompilerDxc::compileShader(ShaderObjectDesc const&, std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> >&) */

bool __thiscall
SpirvCompilerDxc::compileShader(SpirvCompilerDxc *this,ShaderObjectDesc *param_1,vector *param_2)

{
  wchar_t *pwVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  void *__src;
  void *__dest;
  uint uVar10;
  uint *puVar12;
  ulong uVar13;
  void *local_98;
  __wrap_iter local_90;
  uint local_80;
  uint local_7c;
  DxcCompiler3 aDStack_78 [32];
  long local_58;
  uint *puVar11;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar10 = *(uint *)(this + 4);
  uVar4 = *(uint *)(param_1 + 0x10c);
  DxcCompiler3::DxcCompiler3(aDStack_78);
                    /* try { // try from 00ac481c to 00ac48bb has its CatchHandler @ 00ac4b3c */
  DxcCompiler3::pushArgument(aDStack_78,L"-spirv",(wchar_t *)0x0);
  pwVar1 = (wchar_t *)(this + 0xc);
  if (((byte)this[8] & 1) != 0) {
    pwVar1 = *(wchar_t **)(this + 0x18);
  }
  DxcCompiler3::pushArgument(aDStack_78,L"-fspv-target-env",pwVar1);
  DxcCompiler3::pushArgument(aDStack_78,L"-Zpr",(wchar_t *)0x0);
  if (this[0x40] != (SpirvCompilerDxc)0x0) {
    DxcCompiler3::pushArgument(aDStack_78,L"-O3",(wchar_t *)0x0);
  }
  if (this[0x41] != (SpirvCompilerDxc)0x0) {
    DxcCompiler3::pushArgument(aDStack_78,L"-Zi",(wchar_t *)0x0);
  }
  if (this[0x20] != (SpirvCompilerDxc)0x0) {
    DxcCompiler3::pushArgument(aDStack_78,L"-fvk-use-gl-layout",(wchar_t *)0x0);
  }
  pbVar3 = *(byte **)(this + 0x30);
  for (pbVar2 = *(byte **)(this + 0x28); pbVar3 != pbVar2; pbVar2 = pbVar2 + 0x18) {
    pwVar1 = (wchar_t *)(pbVar2 + 4);
    if ((*pbVar2 & 1) != 0) {
      pwVar1 = *(wchar_t **)(pbVar2 + 0x10);
    }
                    /* try { // try from 00ac48e4 to 00ac48ef has its CatchHandler @ 00ac4b40 */
    DxcCompiler3::pushArgument(aDStack_78,L"-fspv-debug",pwVar1);
  }
                    /* try { // try from 00ac4918 to 00ac4927 has its CatchHandler @ 00ac4b34 */
  plVar8 = (long *)DxcCompiler3::compile
                             (aDStack_78,*(char **)param_1,L"main",
                              (wchar_t *)
                              (&PTR_DAT_00fe6570)[(ulong)(0x400 < uVar10 >> 0xc) * 3 + (ulong)uVar4]
                             );
  if (plVar8 == (long *)0x0) {
    bVar6 = false;
  }
  else {
                    /* try { // try from 00ac4938 to 00ac493f has its CatchHandler @ 00ac4b30 */
    uVar9 = (**(code **)(*plVar8 + 0x20))(plVar8);
                    /* try { // try from 00ac494c to 00ac49c7 has its CatchHandler @ 00ac4b38 */
    __src = (void *)(**(code **)(*plVar8 + 0x18))(plVar8);
    if (__src == (void *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0))
      {
                    /* try { // try from 00ac4abc to 00ac4ac7 has its CatchHandler @ 00ac4af8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "SPIR-V Compilation Error: Failed to get buffer\n");
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else {
      __dest = *(void **)param_2;
      uVar13 = uVar9 >> 2 & 0x3fffffff;
      uVar9 = *(long *)(param_2 + 8) - (long)__dest >> 2;
      if (uVar9 < uVar13) {
        std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
                  ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)param_2,
                   uVar13 - uVar9);
        __dest = *(void **)param_2;
      }
      else if (uVar13 < uVar9) {
        *(void **)(param_2 + 8) = (void *)((long)__dest + uVar13 * 4);
      }
      memcpy(__dest,__src,uVar13 << 2);
                    /* try { // try from 00ac49ec to 00ac49f3 has its CatchHandler @ 00ac4b38 */
      (**(code **)(*plVar8 + 0x10))(plVar8);
      puVar12 = *(uint **)param_2;
                    /* try { // try from 00ac49f8 to 00ac4a27 has its CatchHandler @ 00ac4b2c */
      puVar11 = &local_80;
      uVar9 = SpirvUtil::findSpirvOpDecoration_BuiltIn(puVar12,(uint)uVar13,0,&local_7c,puVar11);
      uVar10 = (uint)puVar11;
      if (((uVar9 & 1) != 0) &&
         (uVar9 = SpirvUtil::findSpirvOpDecoration(puVar12,(uint)uVar13,local_80,0x12),
         (uVar9 & 1) == 0)) {
                    /* try { // try from 00ac4a30 to 00ac4a43 has its CatchHandler @ 00ac4b28 */
        SpirvUtil::createSpirvOpDecoration((SpirvUtil *)(ulong)local_80,0x12,0,(uint *)0x0,uVar10);
                    /* try { // try from 00ac4a54 to 00ac4a5b has its CatchHandler @ 00ac4b0c */
        std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
        insert<std::__ndk1::__wrap_iter<unsigned_int*>>
                  ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)param_2,
                   (int)*(undefined8 *)param_2 + local_7c * 4,(__wrap_iter)local_98,local_90);
        if (local_98 != (void *)0x0) {
          operator_delete(local_98);
        }
      }
    }
    bVar6 = __src != (void *)0x0;
  }
  DxcCompiler3::~DxcCompiler3(aDStack_78);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


