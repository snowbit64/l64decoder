// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00c73cdc
// Size: 64 bytes
// Signature: undefined __thiscall operator=(AlgorithmParameters * this, AlgorithmParameters * param_1)


/* CryptoPP::AlgorithmParameters::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::AlgorithmParameters const&) */

AlgorithmParameters * __thiscall
CryptoPP::AlgorithmParameters::operator=(AlgorithmParameters *this,AlgorithmParameters *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  *(undefined8 *)(this + 8) = uVar1;
  return this;
}


