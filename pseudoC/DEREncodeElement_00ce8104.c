// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodeElement
// Entry Point: 00ce8104
// Size: 224 bytes
// Signature: undefined __thiscall DEREncodeElement(GF2NP * this, BufferedTransformation * param_1, PolynomialMod2 * param_2)


/* CryptoPP::GF2NP::DEREncodeElement(CryptoPP::BufferedTransformation&, CryptoPP::PolynomialMod2
   const&) const */

void __thiscall
CryptoPP::GF2NP::DEREncodeElement
          (GF2NP *this,BufferedTransformation *param_1,PolynomialMod2 *param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined local_94 [4];
  long local_90 [11];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = *(uint *)(this + 0x90);
  DERGeneralEncoder::DERGeneralEncoder((DERGeneralEncoder *)local_90,param_1,'\x04');
  if (uVar3 != 0) {
    uVar2 = (ulong)uVar3 + 7 >> 3;
    uVar3 = (int)uVar2 * 8;
    uVar2 = uVar2 - 1;
    do {
      uVar3 = uVar3 - 8;
      if (uVar2 >> 2 < *(ulong *)(param_2 + 0x10)) {
        local_94[0] = (undefined)
                      (*(uint *)(*(long *)(param_2 + 0x18) + (uVar2 & 0xfffffffffffffffc)) >>
                      (ulong)(uVar3 & 0x18));
      }
      else {
        local_94[0] = 0;
      }
                    /* try { // try from 00ce8184 to 00ce819b has its CatchHandler @ 00ce81e8 */
      (**(code **)(local_90[0] + 0x38))(local_90,local_94,1,0,1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0xffffffffffffffff);
  }
                    /* try { // try from 00ce81ac to 00ce81b3 has its CatchHandler @ 00ce81e4 */
  DERGeneralEncoder::MessageEnd();
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)local_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


