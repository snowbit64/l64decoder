// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlgorithmParameters
// Entry Point: 00c73c5c
// Size: 88 bytes
// Signature: undefined __thiscall AlgorithmParameters(AlgorithmParameters * this, AlgorithmParameters * param_1)


/* CryptoPP::AlgorithmParameters::AlgorithmParameters(CryptoPP::AlgorithmParameters const&) */

void __thiscall
CryptoPP::AlgorithmParameters::AlgorithmParameters
          (AlgorithmParameters *this,AlgorithmParameters *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 8) = 0;
  uVar1 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  this[0x10] = *(AlgorithmParameters *)(param_1 + 4);
  *(undefined ***)this = &PTR__AlgorithmParameters_00feeb08;
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* try { // try from 00c73ca0 to 00c73ca3 has its CatchHandler @ 00c73cb4 */
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  *(undefined8 *)(this + 8) = uVar1;
  return;
}


