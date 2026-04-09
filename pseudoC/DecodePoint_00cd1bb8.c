// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DecodePoint
// Entry Point: 00cd1bb8
// Size: 132 bytes
// Signature: undefined __thiscall DecodePoint(ECP * this, ECPPoint * param_1, uchar * param_2, ulong param_3)


/* non-virtual thunk to CryptoPP::ECP::DecodePoint(CryptoPP::ECPPoint&, unsigned char const*,
   unsigned long) const */

uint __thiscall CryptoPP::ECP::DecodePoint(ECP *this,ECPPoint *param_1,uchar *param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  StringStore aSStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  StringStore::StringStore(aSStack_70,param_2,param_3);
  uVar2 = (**(code **)(*(long *)(this + -8) + 0x80))(this + -8,param_1,aSStack_70,param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


