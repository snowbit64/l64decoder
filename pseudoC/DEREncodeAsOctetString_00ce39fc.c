// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodeAsOctetString
// Entry Point: 00ce39fc
// Size: 216 bytes
// Signature: undefined __thiscall DEREncodeAsOctetString(PolynomialMod2 * this, BufferedTransformation * param_1, ulong param_2)


/* CryptoPP::PolynomialMod2::DEREncodeAsOctetString(CryptoPP::BufferedTransformation&, unsigned
   long) const */

void __thiscall
CryptoPP::PolynomialMod2::DEREncodeAsOctetString
          (PolynomialMod2 *this,BufferedTransformation *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined local_94 [4];
  long local_90 [11];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  DERGeneralEncoder::DERGeneralEncoder((DERGeneralEncoder *)local_90,param_1,'\x04');
  if (param_2 != 0) {
    uVar3 = (int)param_2 * 8;
    uVar2 = param_2 - 1;
    do {
      uVar3 = uVar3 - 8;
      if (uVar2 >> 2 < *(ulong *)(this + 0x10)) {
        local_94[0] = (undefined)
                      (*(uint *)(*(long *)(this + 0x18) + (uVar2 & 0xfffffffffffffffc)) >>
                      (ulong)(uVar3 & 0x18));
      }
      else {
        local_94[0] = 0;
      }
                    /* try { // try from 00ce3a74 to 00ce3a8b has its CatchHandler @ 00ce3ad8 */
      (**(code **)(local_90[0] + 0x38))(local_90,local_94,1,0,1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0xffffffffffffffff);
  }
                    /* try { // try from 00ce3a9c to 00ce3aa3 has its CatchHandler @ 00ce3ad4 */
  DERGeneralEncoder::MessageEnd();
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)local_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


