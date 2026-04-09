// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MoveInto
// Entry Point: 00ce125c
// Size: 136 bytes
// Signature: undefined __thiscall MoveInto(AlgorithmParametersTemplate<unsigned_int> * this, void * param_1)


/* CryptoPP::AlgorithmParametersTemplate<unsigned int>::MoveInto(void*) const */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<unsigned_int>::MoveInto
          (AlgorithmParametersTemplate<unsigned_int> *this,void *param_1)

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
                    /* try { // try from 00ce12ac to 00ce12af has its CatchHandler @ 00ce12e4 */
    (**(code **)(**(long **)((long)param_1 + 0x18) + 8))();
  }
  *(undefined8 *)((long)param_1 + 0x18) = uVar2;
  this[0x11] = (AlgorithmParametersTemplate<unsigned_int>)0x1;
  *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)(this + 0x20);
  *(undefined ***)param_1 = &PTR__AlgorithmParametersBase_01008d78;
  return;
}


