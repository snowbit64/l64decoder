// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 009b3080
// Size: 448 bytes
// Signature: undefined __thiscall __append(vector<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData>> * this, ulong param_1)


/* std::__ndk1::vector<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData,
   std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData> >::__append(unsigned
   long) */

void __thiscall
std::__ndk1::
vector<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData>>
::__append(vector<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData>>
           *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  void *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  void *local_58;
  vector<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData>>
  *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar5 = *(undefined8 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar5 >> 5) * -0x3333333333333333) < param_1) {
    lVar3 = (long)puVar5 - *(long *)this >> 5;
    uVar1 = lVar3 * -0x3333333333333333 + param_1;
    if (0x199999999999999 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = *(long *)(this + 0x10) - *(long *)this >> 5;
    uVar7 = lVar6 * -0x6666666666666666;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    local_50 = this + 0x10;
    if (0xcccccccccccccb < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar1 = 0x199999999999999;
    }
    if (uVar1 == 0) {
      local_70 = (void *)0x0;
    }
    else {
      if (0x199999999999999 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_70 = operator_new(uVar1 * 0xa0);
    }
    local_68 = (undefined8 *)((long)local_70 + lVar3 * 0x20);
    local_58 = (void *)((long)local_70 + uVar1 * 0xa0);
    local_60 = local_68 + param_1 * 0x14;
    puVar5 = local_68;
    do {
      puVar5[0x11] = 0;
      puVar5[0x10] = 0;
      puVar5[0x13] = 0;
      puVar5[0x12] = 0;
      puVar5[0xd] = 0;
      puVar5[0xc] = 0;
      puVar5[0xf] = 0;
      puVar5[0xe] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      *(undefined *)(puVar5 + 4) = 1;
      *(undefined *)(puVar5 + 8) = 1;
      puVar5 = puVar5 + 0x14;
    } while (puVar5 != local_60);
                    /* try { // try from 009b31dc to 009b31e7 has its CatchHandler @ 009b3240 */
    __swap_out_circular_buffer(this,(__split_buffer *)&local_70);
    FUN_009b3440(&local_70,local_68);
    if (local_70 != (void *)0x0) {
      operator_delete(local_70);
    }
  }
  else {
    puVar4 = puVar5;
    if (param_1 != 0) {
      puVar4 = puVar5 + param_1 * 0x14;
      do {
        puVar5[0x11] = 0;
        puVar5[0x10] = 0;
        puVar5[0x13] = 0;
        puVar5[0x12] = 0;
        puVar5[0xd] = 0;
        puVar5[0xc] = 0;
        puVar5[0xf] = 0;
        puVar5[0xe] = 0;
        puVar5[9] = 0;
        puVar5[8] = 0;
        puVar5[0xb] = 0;
        puVar5[10] = 0;
        puVar5[5] = 0;
        puVar5[4] = 0;
        puVar5[7] = 0;
        puVar5[6] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        *(undefined *)(puVar5 + 4) = 1;
        *(undefined *)(puVar5 + 8) = 1;
        puVar5 = puVar5 + 0x14;
      } while (puVar5 != puVar4);
    }
    *(undefined8 **)(this + 8) = puVar4;
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


