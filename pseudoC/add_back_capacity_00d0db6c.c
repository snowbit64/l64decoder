// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __add_back_capacity
// Entry Point: 00d0db6c
// Size: 444 bytes
// Signature: undefined __add_back_capacity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::deque<unsigned long, std::__ndk1::allocator<unsigned long> >::__add_back_capacity()
    */

void std::__ndk1::deque<unsigned_long,std::__ndk1::allocator<unsigned_long>>::__add_back_capacity
               (void)

{
  ulong **ppuVar1;
  ulong *puVar2;
  long lVar3;
  ulong **in_x0;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong **ppuVar7;
  ulong uVar8;
  ulong **ppuVar9;
  ulong *local_68;
  ulong *local_60;
  ulong **local_58;
  ulong **ppuStack_50;
  ulong *local_48;
  ulong **local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (in_x0[4] < (ulong *)0x200) {
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
      local_60 = (ulong *)operator_new(uVar5 * 8);
      local_58 = (ulong **)(local_60 + uVar8);
      local_48 = local_60 + uVar5;
      ppuStack_50 = local_58;
                    /* try { // try from 00d0dc38 to 00d0dc3f has its CatchHandler @ 00d0dd38 */
      local_68 = (ulong *)operator_new(0x1000);
                    /* try { // try from 00d0dc48 to 00d0dc53 has its CatchHandler @ 00d0dd28 */
      __split_buffer<unsigned_long*,std::__ndk1::allocator<unsigned_long*>&>::push_back
                ((__split_buffer<unsigned_long*,std::__ndk1::allocator<unsigned_long*>&> *)&local_60
                 ,&local_68);
      ppuVar7 = (ulong **)in_x0[2];
      ppuVar9 = ppuVar7 + 1;
      while (ppuVar7 != (ulong **)in_x0[1]) {
        ppuVar7 = ppuVar7 + -1;
        ppuVar9 = ppuVar9 + -1;
                    /* try { // try from 00d0dc70 to 00d0dc7b has its CatchHandler @ 00d0dd3c */
        __split_buffer<unsigned_long*,std::__ndk1::allocator<unsigned_long*>&>::push_front
                  ((__split_buffer<unsigned_long*,std::__ndk1::allocator<unsigned_long*>&> *)
                   &local_60,ppuVar7);
      }
      puVar4 = *in_x0;
      *in_x0 = local_60;
      ppuVar1 = (ulong **)in_x0[2];
      puVar2 = in_x0[3];
      in_x0[2] = (ulong *)ppuStack_50;
      in_x0[1] = (ulong *)local_58;
      in_x0[3] = local_48;
      ppuStack_50 = ppuVar1;
      if (ppuVar7 != ppuVar1) {
        ppuStack_50 = ppuVar1 + ((ulong)((long)ppuVar1 - (long)ppuVar9) >> 3 ^ 0xffffffffffffffff);
      }
      local_60 = puVar4;
      local_58 = ppuVar7;
      local_48 = puVar2;
      if (puVar4 != (ulong *)0x0) {
        operator_delete(puVar4);
      }
      goto LAB_00d0dccc;
    }
    if (in_x0[3] != in_x0[2]) {
      local_60 = (ulong *)operator_new(0x1000);
      __split_buffer<unsigned_long*,std::__ndk1::allocator<unsigned_long*>>::push_back
                ((__split_buffer<unsigned_long*,std::__ndk1::allocator<unsigned_long*>> *)in_x0,
                 &local_60);
      goto LAB_00d0dccc;
    }
    local_60 = (ulong *)operator_new(0x1000);
    __split_buffer<unsigned_long*,std::__ndk1::allocator<unsigned_long*>>::push_front
              ((__split_buffer<unsigned_long*,std::__ndk1::allocator<unsigned_long*>> *)in_x0,
               &local_60);
    local_60 = (ulong *)*in_x0[1];
    in_x0[1] = in_x0[1] + 1;
  }
  else {
    in_x0[4] = in_x0[4] + -0x40;
    local_60 = (ulong *)*in_x0[1];
    in_x0[1] = in_x0[1] + 1;
  }
  FUN_00d0dd84();
LAB_00d0dccc:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


