// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Encode
// Entry Point: 00ce3848
// Size: 236 bytes
// Signature: undefined __thiscall Encode(PolynomialMod2 * this, uchar * param_1, ulong param_2)


/* CryptoPP::PolynomialMod2::Encode(unsigned char*, unsigned long) const */

void __thiscall CryptoPP::PolynomialMod2::Encode(PolynomialMod2 *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined local_6c [4];
  undefined **local_68;
  undefined **ppuStack_60;
  uchar *local_50;
  ulong uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Algorithm::Algorithm((Algorithm *)&local_68,false);
  local_40 = 0;
  local_68 = &PTR__BufferedTransformation_01007ee0;
  ppuStack_60 = &PTR__ArraySink_01008070;
  local_50 = param_1;
  uStack_48 = param_2;
  if (param_2 != 0) {
    uVar3 = (int)param_2 * 8;
    uVar2 = param_2 - 1;
    do {
      uVar3 = uVar3 - 8;
      if (uVar2 >> 2 < *(ulong *)(this + 0x10)) {
        local_6c[0] = (undefined)
                      (*(uint *)(*(long *)(this + 0x18) + (uVar2 & 0xfffffffffffffffc)) >>
                      (ulong)(uVar3 & 0x18));
      }
      else {
        local_6c[0] = 0;
      }
      (*(code *)local_68[7])(&local_68,local_6c,1,0,1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0xffffffffffffffff);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


