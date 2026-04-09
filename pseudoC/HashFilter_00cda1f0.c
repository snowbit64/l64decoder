// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HashFilter
// Entry Point: 00cda1f0
// Size: 228 bytes
// Signature: undefined __thiscall HashFilter(HashFilter * this, HashTransformation * param_1, BufferedTransformation * param_2, bool param_3, int param_4, basic_string * param_5, basic_string * param_6)


/* CryptoPP::HashFilter::HashFilter(CryptoPP::HashTransformation&,
   CryptoPP::BufferedTransformation*, bool, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
CryptoPP::HashFilter::HashFilter
          (HashFilter *this,HashTransformation *param_1,BufferedTransformation *param_2,bool param_3
          ,int param_4,basic_string *param_5,basic_string *param_6)

{
  Algorithm::Algorithm((Algorithm *)this,false);
  this[0x60] = (HashFilter)param_3;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(HashTransformation **)(this + 0x58) = param_1;
  *(undefined4 *)(this + 100) = 0;
  *(undefined ***)(this + 0x30) = &PTR__HashFilter_01006a08;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined ***)this = &PTR__HashFilter_01006830;
  *(undefined ***)(this + 8) = &PTR__HashFilter_010069d8;
                    /* try { // try from 00cda270 to 00cda27b has its CatchHandler @ 00cda2dc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x70));
                    /* try { // try from 00cda280 to 00cda28b has its CatchHandler @ 00cda2d4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x88));
  if (param_4 < 0) {
                    /* try { // try from 00cda29c to 00cda2bb has its CatchHandler @ 00cda2e4 */
    param_4 = (**(code **)(**(long **)(this + 0x58) + 0x48))();
  }
  *(int *)(this + 100) = param_4;
  (**(code **)(*(long *)this + 0x170))(this,param_2);
  return;
}


