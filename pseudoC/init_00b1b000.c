// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00b1b000
// Size: 692 bytes
// Signature: undefined __cdecl init(char * param_1)


/* DeviceMappingManager::init(char const*) */

undefined8 DeviceMappingManager::init(char *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar5;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 in_x2;
  ulong uVar6;
  long lVar7;
  char acStack_158 [256];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  *(undefined8 *)(param_1 + 0x70) = 0x10030;
  USBUtil::getShortDescriptorForUsage(0x10030,acStack_158);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0x10031;
  USBUtil::getShortDescriptorForUsage(0x10031,acStack_158);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xd8) = 1;
  *(undefined8 *)(param_1 + 0x100) = 0x10032;
  USBUtil::getShortDescriptorForUsage(0x10032,acStack_158);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x120) = 6;
  *(undefined8 *)(param_1 + 0x148) = 0x10033;
  USBUtil::getShortDescriptorForUsage(0x10033,acStack_158);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x168) = 4;
  *(undefined8 *)(param_1 + 400) = 0x10034;
  USBUtil::getShortDescriptorForUsage(0x10034,acStack_158);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x1b0) = 5;
  *(undefined8 *)(param_1 + 0x1d8) = 0x10035;
  USBUtil::getShortDescriptorForUsage(0x10035,acStack_158);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1f8) = 2;
  *(undefined8 *)(param_1 + 0x220) = 0x10036;
  USBUtil::getShortDescriptorForUsage(0x10036,acStack_158);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x240) = 3;
  *(undefined8 *)(param_1 + 0x268) = 0x10037;
  USBUtil::getShortDescriptorForUsage(0x10037,acStack_158);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(param_1 + 0x270);
  *(undefined4 *)(param_1 + 0x288) = 7;
  *(undefined4 *)(param_1 + 0xc18) = 8;
  uVar5 = extraout_x1;
  lVar7 = 0;
  do {
    uVar3 = *(uint *)(param_1 + lVar7 + 0x90);
    if (uVar3 < 0xe) {
      USBUtil::getShortDescriptorForUsage(*(uint *)(param_1 + lVar7 + 0x70),acStack_158);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(param_1 + (ulong)uVar3 * 0x18 + 0x978);
      uVar5 = extraout_x1_00;
    }
    uVar3 = *(uint *)(param_1 + lVar7 + 0x94);
    if (uVar3 < 0xe) {
      USBUtil::getShortDescriptorForUsage(*(uint *)(param_1 + lVar7 + 0x70),acStack_158);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(param_1 + (ulong)uVar3 * 0x18 + 0x978);
      uVar5 = extraout_x1_01;
    }
    lVar1 = lVar7 + 0x48;
    param_1[lVar7 + 0xa8] = '\0';
    lVar7 = lVar1;
  } while (lVar1 != 0x288);
  lVar7 = 0;
  uVar6 = 0;
  do {
    iVar2 = (int)uVar6;
    if (0xf < uVar6) {
      iVar2 = (int)uVar6 + 4;
    }
    *(int *)(param_1 + uVar6 * 4 + 0x2f8) = iVar2;
    FUN_00b1b2b4(acStack_158,uVar5,in_x2,&DAT_004cf2ba,iVar2 + 1);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(param_1 + lVar7 + 0x678);
    FUN_00b1b2b4(acStack_158,extraout_x1_02,in_x2,&DAT_004f2e89,uVar6 & 0xffffffff);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(param_1 + lVar7 + 0x378);
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + 0x18;
    uVar5 = extraout_x1_03;
  } while (uVar6 != 0x1c);
  *(undefined4 *)(param_1 + 0x68) = 0;
  loadDeviceMappings((DeviceMappingManager *)param_1,"shared/inputDevices/");
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


