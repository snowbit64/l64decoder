// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MoveInto
// Entry Point: 00cc0e78
// Size: 140 bytes
// Signature: undefined __thiscall MoveInto(AlgorithmParametersTemplate<CryptoPP::Integer> * this, void * param_1)


/* CryptoPP::AlgorithmParametersTemplate<CryptoPP::Integer>::MoveInto(void*) const */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<CryptoPP::Integer>::MoveInto
          (AlgorithmParametersTemplate<CryptoPP::Integer> *this,void *param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 8);
  *(undefined ***)param_1 = &PTR__AlgorithmParametersBase_00feb990;
  *(undefined8 *)((long)param_1 + 8) = uVar2;
  uVar1 = *(undefined2 *)(this + 0x10);
  *(undefined8 *)((long)param_1 + 0x18) = 0;
  *(undefined2 *)((long)param_1 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x18) = 0;
  if (*(long **)((long)param_1 + 0x18) != (long *)0x0) {
                    /* try { // try from 00cc0ec8 to 00cc0ecb has its CatchHandler @ 00cc0f04 */
    (**(code **)(**(long **)((long)param_1 + 0x18) + 8))();
  }
  *(undefined8 *)((long)param_1 + 0x18) = uVar2;
  this[0x11] = (AlgorithmParametersTemplate<CryptoPP::Integer>)0x1;
  *(undefined ***)param_1 = &PTR__AlgorithmParametersTemplate_01003db0;
                    /* try { // try from 00cc0ef0 to 00cc0ef3 has its CatchHandler @ 00cc0f28 */
  Integer::Integer((Integer *)((long)param_1 + 0x20),(Integer *)(this + 0x20));
  return;
}


