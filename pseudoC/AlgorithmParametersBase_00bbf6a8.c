// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AlgorithmParametersBase
// Entry Point: 00bbf6a8
// Size: 140 bytes
// Signature: undefined __thiscall ~AlgorithmParametersBase(AlgorithmParametersBase * this)


/* CryptoPP::AlgorithmParametersBase::~AlgorithmParametersBase() */

void __thiscall
CryptoPP::AlgorithmParametersBase::~AlgorithmParametersBase(AlgorithmParametersBase *this)

{
  ulong uVar1;
  ParameterNotUsed *this_00;
  
  *(undefined ***)this = &PTR__AlgorithmParametersBase_00feb990;
  uVar1 = std::uncaught_exception();
  if ((((uVar1 & 1) == 0) && (this[0x10] != (AlgorithmParametersBase)0x0)) &&
     (this[0x11] == (AlgorithmParametersBase)0x0)) {
    this_00 = (ParameterNotUsed *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00bbf718 to 00bbf71b has its CatchHandler @ 00bbf73c */
    ParameterNotUsed::ParameterNotUsed(this_00,*(char **)(this + 8));
                    /* try { // try from 00bbf71c to 00bbf733 has its CatchHandler @ 00bbf734 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&ParameterNotUsed::typeinfo,Exception::~Exception);
  }
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* try { // try from 00bbf6f4 to 00bbf6f7 has its CatchHandler @ 00bbf768 */
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  return;
}


