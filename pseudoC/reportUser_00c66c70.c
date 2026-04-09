// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reportUser
// Entry Point: 00c66c70
// Size: 1516 bytes
// Signature: undefined __cdecl reportUser(char * param_1, char * param_2, PLATFORM_ID param_3, REPORT_USER_REASON param_4, char * param_5)


/* UserBlockManager::reportUser(char const*, char const*, SysUtilBase::PLATFORM_ID,
   UserBlockManager::REPORT_USER_REASON, char const*) */

void UserBlockManager::reportUser
               (char *param_1,char *param_2,PLATFORM_ID param_3,REPORT_USER_REASON param_4,
               char *param_5)

{
  Thread *this;
  uint uVar1;
  double dVar2;
  double dVar3;
  
  GlobalTimeManager::getInstance();
  dVar2 = (double)GlobalTimeManager::getCurrentTime();
  Mutex::enterCriticalSection();
  dVar3 = *(double *)(param_1 + 0x148);
  if ((dVar3 == 0.0) || (dVar3 - dVar2 <= 1800000.0)) {
    if (dVar3 == 0.0) goto LAB_00c66cf8;
    dVar3 = *(double *)(param_1 + 0x1a8);
    if ((dVar3 != 0.0) && (1800000.0 < dVar3 - dVar2)) {
      uVar1 = 1;
      goto LAB_00c66d20;
    }
    if (dVar3 == 0.0) {
      uVar1 = 1;
      goto LAB_00c66d2c;
    }
    dVar3 = *(double *)(param_1 + 0x208);
    if ((dVar3 == 0.0) || (dVar3 - dVar2 <= 1800000.0)) {
      if (dVar3 == 0.0) goto LAB_00c67218;
      uVar1 = 0xffffffff;
      goto LAB_00c66d5c;
    }
    *(undefined8 *)(param_1 + 0x208) = 0;
    param_1[0x214] = '\x01';
LAB_00c67218:
    uVar1 = 2;
    if ((*(double *)(param_1 + 0x268) != 0.0) && (1800000.0 < *(double *)(param_1 + 0x268) - dVar2))
    {
      uVar1 = 2;
      *(undefined8 *)(param_1 + 0x268) = 0;
      param_1[0x274] = '\x01';
    }
LAB_00c66dac:
    dVar3 = *(double *)(param_1 + 0x2c8);
    if ((dVar3 == 0.0) || (dVar3 - dVar2 <= 1800000.0)) {
      if (uVar1 == 0xffffffff) {
LAB_00c66df0:
        if (dVar3 == 0.0) goto LAB_00c66ebc;
        uVar1 = 0xffffffff;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x2c8) = 0;
      param_1[0x2d4] = '\x01';
      if (uVar1 == 0xffffffff) goto LAB_00c66ebc;
    }
    dVar3 = *(double *)(param_1 + 0x328);
    if ((dVar3 != 0.0) && (1800000.0 < dVar3 - dVar2)) {
      *(undefined8 *)(param_1 + 0x328) = 0;
      param_1[0x334] = '\x01';
      if (uVar1 == 0xffffffff) {
LAB_00c66e48:
        uVar1 = 5;
      }
      goto LAB_00c66ef4;
    }
    if (uVar1 != 0xffffffff) goto LAB_00c66ef4;
    if (dVar3 == 0.0) goto LAB_00c66e48;
    dVar3 = *(double *)(param_1 + 0x388);
    if ((dVar3 == 0.0) || (dVar3 - dVar2 <= 1800000.0)) goto LAB_00c66f38;
    *(undefined8 *)(param_1 + 0x388) = 0;
    param_1[0x394] = '\x01';
LAB_00c66f40:
    uVar1 = 6;
    if ((*(double *)(param_1 + 1000) != 0.0) && (1800000.0 < *(double *)(param_1 + 1000) - dVar2)) {
      uVar1 = 6;
      *(undefined8 *)(param_1 + 1000) = 0;
      param_1[0x3f4] = '\x01';
    }
LAB_00c66fd0:
    dVar3 = *(double *)(param_1 + 0x448);
    if ((dVar3 == 0.0) || (dVar3 - dVar2 <= 1800000.0)) {
      if (uVar1 == 0xffffffff) {
LAB_00c67014:
        if (dVar3 == 0.0) goto LAB_00c6701c;
        uVar1 = 0xffffffff;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x448) = 0;
      param_1[0x454] = '\x01';
      if (uVar1 == 0xffffffff) goto LAB_00c6701c;
    }
    dVar3 = *(double *)(param_1 + 0x4a8);
    if ((dVar3 == 0.0) || (dVar3 - dVar2 <= 1800000.0)) {
      if (uVar1 == 0xffffffff) {
        if (dVar3 != 0.0) goto LAB_00c670ec;
        goto LAB_00c670a8;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x4a8) = 0;
      param_1[0x4b4] = '\x01';
      if (uVar1 == 0xffffffff) {
LAB_00c670a8:
        uVar1 = 9;
      }
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x148) = 0;
    param_1[0x154] = '\x01';
LAB_00c66cf8:
    uVar1 = 0;
    if ((*(double *)(param_1 + 0x1a8) != 0.0) && (1800000.0 < *(double *)(param_1 + 0x1a8) - dVar2))
    {
LAB_00c66d20:
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      param_1[0x1b4] = '\x01';
    }
LAB_00c66d2c:
    if ((*(double *)(param_1 + 0x208) != 0.0) && (1800000.0 < *(double *)(param_1 + 0x208) - dVar2))
    {
      *(undefined8 *)(param_1 + 0x208) = 0;
      param_1[0x214] = '\x01';
    }
LAB_00c66d5c:
    dVar3 = *(double *)(param_1 + 0x268);
    if ((dVar3 != 0.0) && (1800000.0 < dVar3 - dVar2)) {
      *(undefined8 *)(param_1 + 0x268) = 0;
      param_1[0x274] = '\x01';
      if (uVar1 == 0xffffffff) {
LAB_00c66da8:
        uVar1 = 3;
      }
      goto LAB_00c66dac;
    }
    if (uVar1 != 0xffffffff) goto LAB_00c66dac;
    if (dVar3 == 0.0) goto LAB_00c66da8;
    dVar3 = *(double *)(param_1 + 0x2c8);
    if ((dVar3 == 0.0) || (dVar3 - dVar2 <= 1800000.0)) goto LAB_00c66df0;
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    param_1[0x2d4] = '\x01';
LAB_00c66ebc:
    uVar1 = 4;
    if ((*(double *)(param_1 + 0x328) != 0.0) && (1800000.0 < *(double *)(param_1 + 0x328) - dVar2))
    {
      uVar1 = 4;
      *(undefined8 *)(param_1 + 0x328) = 0;
      param_1[0x334] = '\x01';
    }
LAB_00c66ef4:
    dVar3 = *(double *)(param_1 + 0x388);
    if ((dVar3 == 0.0) || (dVar3 - dVar2 <= 1800000.0)) {
      if (uVar1 == 0xffffffff) {
LAB_00c66f38:
        if (dVar3 == 0.0) goto LAB_00c66f40;
        uVar1 = 0xffffffff;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x388) = 0;
      param_1[0x394] = '\x01';
      if (uVar1 == 0xffffffff) goto LAB_00c66f40;
    }
    dVar3 = *(double *)(param_1 + 1000);
    if ((dVar3 != 0.0) && (1800000.0 < dVar3 - dVar2)) {
      *(undefined8 *)(param_1 + 1000) = 0;
      param_1[0x3f4] = '\x01';
      if (uVar1 == 0xffffffff) {
LAB_00c66fcc:
        uVar1 = 7;
      }
      goto LAB_00c66fd0;
    }
    if (uVar1 != 0xffffffff) goto LAB_00c66fd0;
    if (dVar3 == 0.0) goto LAB_00c66fcc;
    dVar3 = *(double *)(param_1 + 0x448);
    if ((dVar3 == 0.0) || (dVar3 - dVar2 <= 1800000.0)) goto LAB_00c67014;
    *(undefined8 *)(param_1 + 0x448) = 0;
    param_1[0x454] = '\x01';
LAB_00c6701c:
    uVar1 = 8;
    if ((*(double *)(param_1 + 0x4a8) != 0.0) && (1800000.0 < *(double *)(param_1 + 0x4a8) - dVar2))
    {
      uVar1 = 8;
      *(undefined8 *)(param_1 + 0x4a8) = 0;
      param_1[0x4b4] = '\x01';
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + (ulong)uVar1 * 0x60 + 0xf8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + (ulong)uVar1 * 0x60 + 0x110);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + (ulong)uVar1 * 0x60 + 0x128);
  *(REPORT_USER_REASON *)(param_1 + (ulong)uVar1 * 0x60 + 0x140) = param_4;
  *(int *)(param_1 + (ulong)uVar1 * 0x60 + 0x144) = (int)param_5;
  *(double *)(param_1 + (ulong)uVar1 * 0x60 + 0x148) = dVar2;
  param_1[(ulong)uVar1 * 0x60 + 0x154] = '\0';
  *(undefined4 *)(param_1 + (ulong)uVar1 * 0x60 + 0x150) = 0;
LAB_00c670ec:
  Mutex::leaveCriticalSection();
  Event::post();
  if (*(long *)(param_1 + 200) == 0) {
    this = (Thread *)operator_new(0x48);
                    /* try { // try from 00c6712c to 00c6712f has its CatchHandler @ 00c6725c */
    Thread::Thread(this);
    *(Thread **)(param_1 + 200) = this;
    Thread::start(this,backgroundWorkerThreadFunc,param_1,0xffffffff,"GIANTS user report thread",2,
                  0x100000);
    return;
  }
  return;
}


