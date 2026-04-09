// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 00d10014
// Size: 444 bytes
// Signature: undefined __add_back_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<unsigned int, std::__ndk1::allocator<unsigned int> >::__add_back_capacity() */

void std::__ndk1::deque<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__add_back_capacity
               (void)

{
  uint **ppuVar1;
  uint *puVar2;
  long lVar3;
  uint **in_x0;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  uint **ppuVar7;
  ulong uVar8;
  uint **ppuVar9;
  uint *local_68;
  uint *local_60;
  uint **local_58;
  uint **ppuStack_50;
  uint *local_48;
  uint **local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (in_x0[4] < (uint *)0x400) {
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
      local_60 = (uint *)operator_new(uVar5 * 8);
      local_58 = (uint **)(local_60 + uVar8 * 2);
      local_48 = local_60 + uVar5 * 2;
      ppuStack_50 = local_58;
                    /* try { // try from 00d100e0 to 00d100e7 has its CatchHandler @ 00d101e0 */
      local_68 = (uint *)operator_new(0x1000);
                    /* try { // try from 00d100f0 to 00d100fb has its CatchHandler @ 00d101d0 */
      __split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>&>::push_back
                ((__split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>&> *)&local_60,
                 &local_68);
      ppuVar7 = (uint **)in_x0[2];
      ppuVar9 = ppuVar7 + 1;
      while (ppuVar7 != (uint **)in_x0[1]) {
        ppuVar7 = ppuVar7 + -1;
        ppuVar9 = ppuVar9 + -1;
                    /* try { // try from 00d10118 to 00d10123 has its CatchHandler @ 00d101e4 */
        __split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>&>::push_front
                  ((__split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>&> *)&local_60
                   ,ppuVar7);
      }
      puVar4 = *in_x0;
      *in_x0 = local_60;
      ppuVar1 = (uint **)in_x0[2];
      puVar2 = in_x0[3];
      in_x0[2] = (uint *)ppuStack_50;
      in_x0[1] = (uint *)local_58;
      in_x0[3] = local_48;
      ppuStack_50 = ppuVar1;
      if (ppuVar7 != ppuVar1) {
        ppuStack_50 = ppuVar1 + ((ulong)((long)ppuVar1 - (long)ppuVar9) >> 3 ^ 0xffffffffffffffff);
      }
      local_60 = puVar4;
      local_58 = ppuVar7;
      local_48 = puVar2;
      if (puVar4 != (uint *)0x0) {
        operator_delete(puVar4);
      }
      goto LAB_00d10174;
    }
    if (in_x0[3] != in_x0[2]) {
      local_60 = (uint *)operator_new(0x1000);
      __split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>>::push_back
                ((__split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> *)in_x0,
                 &local_60);
      goto LAB_00d10174;
    }
    local_60 = (uint *)operator_new(0x1000);
    __split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>>::push_front
              ((__split_buffer<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> *)in_x0,
               &local_60);
    local_60 = *(uint **)in_x0[1];
    in_x0[1] = (uint *)((long)in_x0[1] + 8);
  }
  else {
    in_x0[4] = in_x0[4] + -0x100;
    local_60 = *(uint **)in_x0[1];
    in_x0[1] = (uint *)((long)in_x0[1] + 8);
  }
  FUN_00d0f76c();
LAB_00d10174:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


