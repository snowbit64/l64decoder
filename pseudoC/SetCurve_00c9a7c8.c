// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetCurve
// Entry Point: 00c9a7c8
// Size: 176 bytes
// Signature: undefined __thiscall SetCurve(EcPrecomputation<CryptoPP::ECP> * this, ECP * param_1)


/* CryptoPP::EcPrecomputation<CryptoPP::ECP>::SetCurve(CryptoPP::ECP const&) */

void __thiscall
CryptoPP::EcPrecomputation<CryptoPP::ECP>::SetCurve
          (EcPrecomputation<CryptoPP::ECP> *this,ECP *param_1)

{
  ECP *pEVar1;
  long *this_00;
  long *plVar2;
  
  pEVar1 = (ECP *)operator_new(0xe8);
                    /* try { // try from 00c9a7ec to 00c9a7f7 has its CatchHandler @ 00c9a8a8 */
  ECP::ECP(pEVar1,param_1,true);
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  *(ECP **)(this + 8) = pEVar1;
  this_00 = (long *)operator_new(0xe8);
                    /* try { // try from 00c9a81c to 00c9a827 has its CatchHandler @ 00c9a8a4 */
  ECP::ECP((ECP *)this_00,param_1,false);
  plVar2 = *(long **)(this + 0x10);
                    /* try { // try from 00c9a82c to 00c9a833 has its CatchHandler @ 00c9a888 */
  pEVar1 = (ECP *)operator_new(0xe8);
                    /* try { // try from 00c9a838 to 00c9a843 has its CatchHandler @ 00c9a878 */
  ECP::ECP(pEVar1,(ECP *)this_00,false);
  *(ECP **)(this + 0x10) = pEVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00c9a874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*this_00 + 8))(this_00);
  return;
}


