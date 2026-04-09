// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Integer
// Entry Point: 00cf6158
// Size: 328 bytes
// Signature: undefined __thiscall Integer(Integer * this, RandomNumberGenerator * param_1, Integer * param_2, Integer * param_3, RandomNumberType param_4, Integer * param_5, Integer * param_6)


/* CryptoPP::Integer::Integer(CryptoPP::RandomNumberGenerator&, CryptoPP::Integer const&,
   CryptoPP::Integer const&, CryptoPP::Integer::RandomNumberType, CryptoPP::Integer const&,
   CryptoPP::Integer const&) */

void __thiscall
CryptoPP::Integer::Integer
          (Integer *this,RandomNumberGenerator *param_1,Integer *param_2,Integer *param_3,
          RandomNumberType param_4,Integer *param_5,Integer *param_6)

{
  ulong uVar1;
  RandomNumberNotFound *this_00;
  
  DataMemoryBarrier(2,3);
  if ((DAT_02120808 & 1) == 0) {
    DAT_02120978 = Baseline_MultiplyTop2;
    DAT_02120980 = Baseline_MultiplyTop4;
    DAT_021208a0 = Baseline_Multiply2;
    DAT_021208a8 = Baseline_Multiply4;
    DAT_021208b0 = Baseline_Multiply8;
    DAT_02120930 = Baseline_MultiplyBottom2;
    DAT_02120938 = Baseline_MultiplyBottom4;
    DAT_02120940 = Baseline_MultiplyBottom8;
    DAT_021208e8 = Baseline_Square2;
    DAT_021208f0 = Baseline_Square4;
    DAT_021208f8 = Baseline_Square8;
    DAT_02120988 = Baseline_MultiplyTop8;
    DAT_021208c0 = Baseline_Multiply16;
    DAT_02120950 = Baseline_MultiplyBottom16;
    DAT_02120908 = Baseline_Square16;
    DAT_02120998 = Baseline_MultiplyTop16;
    DAT_02120808 = 1;
    DataMemoryBarrier(2,3);
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0x3fffffffffffffff;
  *(undefined ***)this = &PTR__Integer_0100c890;
                    /* try { // try from 00cf625c to 00cf6263 has its CatchHandler @ 00cf62b0 */
  uVar1 = Randomize(this,param_1,param_2,param_3,param_4,param_5,param_6);
  if ((uVar1 & 1) != 0) {
    return;
  }
  this_00 = (RandomNumberNotFound *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cf6284 to 00cf6287 has its CatchHandler @ 00cf62a0 */
  RandomNumberNotFound::RandomNumberNotFound(this_00);
                    /* try { // try from 00cf6288 to 00cf629f has its CatchHandler @ 00cf62b0 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&RandomNumberNotFound::typeinfo,Exception::~Exception);
}


