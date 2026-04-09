// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079d524
// Entry Point: 0079d524
// Size: 608 bytes
// Signature: undefined FUN_0079d524(void)


void FUN_0079d524(uint *param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  bool local_4c [4];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (((DAT_0107c508 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0107c508), iVar7 != 0)) {
    DAT_0107c4f0 = 0;
    DAT_0107c4f8 = 0;
    DAT_0107c500 = 0;
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_0107c4f0,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_0107c508);
  }
  if (((DAT_0107c528 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0107c528), iVar7 != 0)) {
    DAT_0107c510 = 0;
    DAT_0107c518 = 0;
    DAT_0107c520 = 0;
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_0107c510,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_0107c528);
  }
  if (((DAT_0107c548 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0107c548), iVar7 != 0)) {
    DAT_0107c530 = 0;
    DAT_0107c538 = 0;
    DAT_0107c540 = 0;
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_0107c530,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_0107c548);
  }
  puVar1 = param_1 + 0x43;
  uVar8 = GenericSaveGameUtil::getSaveGameInfoById
                    (*param_1,(basic_string *)&DAT_0107c4f0,(basic_string *)&DAT_0107c510,
                     (basic_string *)&DAT_0107c530,local_4c);
  uVar2 = DAT_0107c500;
  if ((uVar8 & 1) == 0) {
    local_4c[0] = false;
    *(ushort *)puVar1 = *(ushort *)puVar1 & 0xfffe;
    *(ushort *)(param_1 + 0x47) = *(ushort *)(param_1 + 0x47) & 0xfffe;
    *(undefined **)(param_1 + 0x40) = &DAT_0050a39f;
    *(undefined **)(param_1 + 0x44) = &DAT_0050a39f;
    param_1[0x42] = 6;
    param_1[0x46] = 6;
    *(undefined **)(param_1 + 0x48) = &DAT_0050a39f;
    param_1[0x4a] = 6;
    *(ushort *)(param_1 + 0x4b) = *(ushort *)(param_1 + 0x4b) & 0xfffe;
  }
  else {
    uVar8 = DAT_0107c4f0 & 1;
    *(ushort *)puVar1 = *(ushort *)puVar1 & 0xfffe;
    uVar3 = DAT_0107c520;
    uVar6 = DAT_0107c510;
    *(ushort *)(param_1 + 0x47) = *(ushort *)(param_1 + 0x47) & 0xfffe;
    uVar4 = DAT_0107c540;
    if (uVar8 == 0) {
      uVar2 = 0x107c4f1;
    }
    if ((uVar6 & 1) == 0) {
      uVar3 = 0x107c511;
    }
    uVar8 = DAT_0107c530 & 1;
    param_1[0x42] = 6;
    param_1[0x46] = 6;
    if (uVar8 == 0) {
      uVar4 = 0x107c531;
    }
    param_1[0x4a] = 6;
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    *(undefined8 *)(param_1 + 0x44) = uVar3;
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    *(ushort *)(param_1 + 0x4b) = *(ushort *)(param_1 + 0x4b) & 0xfffe;
  }
  *(bool *)(param_1 + 0x4c) = local_4c[0];
  param_1[0x4e] = 3;
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


