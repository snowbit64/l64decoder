// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00bbf5a0
// Size: 200 bytes
// Signature: AlgorithmParameters * __thiscall operator()(AlgorithmParameters * this, char * param_1, ConstByteArrayParameter * param_2, bool param_3)


/* CryptoPP::AlgorithmParameters& CryptoPP::AlgorithmParameters::TEMPNAMEPLACEHOLDERVALUE(char
   const*, CryptoPP::ConstByteArrayParameter const&, bool) */

AlgorithmParameters * __thiscall
CryptoPP::AlgorithmParameters::operator()
          (AlgorithmParameters *this,char *param_1,ConstByteArrayParameter *param_2,bool param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)operator_new(0x58);
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)param_2;
  *(bool *)(puVar1 + 2) = param_3;
  *(undefined *)((long)puVar1 + 0x11) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar1[3] = 0;
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  puVar1[6] = uVar3;
  *puVar1 = &PTR__AlgorithmParametersTemplate_00ff0f20;
  puVar1[1] = param_1;
                    /* try { // try from 00bbf604 to 00bbf607 has its CatchHandler @ 00bbf688 */
  SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::SecBlock
            ((SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> *)
             (puVar1 + 7),(SecBlock *)(param_2 + 0x18));
  plVar2 = (long *)puVar1[3];
  uVar3 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (plVar2 == (long *)0x0) {
    puVar1[3] = uVar3;
  }
  else {
                    /* try { // try from 00bbf620 to 00bbf623 has its CatchHandler @ 00bbf668 */
    (**(code **)(*plVar2 + 8))();
    plVar2 = *(long **)(this + 8);
    puVar1[3] = uVar3;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined8 **)(this + 8) = puVar1;
  this[0x10] = (AlgorithmParameters)param_3;
  return (AlgorithmParameters *)this;
}


