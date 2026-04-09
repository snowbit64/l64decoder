// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StreamTransformationFilter
// Entry Point: 00cd8eb4
// Size: 484 bytes
// Signature: undefined __thiscall StreamTransformationFilter(StreamTransformationFilter * this, StreamTransformation * param_1, BufferedTransformation * param_2, BlockPaddingScheme param_3, bool param_4)


/* CryptoPP::StreamTransformationFilter::StreamTransformationFilter(CryptoPP::StreamTransformation&,
   CryptoPP::BufferedTransformation*, CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme, bool) */

void __thiscall
CryptoPP::StreamTransformationFilter::StreamTransformationFilter
          (StreamTransformationFilter *this,StreamTransformation *param_1,
          BufferedTransformation *param_2,BlockPaddingScheme param_3,bool param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  undefined4 uVar5;
  long lVar6;
  InvalidArgument *this_00;
  undefined uVar7;
  BlockPaddingScheme local_64;
  undefined **local_60;
  long *local_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_64 = param_3;
  Algorithm::Algorithm((Algorithm *)this,false);
  *(BufferedTransformation **)(this + 0x18) = param_2;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa0) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa8) = 0;
  this[0x48] = (StreamTransformationFilter)0x0;
  uVar7 = 0x10;
  *(undefined ***)(this + 0x90) = &PTR__StreamTransformationFilter_01006810;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0xffffffffffffffff;
  *(undefined ***)this = &PTR__StreamTransformationFilter_010065d0;
  *(undefined ***)(this + 8) = &PTR__StreamTransformationFilter_010067e0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(StreamTransformation **)(this + 0xb8) = param_1;
  *(undefined4 *)(this + 0xc0) = 5;
  lVar6 = __dynamic_cast(param_1,&StreamTransformation::typeinfo,
                         &AuthenticatedSymmetricCipher::typeinfo);
  if ((lVar6 != 0) && (!param_4)) {
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cd9058 to 00cd9067 has its CatchHandler @ 00cd90bc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_60,
               "StreamTransformationFilter: please use AuthenticatedEncryptionFilter and AuthenticatedDecryptionFilter for AuthenticatedSymmetricCipher"
              );
                    /* try { // try from 00cd906c to 00cd9093 has its CatchHandler @ 00cd9098 */
    InvalidArgument::InvalidArgument(this_00,(basic_string *)&local_60);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
  }
                    /* try { // try from 00cd8f78 to 00cd8faf has its CatchHandler @ 00cd9108 */
  uVar5 = (**(code **)(*(long *)param_1 + 0x28))(param_1);
  *(undefined4 *)(this + 0xc4) = uVar5;
  uVar5 = (**(code **)(**(long **)(this + 0xb8) + 0x30))(*(long **)(this + 0xb8));
  *(undefined4 *)(this + 200) = uVar5;
  bVar4 = (**(code **)(**(long **)(this + 0xb8) + 0x60))(*(long **)(this + 0xb8));
  uVar2 = *(uint *)(this + 0xc4) << 1;
  uVar1 = *(uint *)(this + 200);
  if (*(uint *)(this + 200) <= uVar2) {
    uVar1 = uVar2;
  }
  this[0xd0] = (StreamTransformationFilter)(bVar4 & 1 < *(uint *)(this + 0xc4));
  *(uint *)(this + 0xcc) = uVar1;
                    /* try { // try from 00cd8fd4 to 00cd8feb has its CatchHandler @ 00cd9104 */
  MakeParameters<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme>
            ((CryptoPP *)"BlockPaddingScheme",(char *)&local_64,(BlockPaddingScheme *)0x1,
             (bool)uVar7);
                    /* try { // try from 00cd8ff4 to 00cd8fff has its CatchHandler @ 00cd90d0 */
  (**(code **)(*(long *)this + 0x58))(this,&local_60);
  local_60 = &PTR__AlgorithmParameters_00feeb08;
  if (local_58 != (long *)0x0) {
                    /* try { // try from 00cd9020 to 00cd9023 has its CatchHandler @ 00cd90cc */
    (**(code **)(*local_58 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


