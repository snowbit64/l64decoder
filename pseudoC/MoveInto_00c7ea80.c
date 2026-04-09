// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MoveInto
// Entry Point: 00c7ea80
// Size: 136 bytes
// Signature: undefined __thiscall MoveInto(AlgorithmParametersTemplate<bool> * this, void * param_1)


/* CryptoPP::AlgorithmParametersTemplate<bool>::MoveInto(void*) const */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<bool>::MoveInto
          (AlgorithmParametersTemplate<bool> *this,void *param_1)

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
                    /* try { // try from 00c7ead0 to 00c7ead3 has its CatchHandler @ 00c7eb08 */
    (**(code **)(**(long **)((long)param_1 + 0x18) + 8))();
  }
  *(undefined8 *)((long)param_1 + 0x18) = uVar2;
  this[0x11] = (AlgorithmParametersTemplate<bool>)0x1;
  *(AlgorithmParametersTemplate<bool> *)((long)param_1 + 0x20) = this[0x20];
  *(undefined ***)param_1 = &PTR__AlgorithmParametersBase_00ff0ec0;
  return;
}


