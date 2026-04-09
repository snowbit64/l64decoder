// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aedc8
// Entry Point: 007aedc8
// Size: 388 bytes
// Signature: undefined FUN_007aedc8(void)


void FUN_007aedc8(undefined8 param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (((DAT_0107c618 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0107c618), iVar4 != 0)) {
    DAT_0107c600 = 0;
    DAT_0107c608 = 0;
    DAT_0107c610 = (void *)0x0;
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_0107c600,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_0107c618);
  }
  lVar5 = DensityMap::getFilename();
  if (lVar5 == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize(0x107c600,'\0');
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&DAT_0107c600);
    uVar3 = DAT_0107c608;
    pvVar1 = DAT_0107c610;
    if ((DAT_0107c600 & 1) == 0) {
      uVar3 = DAT_0107c600 >> 1 & 0x7f;
      pvVar1 = (void *)((long)&DAT_0107c600 + 1);
    }
    do {
      uVar6 = uVar3;
      if (uVar6 == 0) goto LAB_007aeea4;
      uVar3 = uVar6 - 1;
    } while (*(char *)((long)pvVar1 + (uVar6 - 1)) != '/');
    if (uVar6 - 1 != 0xffffffffffffffff) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_50,0x107c600,uVar6,(allocator *)0xffffffffffffffff);
      if ((DAT_0107c600 & 1) != 0) {
        operator_delete(DAT_0107c610);
      }
      DAT_0107c608 = uStack_48;
      DAT_0107c600 = local_50;
      DAT_0107c610 = local_40;
    }
  }
LAB_007aeea4:
  pvVar1 = DAT_0107c610;
  uVar3 = DAT_0107c600 & 1;
  *(undefined4 *)(param_2 + 0x108) = 6;
  if (uVar3 == 0) {
    pvVar1 = (void *)((long)&DAT_0107c600 + 1);
  }
  *(void **)(param_2 + 0x100) = pvVar1;
  *(ushort *)(param_2 + 0x10c) = *(ushort *)(param_2 + 0x10c) & 0xfffe;
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


