// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AuthenticatedEncryptionFilter
// Entry Point: 00cdadd4
// Size: 188 bytes
// Signature: undefined __thiscall AuthenticatedEncryptionFilter(AuthenticatedEncryptionFilter * this, AuthenticatedSymmetricCipher * param_1, BufferedTransformation * param_2, bool param_3, int param_4, basic_string * param_5, BlockPaddingScheme param_6)


/* CryptoPP::AuthenticatedEncryptionFilter::AuthenticatedEncryptionFilter(CryptoPP::AuthenticatedSymmetricCipher&,
   CryptoPP::BufferedTransformation*, bool, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme) */

void __thiscall
CryptoPP::AuthenticatedEncryptionFilter::AuthenticatedEncryptionFilter
          (AuthenticatedEncryptionFilter *this,AuthenticatedSymmetricCipher *param_1,
          BufferedTransformation *param_2,bool param_3,int param_4,basic_string *param_5,
          BlockPaddingScheme param_6)

{
  undefined8 *this_00;
  
  StreamTransformationFilter::StreamTransformationFilter
            ((StreamTransformationFilter *)this,(StreamTransformation *)(param_1 + 0x10),param_2,
             param_6,true);
  *(undefined ***)this = &PTR__AuthenticatedEncryptionFilter_01006c80;
  *(undefined ***)(this + 8) = &PTR__AuthenticatedEncryptionFilter_01006e90;
  *(undefined ***)(this + 0x90) = &PTR__AuthenticatedEncryptionFilter_01006ec0;
                    /* try { // try from 00cdae28 to 00cdae2f has its CatchHandler @ 00cdaea0 */
  this_00 = (undefined8 *)operator_new(0x28);
                    /* try { // try from 00cdae34 to 00cdae3b has its CatchHandler @ 00cdae90 */
  Algorithm::Algorithm((Algorithm *)this_00,false);
  this_00[3] = this;
  *(undefined *)(this_00 + 4) = 0;
  *this_00 = &PTR__BufferedTransformation_01008a80;
  this_00[1] = &PTR__OutputProxy_01008c10;
                    /* try { // try from 00cdae60 to 00cdae7b has its CatchHandler @ 00cdaea0 */
  HashFilter::HashFilter
            ((HashFilter *)(this + 0xd8),(HashTransformation *)(param_1 + 8),
             (BufferedTransformation *)this_00,param_3,param_4,(basic_string *)&AAD_CHANNEL,param_5)
  ;
  return;
}


