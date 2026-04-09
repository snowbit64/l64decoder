// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlgorithmParametersTemplate
// Entry Point: 00c7ec68
// Size: 80 bytes
// Signature: undefined __thiscall AlgorithmParametersTemplate(AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter> * this, char * param_1, ConstByteArrayParameter * param_2, bool param_3)


/* CryptoPP::AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter>::AlgorithmParametersTemplate(char
   const*, CryptoPP::ConstByteArrayParameter const&, bool) */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter>::
AlgorithmParametersTemplate
          (AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter> *this,char *param_1,
          ConstByteArrayParameter *param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  this[0x10] = (AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter>)param_3;
  this[0x11] = (AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter>)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__AlgorithmParametersTemplate_00ff0f20;
  *(char **)(this + 8) = param_1;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined8 *)(this + 0x20) = uVar1;
                    /* try { // try from 00c7eca8 to 00c7ecab has its CatchHandler @ 00c7ecb8 */
  SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::SecBlock
            ((SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> *)
             (this + 0x38),(SecBlock *)(param_2 + 0x18));
  return;
}


