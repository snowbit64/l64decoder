// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MoveInto
// Entry Point: 00ce10f4
// Size: 136 bytes
// Signature: undefined __thiscall MoveInto(AlgorithmParametersTemplate<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme> * this, void * param_1)


/* CryptoPP::AlgorithmParametersTemplate<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme>::MoveInto(void*)
   const */

void __thiscall
CryptoPP::AlgorithmParametersTemplate<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme>::MoveInto
          (AlgorithmParametersTemplate<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme> *this,
          void *param_1)

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
                    /* try { // try from 00ce1144 to 00ce1147 has its CatchHandler @ 00ce117c */
    (**(code **)(**(long **)((long)param_1 + 0x18) + 8))();
  }
  *(undefined8 *)((long)param_1 + 0x18) = uVar2;
  this[0x11] = (AlgorithmParametersTemplate<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme>)0x1
  ;
  *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)(this + 0x20);
  *(undefined ***)param_1 = &PTR__AlgorithmParametersBase_01008d20;
  return;
}


