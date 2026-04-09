// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00f27454
// Size: 192 bytes
// Signature: undefined __thiscall operator()(random_device * this)


/* std::__ndk1::random_device::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall std::__ndk1::random_device::operator()(random_device *this)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar5 = &local_3c;
  lVar6 = 4;
  do {
    while (lVar3 = __read_chk(*(undefined4 *)this,puVar5,lVar6,0xffffffffffffffff), lVar3 != -1) {
      if (lVar3 == 0) {
LAB_00f27500:
        uVar4 = std::__ndk1::__throw_system_error(0x3d,"random_device got EOF");
        goto LAB_00f27510;
      }
      lVar6 = lVar6 - lVar3;
      puVar5 = (uint *)((long)puVar5 + lVar3);
      if (lVar6 == 0) goto LAB_00f274c8;
    }
    piVar2 = (int *)__errno();
    if (*piVar2 != 4) {
      std::__ndk1::__throw_system_error(*piVar2,"random_device got an unexpected error");
      goto LAB_00f27500;
    }
  } while (lVar6 != 0);
LAB_00f274c8:
  uVar4 = (ulong)local_3c;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00f27510:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


