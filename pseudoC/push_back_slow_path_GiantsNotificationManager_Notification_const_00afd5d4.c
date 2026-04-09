// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<GiantsNotificationManager::Notification_const&>
// Entry Point: 00afd5d4
// Size: 556 bytes
// Signature: void __thiscall __push_back_slow_path<GiantsNotificationManager::Notification_const&>(vector<GiantsNotificationManager::Notification,std::__ndk1::allocator<GiantsNotificationManager::Notification>> * this, Notification * param_1)


/* void std::__ndk1::vector<GiantsNotificationManager::Notification,
   std::__ndk1::allocator<GiantsNotificationManager::Notification>
   >::__push_back_slow_path<GiantsNotificationManager::Notification
   const&>(GiantsNotificationManager::Notification const&) */

void __thiscall
std::__ndk1::
vector<GiantsNotificationManager::Notification,std::__ndk1::allocator<GiantsNotificationManager::Notification>>
::__push_back_slow_path<GiantsNotificationManager::Notification_const&>
          (vector<GiantsNotificationManager::Notification,std::__ndk1::allocator<GiantsNotificationManager::Notification>>
           *this,Notification *param_1)

{
  ulong uVar1;
  Notification *pNVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  Notification *this_00;
  void *pvVar11;
  void *pvVar12;
  undefined8 uVar13;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar7 * -0x71c71c71c71c71c7 + 1;
  if (0x1c71c71c71c71c7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar9 = lVar8 * 0x1c71c71c71c71c72;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0xe38e38e38e38e2 < (ulong)(lVar8 * -0x71c71c71c71c71c7)) {
    uVar1 = 0x1c71c71c71c71c7;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (0x1c71c71c71c71c7 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 * 0x90);
  }
  this_00 = (Notification *)((long)pvVar5 + lVar7 * 0x10);
                    /* try { // try from 00afd6b0 to 00afd6bb has its CatchHandler @ 00afd800 */
  GiantsNotificationManager::Notification::Notification(this_00,param_1);
  pvVar11 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  pNVar2 = this_00 + 0x90;
  pvVar12 = pvVar11;
  if (pvVar3 != pvVar11) {
    lVar7 = 0;
    do {
      lVar8 = lVar7 + -0x90;
      uVar10 = *(undefined8 *)((long)pvVar3 + lVar7 + -0x90);
      this_00[lVar7 + -0x88] = *(Notification *)((long)pvVar3 + lVar7 + -0x88);
      *(undefined8 *)(this_00 + lVar7 + -0x90) = uVar10;
      uVar13 = *(undefined8 *)((long)pvVar3 + lVar7 + -0x78);
      uVar10 = *(undefined8 *)((long)pvVar3 + lVar7 + -0x80);
      *(undefined8 *)(this_00 + lVar7 + -0x70) = *(undefined8 *)((long)pvVar3 + lVar7 + -0x70);
      *(undefined8 *)(this_00 + lVar7 + -0x78) = uVar13;
      *(undefined8 *)(this_00 + lVar7 + -0x80) = uVar10;
      *(undefined8 *)((long)pvVar3 + lVar7 + -0x78) = 0;
      *(undefined8 *)((long)pvVar3 + lVar7 + -0x70) = 0;
      uVar13 = *(undefined8 *)((long)pvVar3 + lVar7 + -0x60);
      uVar10 = *(undefined8 *)((long)pvVar3 + lVar7 + -0x68);
      *(undefined8 *)((long)pvVar3 + lVar7 + -0x80) = 0;
      *(undefined8 *)(this_00 + lVar7 + -0x58) = *(undefined8 *)((long)pvVar3 + lVar7 + -0x58);
      *(undefined8 *)(this_00 + lVar7 + -0x60) = uVar13;
      *(undefined8 *)(this_00 + lVar7 + -0x68) = uVar10;
      *(undefined8 *)((long)pvVar3 + lVar7 + -0x60) = 0;
      *(undefined8 *)((long)pvVar3 + lVar7 + -0x58) = 0;
      uVar13 = *(undefined8 *)((long)pvVar3 + lVar7 + -0x48);
      uVar10 = *(undefined8 *)((long)pvVar3 + lVar7 + -0x50);
      *(undefined8 *)((long)pvVar3 + lVar7 + -0x68) = 0;
      *(undefined8 *)(this_00 + lVar7 + -0x40) = *(undefined8 *)((long)pvVar3 + lVar7 + -0x40);
      *(undefined8 *)(this_00 + lVar7 + -0x48) = uVar13;
      *(undefined8 *)(this_00 + lVar7 + -0x50) = uVar10;
      *(undefined8 *)((long)pvVar3 + lVar7 + -0x50) = 0;
      *(undefined8 *)((long)pvVar3 + lVar7 + -0x48) = 0;
      uVar13 = *(undefined8 *)((long)pvVar3 + lVar7 + -0x30);
      uVar10 = *(undefined8 *)((long)pvVar3 + lVar7 + -0x38);
      *(undefined8 *)((long)pvVar3 + lVar7 + -0x40) = 0;
      *(undefined8 *)(this_00 + lVar7 + -0x28) = *(undefined8 *)((long)pvVar3 + lVar7 + -0x28);
      *(undefined8 *)(this_00 + lVar7 + -0x30) = uVar13;
      *(undefined8 *)(this_00 + lVar7 + -0x38) = uVar10;
      *(undefined8 *)((long)pvVar3 + lVar7 + -0x38) = 0;
      *(undefined8 *)((long)pvVar3 + lVar7 + -0x30) = 0;
      uVar13 = *(undefined8 *)((long)pvVar3 + lVar7 + -0x18);
      uVar10 = *(undefined8 *)((long)pvVar3 + lVar7 + -0x20);
      *(undefined8 *)((long)pvVar3 + lVar7 + -0x28) = 0;
      *(undefined8 *)(this_00 + lVar7 + -0x10) = *(undefined8 *)((long)pvVar3 + lVar7 + -0x10);
      *(undefined8 *)(this_00 + lVar7 + -0x18) = uVar13;
      *(undefined8 *)(this_00 + lVar7 + -0x20) = uVar10;
      *(undefined8 *)((long)pvVar3 + lVar7 + -0x20) = 0;
      *(undefined8 *)((long)pvVar3 + lVar7 + -0x18) = 0;
      *(undefined8 *)((long)pvVar3 + lVar7 + -0x10) = 0;
      this_00[lVar7 + -8] = *(Notification *)((long)pvVar3 + lVar7 + -8);
      lVar7 = lVar8;
    } while ((void *)((long)pvVar3 + lVar8) != pvVar11);
    pvVar11 = *(void **)(this + 8);
    this_00 = this_00 + lVar8;
    pvVar12 = *(void **)this;
  }
  *(Notification **)this = this_00;
  *(Notification **)(this + 8) = pNVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar1 * 0x90);
  while (pvVar11 != pvVar12) {
    pvVar11 = (void *)((long)pvVar11 + -0x90);
    FUN_00afd540(this + 0x10,pvVar11);
  }
  if (pvVar12 != (void *)0x0) {
    operator_delete(pvVar12);
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


