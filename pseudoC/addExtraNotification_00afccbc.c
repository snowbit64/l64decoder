// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addExtraNotification
// Entry Point: 00afccbc
// Size: 372 bytes
// Signature: undefined addExtraNotification(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GiantsNotificationManager::addExtraNotification() */

void GiantsNotificationManager::addExtraNotification(void)

{
  Notification *this;
  long lVar1;
  long in_x0;
  undefined8 local_c8;
  undefined local_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  void *pvStack_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  ulong uStack_70;
  undefined8 local_68;
  void *pvStack_60;
  ulong local_58;
  undefined8 uStack_50;
  void *local_48;
  undefined local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(in_x0 + 0x58) != '\0') {
    local_48 = (void *)0x0;
    local_c8 = 0;
    uStack_50 = 0;
    local_58 = 0;
    pvStack_60 = (void *)0x0;
    local_68 = 0;
    uStack_70 = 0;
    local_78 = (void *)0x0;
    uStack_80 = 0;
    local_88 = 0;
    pvStack_90 = (void *)0x0;
    local_98 = 0;
    uStack_a0 = 0;
    local_a8 = (void *)0x0;
    uStack_b0 = 0;
    local_b8 = 0;
                    /* try { // try from 00afcd1c to 00afcd57 has its CatchHandler @ 00afce3c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_b8,(basic_string *)(in_x0 + 0x70));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &uStack_a0,(basic_string *)(in_x0 + 0x88));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_88,(basic_string *)(in_x0 + 0xa0));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &uStack_70,(basic_string *)(in_x0 + 0xb8));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_58,(basic_string *)(in_x0 + 0xd0));
    this = *(Notification **)(in_x0 + 0x48);
    local_c0 = 0;
    local_40 = 0;
    if (this == *(Notification **)(in_x0 + 0x50)) {
                    /* try { // try from 00afcd88 to 00afcd8f has its CatchHandler @ 00afce3c */
      std::__ndk1::
      vector<GiantsNotificationManager::Notification,std::__ndk1::allocator<GiantsNotificationManager::Notification>>
      ::__push_back_slow_path<GiantsNotificationManager::Notification_const&>
                ((vector<GiantsNotificationManager::Notification,std::__ndk1::allocator<GiantsNotificationManager::Notification>>
                  *)(in_x0 + 0x40),(Notification *)&local_c8);
    }
    else {
                    /* try { // try from 00afcd6c to 00afcd77 has its CatchHandler @ 00afce30 */
      Notification::Notification(this,(Notification *)&local_c8);
      *(Notification **)(in_x0 + 0x48) = this + 0x90;
    }
    *(undefined *)(in_x0 + 0x58) = 0;
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    if ((uStack_70 & 1) != 0) {
      operator_delete(pvStack_60);
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if ((uStack_a0 & 1) != 0) {
      operator_delete(pvStack_90);
    }
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


