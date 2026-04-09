// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: UGCProtection
// Entry Point: 00b06f58
// Size: 116 bytes
// Signature: undefined __thiscall UGCProtection(UGCProtection * this, uint param_1, File * param_2, bool param_3)


/* UGCProtection::UGCProtection(unsigned int, File*, bool) */

void __thiscall
UGCProtection::UGCProtection(UGCProtection *this,uint param_1,File *param_2,bool param_3)

{
  int iVar1;
  CustomStreamCipher *this_00;
  
  File::File((File *)this);
  this[0x10] = (UGCProtection)param_3;
  *(undefined ***)this = &PTR__UGCProtection_00fe71d0;
  *(File **)(this + 8) = param_2;
                    /* try { // try from 00b06f90 to 00b06f97 has its CatchHandler @ 00b06fcc */
  this_00 = (CustomStreamCipher *)operator_new(0x40);
                    /* try { // try from 00b06f9c to 00b06fb7 has its CatchHandler @ 00b06fd4 */
  iVar1 = CustomStreamCipher::getKeyLength();
  CustomStreamCipher::CustomStreamCipher(this_00,s_copyrightKeyData + iVar1 * param_1);
  *(CustomStreamCipher **)(this + 0x18) = this_00;
  return;
}


