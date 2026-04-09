// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addNotification
// Entry Point: 00afce50
// Size: 468 bytes
// Signature: undefined __cdecl addNotification(char * param_1, char * param_2, bool param_3, char * param_4, char * param_5, char * param_6, char * param_7, char * param_8, undefined8 param_9)


/* WARNING: Type propagation algorithm not settling */
/* GiantsNotificationManager::addNotification(char const*, char const*, bool, char const*, char
   const*, char const*, char const*, char const*) */

void GiantsNotificationManager::addNotification
               (char *param_1,char *param_2,bool param_3,char *param_4,char *param_5,char *param_6,
               char *param_7,char *param_8,undefined8 param_9)

{
  Notification *this;
  long lVar1;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  byte local_f0;
  ulong local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  ulong uStack_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  void *pvStack_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_78 = (void *)0x0;
  uStack_80 = 0;
  local_88 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = 0;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  uStack_b0 = 0;
  local_b8 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_d0 = 0;
  local_d8 = (void *)0x0;
  uStack_e0 = 0;
  local_e8 = 0;
  local_fc = 0;
  sscanf(param_2,"%x",&local_fc);
  local_f8 = local_fc;
                    /* try { // try from 00afcee4 to 00afcf37 has its CatchHandler @ 00afd030 */
  local_f4 = StringUtil::parseVersionString((char *)(ulong)param_3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_e8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&uStack_d0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_b8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&uStack_a0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_88);
  this = *(Notification **)(param_1 + 0x48);
  local_f0 = (byte)param_4 & 1;
  local_70 = 0;
  if (this == *(Notification **)(param_1 + 0x50)) {
                    /* try { // try from 00afcf6c to 00afcf73 has its CatchHandler @ 00afd030 */
    std::__ndk1::
    vector<GiantsNotificationManager::Notification,std::__ndk1::allocator<GiantsNotificationManager::Notification>>
    ::__push_back_slow_path<GiantsNotificationManager::Notification_const&>
              ((vector<GiantsNotificationManager::Notification,std::__ndk1::allocator<GiantsNotificationManager::Notification>>
                *)(param_1 + 0x40),(Notification *)&local_f8);
  }
  else {
                    /* try { // try from 00afcf50 to 00afcf5b has its CatchHandler @ 00afd024 */
    Notification::Notification(this,(Notification *)&local_f8);
    *(Notification **)(param_1 + 0x48) = this + 0x90;
  }
  param_1[1] = '\x01';
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((uStack_a0 & 1) != 0) {
    operator_delete(pvStack_90);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((uStack_d0 & 1) != 0) {
    operator_delete(pvStack_c0);
  }
  if ((local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


