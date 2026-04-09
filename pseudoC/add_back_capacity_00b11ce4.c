// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 00b11ce4
// Size: 444 bytes
// Signature: undefined __add_back_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<float*, std::__ndk1::allocator<float*> >::__add_back_capacity() */

void std::__ndk1::deque<float*,std::__ndk1::allocator<float*>>::__add_back_capacity(void)

{
  float ***pppfVar1;
  void *pvVar2;
  long lVar3;
  void **in_x0;
  float **ppfVar4;
  ulong uVar5;
  long lVar6;
  float ***pppfVar7;
  ulong uVar8;
  float ***pppfVar9;
  float **local_68;
  float **local_60;
  float ***local_58;
  float ***pppfStack_50;
  float **local_48;
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
      local_60 = (float **)operator_new(uVar5 * 8);
      local_58 = (float ***)(local_60 + uVar8);
      local_48 = local_60 + uVar5;
      pppfStack_50 = local_58;
                    /* try { // try from 00b11db0 to 00b11db7 has its CatchHandler @ 00b11eb0 */
      local_68 = (float **)operator_new(0x1000);
                    /* try { // try from 00b11dc0 to 00b11dcb has its CatchHandler @ 00b11ea0 */
      __split_buffer<float**,std::__ndk1::allocator<float**>&>::push_back
                ((__split_buffer<float**,std::__ndk1::allocator<float**>&> *)&local_60,&local_68);
      pppfVar7 = (float ***)in_x0[2];
      pppfVar9 = pppfVar7 + 1;
      while (pppfVar7 != (float ***)in_x0[1]) {
        pppfVar7 = pppfVar7 + -1;
        pppfVar9 = pppfVar9 + -1;
                    /* try { // try from 00b11de8 to 00b11df3 has its CatchHandler @ 00b11eb4 */
        __split_buffer<float**,std::__ndk1::allocator<float**>&>::push_front
                  ((__split_buffer<float**,std::__ndk1::allocator<float**>&> *)&local_60,pppfVar7);
      }
      ppfVar4 = (float **)*in_x0;
      *in_x0 = local_60;
      pppfVar1 = (float ***)in_x0[2];
      pvVar2 = in_x0[3];
      in_x0[2] = pppfStack_50;
      in_x0[1] = local_58;
      in_x0[3] = local_48;
      pppfStack_50 = pppfVar1;
      if (pppfVar7 != pppfVar1) {
        pppfStack_50 = pppfVar1 +
                       ((ulong)((long)pppfVar1 - (long)pppfVar9) >> 3 ^ 0xffffffffffffffff);
      }
      local_60 = ppfVar4;
      local_58 = pppfVar7;
      local_48 = (float **)pvVar2;
      if (ppfVar4 != (float **)0x0) {
        operator_delete(ppfVar4);
      }
      goto LAB_00b11e44;
    }
    if (in_x0[3] != in_x0[2]) {
      local_60 = (float **)operator_new(0x1000);
      __split_buffer<float**,std::__ndk1::allocator<float**>>::push_back
                ((__split_buffer<float**,std::__ndk1::allocator<float**>> *)in_x0,&local_60);
      goto LAB_00b11e44;
    }
    local_60 = (float **)operator_new(0x1000);
    __split_buffer<float**,std::__ndk1::allocator<float**>>::push_front
              ((__split_buffer<float**,std::__ndk1::allocator<float**>> *)in_x0,&local_60);
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
  FUN_00b11efc();
LAB_00b11e44:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


