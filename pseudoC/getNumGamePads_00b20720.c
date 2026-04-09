// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumGamePads
// Entry Point: 00b20720
// Size: 636 bytes
// Signature: undefined getNumGamePads(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidInputDevice::getNumGamePads() */

void AndroidInputDevice::getNumGamePads(void)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long in_x0;
  char *extraout_x1;
  char *extraout_x1_00;
  char *extraout_x1_01;
  char *pcVar5;
  char *extraout_x1_02;
  undefined1 *puVar6;
  undefined1 *puVar7;
  double dVar8;
  uint local_78 [8];
  uint local_58 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  dVar8 = (double)StopWatch::getMs();
  pcVar5 = extraout_x1;
  if (2000 < (uint)(int)dVar8) {
    uVar1 = *(uint *)(in_x0 + 0x13c8);
    uVar3 = AndroidJNICall::callIntFromIntIntArrayrefIntArrayref
                      (*(AndroidJNICall **)(in_x0 + 0x30),"getNumGamePads",8,local_58,8,local_78,8);
    *(undefined4 *)(in_x0 + 0x13c8) = uVar3;
    StopWatch::reset();
    StopWatch::start();
    pcVar5 = extraout_x1_00;
    if (uVar1 != *(uint *)(in_x0 + 0x13c8)) {
      *(undefined1 **)(in_x0 + 0x1448) = m_axisLabelsGeneric;
      *(undefined1 **)(in_x0 + 0x13f0) = m_buttonLabelsGeneric;
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00b20960 to 00b2096b has its CatchHandler @ 00b2099c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "Number of attached gamepads changed: %u->%u\n",(ulong)uVar1,
                        (ulong)*(uint *)(in_x0 + 0x13c8));
      pcVar5 = extraout_x1_01;
      if (*(int *)(in_x0 + 0x13c8) != 0) {
        *(undefined4 *)(in_x0 + 0x13c8) = 1;
        *(uint *)(in_x0 + 0x13cc) = local_58[0];
        *(uint *)(in_x0 + 0x13d0) = local_78[0];
        if (local_58[0] == 0x45e) {
          pcVar5 = "XINPUT_GAMEPAD";
          puVar6 = m_buttonLabelsGeneric;
          puVar7 = m_axisLabelsGeneric;
          if ((((0x2c < local_78[0] - 0x2d1) ||
               ((1L << ((ulong)(local_78[0] - 0x2d1) & 0x3f) & 0x100002041001U) == 0)) &&
              ((4 < local_78[0] - 0x285 || ((1 << (ulong)(local_78[0] - 0x285 & 0x1f) & 0x19U) == 0)
               ))) && (local_78[0] != 0x202)) goto LAB_00b20928;
        }
        else if (local_58[0] == 0x57e) {
          if (local_78[0] != 0x2009) goto LAB_00b20928;
          puVar6 = m_buttonLabelsSwitch;
          puVar7 = m_axisLabelsSwitch;
        }
        else {
          if (local_58[0] != 0x54c) goto LAB_00b20928;
          pcVar5 = "DUALSHOCK(R)4";
          puVar6 = m_buttonLabelsPS4;
          puVar7 = m_axisLabelsPS4;
          if ((int)local_78[0] < 0xba0) {
            if ((local_78[0] != 0x5c4) && (local_78[0] != 0x9cc)) goto LAB_00b20928;
          }
          else if (local_78[0] != 0xba0) {
            if (local_78[0] != 0xce6) goto LAB_00b20928;
            puVar6 = m_buttonLabelsPS4;
            puVar7 = m_axisLabelsPS4;
          }
        }
        *(undefined1 **)(in_x0 + 0x1448) = puVar7;
        *(undefined1 **)(in_x0 + 0x13f0) = puVar6;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(in_x0 + 0x1588));
        pcVar5 = extraout_x1_02;
      }
    }
  }
LAB_00b20928:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined4 *)(in_x0 + 0x13c8),pcVar5);
  }
  return;
}


