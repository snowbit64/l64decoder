// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MoveInto
// Entry Point: 00cb90cc
// Size: 132 bytes
// Signature: undefined __thiscall MoveInto(AlgorithmParametersTemplate<int_const*> * this, void * param_1)


/* CryptoPP::AlgorithmParametersTemplate<int const*>::MoveInto(void*) const */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<int_const*>::MoveInto
          (AlgorithmParametersTemplate<int_const*> *this,void *param_1)

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
                    /* try { // try from 00cb911c to 00cb911f has its CatchHandler @ 00cb9150 */
    (**(code **)(**(long **)((long)param_1 + 0x18) + 8))();
  }
  this[0x11] = (AlgorithmParametersTemplate<int_const*>)0x1;
  uVar3 = *(undefined8 *)(this + 0x20);
  *(undefined8 *)((long)param_1 + 0x18) = uVar2;
  *(undefined8 *)((long)param_1 + 0x20) = uVar3;
  *(undefined ***)param_1 = &PTR__AlgorithmParametersBase_01002728;
  return;
}


