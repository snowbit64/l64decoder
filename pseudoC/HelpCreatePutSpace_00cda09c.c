// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HelpCreatePutSpace
// Entry Point: 00cda09c
// Size: 244 bytes
// Signature: undefined __thiscall HelpCreatePutSpace(FilterPutSpaceHelper * this, BufferedTransformation * param_1, basic_string * param_2, ulong param_3)


/* CryptoPP::FilterPutSpaceHelper::HelpCreatePutSpace(CryptoPP::BufferedTransformation&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned long) */

void __thiscall
CryptoPP::FilterPutSpaceHelper::HelpCreatePutSpace
          (FilterPutSpaceHelper *this,BufferedTransformation *param_1,basic_string *param_2,
          ulong param_3)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = param_3;
  if (*(ulong *)(this + 0x18) < param_3) {
    pvVar3 = (void *)(**(code **)(*(long *)param_1 + 0x128))(param_1,param_2,&local_40);
    if (local_40 < param_3) {
      uVar1 = *(ulong *)(this + 0x18);
      pvVar3 = *(void **)(this + 0x20);
      if (uVar1 == param_3) {
        *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
        *(ulong *)(this + 0x18) = param_3;
        if (*(long *)(lVar2 + 0x28) == local_38) {
          return;
        }
      }
      else {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined *)((long)pvVar3 + (uVar1 - 1)) = 0;
        }
        UnalignedDeallocate(pvVar3);
        pvVar3 = (void *)UnalignedAllocate(param_3);
        *(void **)(this + 0x20) = pvVar3;
        *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
        *(ulong *)(this + 0x18) = param_3;
        if (*(long *)(lVar2 + 0x28) == local_38) {
          return;
        }
      }
      goto LAB_00cda18c;
    }
  }
  else {
    pvVar3 = *(void **)(this + 0x20);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_00cda18c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar3);
}


