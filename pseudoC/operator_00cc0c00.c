// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00cc0c00
// Size: 184 bytes
// Signature: AlgorithmParameters * __thiscall operator()(AlgorithmParameters * this, char * param_1, Integer * param_2, bool param_3)


/* CryptoPP::AlgorithmParameters& CryptoPP::AlgorithmParameters::TEMPNAMEPLACEHOLDERVALUE(char
   const*, CryptoPP::Integer const&, bool) */

AlgorithmParameters * __thiscall
CryptoPP::AlgorithmParameters::operator()
          (AlgorithmParameters *this,char *param_1,Integer *param_2,bool param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *(bool *)(puVar1 + 2) = param_3;
  *(undefined *)((long)puVar1 + 0x11) = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR__AlgorithmParametersTemplate_01003db0;
  puVar1[1] = param_1;
                    /* try { // try from 00cc0c50 to 00cc0c57 has its CatchHandler @ 00cc0cd8 */
  Integer::Integer((Integer *)(puVar1 + 4),param_2);
  plVar2 = (long *)puVar1[3];
  uVar3 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (plVar2 == (long *)0x0) {
    puVar1[3] = uVar3;
  }
  else {
                    /* try { // try from 00cc0c70 to 00cc0c73 has its CatchHandler @ 00cc0cb8 */
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


