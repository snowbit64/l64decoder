// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079d2a0
// Entry Point: 0079d2a0
// Size: 644 bytes
// Signature: undefined FUN_0079d2a0(void)


void FUN_0079d2a0(uint *param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  bool local_50 [4];
  uint local_4c;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (((DAT_0107c4a8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0107c4a8), iVar7 != 0)) {
    DAT_0107c490 = 0;
    DAT_0107c498 = 0;
    DAT_0107c4a0 = 0;
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_0107c490,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_0107c4a8);
  }
  if (((DAT_0107c4c8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0107c4c8), iVar7 != 0)) {
    DAT_0107c4b0 = 0;
    DAT_0107c4b8 = 0;
    DAT_0107c4c0 = 0;
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_0107c4b0,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_0107c4c8);
  }
  if (((DAT_0107c4e8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0107c4e8), iVar7 != 0)) {
    DAT_0107c4d0 = 0;
    DAT_0107c4d8 = 0;
    DAT_0107c4e0 = 0;
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_0107c4d0,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_0107c4e8);
  }
  puVar1 = param_1 + 0x47;
  uVar8 = GenericSaveGameUtil::getSaveGameInfo
                    (*param_1,&local_4c,(basic_string *)&DAT_0107c490,(basic_string *)&DAT_0107c4b0,
                     (basic_string *)&DAT_0107c4d0,local_50);
  uVar2 = DAT_0107c4a0;
  if ((uVar8 & 1) == 0) {
    local_50[0] = false;
    param_1[0x40] = 0xffffffff;
    *(ushort *)puVar1 = *(ushort *)puVar1 & 0xfffe;
    *(ushort *)(param_1 + 0x4b) = *(ushort *)(param_1 + 0x4b) & 0xfffe;
    param_1[0x42] = 1;
    *(undefined **)(param_1 + 0x44) = &DAT_0050a39f;
    param_1[0x46] = 6;
    *(undefined **)(param_1 + 0x48) = &DAT_0050a39f;
    param_1[0x4a] = 6;
    *(undefined **)(param_1 + 0x4c) = &DAT_0050a39f;
    param_1[0x4e] = 6;
    *(ushort *)(param_1 + 0x4f) = *(ushort *)(param_1 + 0x4f) & 0xfffe;
  }
  else {
    uVar8 = DAT_0107c490 & 1;
    param_1[0x42] = 1;
    *(ushort *)puVar1 = *(ushort *)puVar1 & 0xfffe;
    uVar3 = DAT_0107c4c0;
    uVar6 = DAT_0107c4b0;
    param_1[0x40] = local_4c;
    *(ushort *)(param_1 + 0x4b) = *(ushort *)(param_1 + 0x4b) & 0xfffe;
    if (uVar8 == 0) {
      uVar2 = 0x107c491;
    }
    if ((uVar6 & 1) == 0) {
      uVar3 = 0x107c4b1;
    }
    uVar4 = DAT_0107c4e0;
    if ((DAT_0107c4d0 & 1) == 0) {
      uVar4 = 0x107c4d1;
    }
    *(undefined8 *)(param_1 + 0x44) = uVar2;
    param_1[0x46] = 6;
    param_1[0x4a] = 6;
    param_1[0x4e] = 6;
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined8 *)(param_1 + 0x4c) = uVar4;
    *(ushort *)(param_1 + 0x4f) = *(ushort *)(param_1 + 0x4f) & 0xfffe;
  }
  *(bool *)(param_1 + 0x50) = local_50[0];
  param_1[0x52] = 3;
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


