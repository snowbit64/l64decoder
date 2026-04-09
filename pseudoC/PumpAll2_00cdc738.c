// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PumpAll2
// Entry Point: 00cdc738
// Size: 128 bytes
// Signature: undefined __thiscall PumpAll2(Source * this, bool param_1)


/* CryptoPP::Source::PumpAll2(bool) */

void __thiscall CryptoPP::Source::PumpAll2(Source *this,bool param_1)

{
  long lVar1;
  long lVar2;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = -1;
  do {
    lVar2 = (**(code **)(*(long *)this + 0x1a0))(this,&local_3c,param_1);
  } while (lVar2 == 0 && local_3c == -1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


