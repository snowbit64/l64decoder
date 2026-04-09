// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConvertElementToInteger
// Entry Point: 00ca3688
// Size: 148 bytes
// Signature: undefined __cdecl ConvertElementToInteger(EC2NPoint * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::ConvertElementToInteger(CryptoPP::EC2NPoint
   const&) const */

void CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::ConvertElementToInteger(EC2NPoint *param_1)

{
  ulong uVar1;
  uint uVar2;
  uchar *puVar3;
  long in_x1;
  Integer *in_x8;
  ulong uVar4;
  
  uVar2 = PolynomialMod2::ByteCount();
  uVar4 = (ulong)uVar2;
  if (uVar2 == 0) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = (uchar *)UnalignedAllocate(uVar4);
  }
                    /* try { // try from 00ca36c4 to 00ca36eb has its CatchHandler @ 00ca3720 */
  PolynomialMod2::Encode((PolynomialMod2 *)(in_x1 + 8),puVar3,uVar4);
  Integer::Integer(in_x8,puVar3,uVar4,0,1);
  if (uVar2 != 0) {
    do {
      uVar1 = uVar4 - 1;
      puVar3[uVar4 - 1] = '\0';
      uVar4 = uVar1;
    } while (uVar1 != 0);
  }
                    /* try { // try from 00ca3704 to 00ca370b has its CatchHandler @ 00ca371c */
  UnalignedDeallocate(puVar3);
  return;
}


