// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MoveInto
// Entry Point: 00c7ed6c
// Size: 156 bytes
// Signature: undefined __thiscall MoveInto(AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter> * this, void * param_1)


/* CryptoPP::AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter>::MoveInto(void*) const
    */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter>::MoveInto
          (AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter> *this,void *param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(this + 8);
  *(undefined ***)param_1 = &PTR__AlgorithmParametersBase_00feb990;
  *(undefined8 *)((long)param_1 + 8) = uVar2;
  uVar1 = *(undefined2 *)(this + 0x10);
  *(undefined8 *)((long)param_1 + 0x18) = 0;
  *(undefined2 *)((long)param_1 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x18) = 0;
  if (*(long **)((long)param_1 + 0x18) != (long *)0x0) {
                    /* try { // try from 00c7edbc to 00c7edbf has its CatchHandler @ 00c7ee08 */
    (**(code **)(**(long **)((long)param_1 + 0x18) + 8))();
  }
  *(undefined8 *)((long)param_1 + 0x18) = uVar2;
  this[0x11] = (AlgorithmParametersTemplate<CryptoPP::ConstByteArrayParameter>)0x1;
  *(undefined ***)param_1 = &PTR__AlgorithmParametersTemplate_00ff0f20;
  uVar3 = *(undefined8 *)(this + 0x28);
  uVar2 = *(undefined8 *)(this + 0x20);
  *(undefined8 *)((long)param_1 + 0x30) = *(undefined8 *)(this + 0x30);
  *(undefined8 *)((long)param_1 + 0x28) = uVar3;
  *(undefined8 *)((long)param_1 + 0x20) = uVar2;
                    /* try { // try from 00c7edf4 to 00c7edf7 has its CatchHandler @ 00c7ee2c */
  SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::SecBlock
            ((SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> *)
             ((long)param_1 + 0x38),(SecBlock *)(this + 0x38));
  return;
}


