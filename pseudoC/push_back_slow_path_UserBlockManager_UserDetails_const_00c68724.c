// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<UserBlockManager::UserDetails_const&>
// Entry Point: 00c68724
// Size: 508 bytes
// Signature: void __thiscall __push_back_slow_path<UserBlockManager::UserDetails_const&>(vector<UserBlockManager::UserDetails,std::__ndk1::allocator<UserBlockManager::UserDetails>> * this, UserDetails * param_1)


/* void std::__ndk1::vector<UserBlockManager::UserDetails,
   std::__ndk1::allocator<UserBlockManager::UserDetails>
   >::__push_back_slow_path<UserBlockManager::UserDetails const&>(UserBlockManager::UserDetails
   const&) */

void __thiscall
std::__ndk1::
vector<UserBlockManager::UserDetails,std::__ndk1::allocator<UserBlockManager::UserDetails>>::
__push_back_slow_path<UserBlockManager::UserDetails_const&>
          (vector<UserBlockManager::UserDetails,std::__ndk1::allocator<UserBlockManager::UserDetails>>
           *this,UserDetails *param_1)

{
  ulong uVar1;
  UserDetails *pUVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  UserDetails *pUVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar6 * -0x3333333333333333 + 1;
  if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar10 = lVar9 * -0x6666666666666666;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x199999999999998 < (ulong)(lVar9 * -0x3333333333333333)) {
    uVar1 = 0x333333333333333;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x50);
  }
  pUVar12 = (UserDetails *)((long)pvVar4 + lVar6 * 0x10);
                    /* try { // try from 00c687e4 to 00c687f3 has its CatchHandler @ 00c68920 */
  allocator<UserBlockManager::UserDetails>::
  construct<UserBlockManager::UserDetails,UserBlockManager::UserDetails_const&>
            ((allocator<UserBlockManager::UserDetails> *)(this + 0x10),pUVar12,param_1);
  pvVar11 = *(void **)this;
  pUVar2 = pUVar12 + 0x50;
  pvVar7 = *(void **)(this + 8);
  pvVar8 = pvVar11;
  if (*(void **)(this + 8) != pvVar11) {
    do {
      uVar14 = *(undefined8 *)((long)pvVar7 + -0x48);
      uVar13 = *(undefined8 *)((long)pvVar7 + -0x50);
      *(undefined8 *)(pUVar12 + -0x40) = *(undefined8 *)((long)pvVar7 + -0x40);
      *(undefined8 *)(pUVar12 + -0x48) = uVar14;
      *(undefined8 *)(pUVar12 + -0x50) = uVar13;
      *(undefined8 *)((long)pvVar7 + -0x48) = 0;
      *(undefined8 *)((long)pvVar7 + -0x40) = 0;
      uVar14 = *(undefined8 *)((long)pvVar7 + -0x30);
      uVar13 = *(undefined8 *)((long)pvVar7 + -0x38);
      *(undefined8 *)((long)pvVar7 + -0x50) = 0;
      *(undefined8 *)(pUVar12 + -0x28) = *(undefined8 *)((long)pvVar7 + -0x28);
      *(undefined8 *)(pUVar12 + -0x30) = uVar14;
      *(undefined8 *)(pUVar12 + -0x38) = uVar13;
      *(undefined8 *)((long)pvVar7 + -0x30) = 0;
      *(undefined8 *)((long)pvVar7 + -0x28) = 0;
      *(undefined8 *)((long)pvVar7 + -0x38) = 0;
      *(undefined4 *)(pUVar12 + -0x20) = *(undefined4 *)((long)pvVar7 + -0x20);
      uVar14 = *(undefined8 *)((long)pvVar7 + -0x10);
      uVar13 = *(undefined8 *)((long)pvVar7 + -0x18);
      *(undefined8 *)(pUVar12 + -8) = *(undefined8 *)((long)pvVar7 + -8);
      pvVar8 = (void *)((long)pvVar7 + -0x50);
      *(undefined8 *)(pUVar12 + -0x10) = uVar14;
      *(undefined8 *)(pUVar12 + -0x18) = uVar13;
      pUVar12 = pUVar12 + -0x50;
      *(undefined8 *)((long)pvVar7 + -0x10) = 0;
      *(undefined8 *)((long)pvVar7 + -8) = 0;
      *(undefined8 *)((long)pvVar7 + -0x18) = 0;
      pvVar7 = pvVar8;
    } while (pvVar8 != pvVar11);
    pvVar11 = *(void **)this;
    pvVar8 = *(void **)(this + 8);
  }
  *(UserDetails **)this = pUVar12;
  *(UserDetails **)(this + 8) = pUVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x50);
  while (pvVar4 = pvVar8, pvVar4 != pvVar11) {
    if ((*(byte *)((long)pvVar4 + -0x18) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar4 + -8));
    }
    if ((*(byte *)((long)pvVar4 + -0x38) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar4 + -0x28));
    }
    pvVar8 = (void *)((long)pvVar4 + -0x50);
    if ((*(byte *)((long)pvVar4 + -0x50) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar4 + -0x40));
    }
  }
  if (pvVar11 != (void *)0x0) {
    operator_delete(pvVar11);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


