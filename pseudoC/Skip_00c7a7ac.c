// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Skip
// Entry Point: 00c7a7ac
// Size: 260 bytes
// Signature: undefined __thiscall Skip(BufferedTransformation * this, ulong param_1)


/* CryptoPP::BufferedTransformation::Skip(unsigned long) */

void __thiscall CryptoPP::BufferedTransformation::Skip(BufferedTransformation *this,ulong param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = (**(code **)(*(long *)this + 0x160))();
  if (lVar3 == 0) {
    if (((DAT_0211f5e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0211f5e8), iVar2 != 0)) {
      DAT_0211f600 = &PTR__BufferedTransformation_00ff03d8;
      DAT_0211f608 = &PTR__BitBucket_00ff0568;
      __cxa_guard_release(&DAT_0211f5e8);
    }
    local_40 = param_1;
    (**(code **)(*(long *)this + 0x118))(this,&DAT_0211f600,&local_40,&DEFAULT_CHANNEL,1);
    uVar5 = local_40;
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_00c7a878;
  }
  else {
    plVar4 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    uVar5 = (**(code **)(*plVar4 + 200))(plVar4,param_1);
    if (*(long *)(lVar1 + 0x28) != local_38) {
LAB_00c7a878:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
  }
  return;
}


