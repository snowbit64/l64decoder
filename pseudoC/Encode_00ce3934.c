// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Encode
// Entry Point: 00ce3934
// Size: 200 bytes
// Signature: undefined __thiscall Encode(PolynomialMod2 * this, BufferedTransformation * param_1, ulong param_2)


/* CryptoPP::PolynomialMod2::Encode(CryptoPP::BufferedTransformation&, unsigned long) const */

void __thiscall
CryptoPP::PolynomialMod2::Encode(PolynomialMod2 *this,BufferedTransformation *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 != 0) {
    uVar3 = (int)param_2 * 8;
    uVar2 = param_2 - 1;
    do {
      uVar3 = uVar3 - 8;
      if (uVar2 >> 2 < *(ulong *)(this + 0x10)) {
        local_4c[0] = (undefined)
                      (*(uint *)(*(long *)(this + 0x18) + (uVar2 & 0xfffffffffffffffc)) >>
                      (ulong)(uVar3 & 0x18));
      }
      else {
        local_4c[0] = 0;
      }
      (**(code **)(*(long *)param_1 + 0x38))(param_1,local_4c,1,0,1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0xffffffffffffffff);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


