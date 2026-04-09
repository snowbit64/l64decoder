// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 00bf3bc4
// Size: 444 bytes
// Signature: undefined __add_back_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<ShaderManager::AsyncCompileRequest*,
   std::__ndk1::allocator<ShaderManager::AsyncCompileRequest*> >::__add_back_capacity() */

void std::__ndk1::
     deque<ShaderManager::AsyncCompileRequest*,std::__ndk1::allocator<ShaderManager::AsyncCompileRequest*>>
     ::__add_back_capacity(void)

{
  AsyncCompileRequest ***pppAVar1;
  void *pvVar2;
  long lVar3;
  void **in_x0;
  AsyncCompileRequest **ppAVar4;
  ulong uVar5;
  long lVar6;
  AsyncCompileRequest ***pppAVar7;
  ulong uVar8;
  AsyncCompileRequest ***pppAVar9;
  AsyncCompileRequest **local_68;
  AsyncCompileRequest **local_60;
  AsyncCompileRequest ***local_58;
  AsyncCompileRequest ***pppAStack_50;
  AsyncCompileRequest **local_48;
  void **local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (in_x0[4] < (void *)0x200) {
    lVar6 = (long)in_x0[3] - (long)*in_x0;
    uVar8 = (long)in_x0[2] - (long)in_x0[1] >> 3;
    if ((ulong)(lVar6 >> 3) <= uVar8) {
      uVar5 = lVar6 >> 2;
      if (lVar6 == 0) {
        uVar5 = 1;
      }
      local_40 = in_x0 + 3;
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_60 = (AsyncCompileRequest **)operator_new(uVar5 * 8);
      local_58 = (AsyncCompileRequest ***)(local_60 + uVar8);
      local_48 = local_60 + uVar5;
      pppAStack_50 = local_58;
                    /* try { // try from 00bf3c90 to 00bf3c97 has its CatchHandler @ 00bf3d90 */
      local_68 = (AsyncCompileRequest **)operator_new(0x1000);
                    /* try { // try from 00bf3ca0 to 00bf3cab has its CatchHandler @ 00bf3d80 */
      __split_buffer<ShaderManager::AsyncCompileRequest**,std::__ndk1::allocator<ShaderManager::AsyncCompileRequest**>&>
      ::push_back((__split_buffer<ShaderManager::AsyncCompileRequest**,std::__ndk1::allocator<ShaderManager::AsyncCompileRequest**>&>
                   *)&local_60,&local_68);
      pppAVar7 = (AsyncCompileRequest ***)in_x0[2];
      pppAVar9 = pppAVar7 + 1;
      while (pppAVar7 != (AsyncCompileRequest ***)in_x0[1]) {
        pppAVar7 = pppAVar7 + -1;
        pppAVar9 = pppAVar9 + -1;
                    /* try { // try from 00bf3cc8 to 00bf3cd3 has its CatchHandler @ 00bf3d94 */
        __split_buffer<ShaderManager::AsyncCompileRequest**,std::__ndk1::allocator<ShaderManager::AsyncCompileRequest**>&>
        ::push_front((__split_buffer<ShaderManager::AsyncCompileRequest**,std::__ndk1::allocator<ShaderManager::AsyncCompileRequest**>&>
                      *)&local_60,pppAVar7);
      }
      ppAVar4 = (AsyncCompileRequest **)*in_x0;
      *in_x0 = local_60;
      pppAVar1 = (AsyncCompileRequest ***)in_x0[2];
      pvVar2 = in_x0[3];
      in_x0[2] = pppAStack_50;
      in_x0[1] = local_58;
      in_x0[3] = local_48;
      pppAStack_50 = pppAVar1;
      if (pppAVar7 != pppAVar1) {
        pppAStack_50 = pppAVar1 +
                       ((ulong)((long)pppAVar1 - (long)pppAVar9) >> 3 ^ 0xffffffffffffffff);
      }
      local_60 = ppAVar4;
      local_58 = pppAVar7;
      local_48 = (AsyncCompileRequest **)pvVar2;
      if (ppAVar4 != (AsyncCompileRequest **)0x0) {
        operator_delete(ppAVar4);
      }
      goto LAB_00bf3d24;
    }
    if (in_x0[3] != in_x0[2]) {
      local_60 = (AsyncCompileRequest **)operator_new(0x1000);
      __split_buffer<ShaderManager::AsyncCompileRequest**,std::__ndk1::allocator<ShaderManager::AsyncCompileRequest**>>
      ::push_back((__split_buffer<ShaderManager::AsyncCompileRequest**,std::__ndk1::allocator<ShaderManager::AsyncCompileRequest**>>
                   *)in_x0,&local_60);
      goto LAB_00bf3d24;
    }
    local_60 = (AsyncCompileRequest **)operator_new(0x1000);
    __split_buffer<ShaderManager::AsyncCompileRequest**,std::__ndk1::allocator<ShaderManager::AsyncCompileRequest**>>
    ::push_front((__split_buffer<ShaderManager::AsyncCompileRequest**,std::__ndk1::allocator<ShaderManager::AsyncCompileRequest**>>
                  *)in_x0,&local_60);
                    /* WARNING: Load size is inaccurate */
    local_60 = *in_x0[1];
    in_x0[1] = (void **)((long)in_x0[1] + 8);
  }
  else {
    in_x0[4] = (void *)((long)in_x0[4] + -0x200);
                    /* WARNING: Load size is inaccurate */
    local_60 = *in_x0[1];
    in_x0[1] = (void **)((long)in_x0[1] + 8);
  }
  FUN_00bf3ddc();
LAB_00bf3d24:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


