// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c9a008
// Entry Point: 00c9a008
// Size: 144 bytes
// Signature: undefined FUN_00c9a008(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined param_9, undefined param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined8 param_15)


void FUN_00c9a008(long param_1)

{
  long *unaff_x19;
  Integer *unaff_x21;
  long unaff_x22;
  Integer *unaff_x23;
  ECP *unaff_x26;
  long unaff_x27;
  
  *unaff_x19 = param_1;
  *(undefined8 *)((long)unaff_x19 + *(long *)(param_1 + -0x70)) = *(undefined8 *)(unaff_x22 + 0x48);
  unaff_x19[0x20] = 0;
  unaff_x19[0x21] = 0;
  unaff_x19[0x1e] = unaff_x27 + 0x10;
  unaff_x19[0x1f] = 0;
                    /* try { // try from 00c9a028 to 00c9a02f has its CatchHandler @ 00c9a0a0 */
  CryptoPP::Integer::Integer((Integer *)(unaff_x19 + 0x22));
                    /* try { // try from 00c9a034 to 00c9a03b has its CatchHandler @ 00c9a098 */
  CryptoPP::Integer::Integer((Integer *)(unaff_x19 + 0x28));
  *(undefined2 *)(unaff_x19 + 0x2e) = 0x100;
                    /* try { // try from 00c9a048 to 00c9a07b has its CatchHandler @ 00c9a0a8 */
  CryptoPP::EcPrecomputation<CryptoPP::ECP>::SetCurve
            ((EcPrecomputation<CryptoPP::ECP> *)(unaff_x19 + 2),unaff_x26);
  (**(code **)(*unaff_x19 + 0x70))();
  CryptoPP::Integer::operator=((Integer *)(unaff_x19 + 0x22),unaff_x23);
  CryptoPP::Integer::operator=((Integer *)(unaff_x19 + 0x28),unaff_x21);
  return;
}


