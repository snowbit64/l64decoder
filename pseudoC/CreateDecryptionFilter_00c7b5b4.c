// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateDecryptionFilter
// Entry Point: 00c7b5b4
// Size: 164 bytes
// Signature: undefined __thiscall CreateDecryptionFilter(PK_Decryptor * this, RandomNumberGenerator * param_1, BufferedTransformation * param_2, NameValuePairs * param_3)


/* CryptoPP::PK_Decryptor::CreateDecryptionFilter(CryptoPP::RandomNumberGenerator&,
   CryptoPP::BufferedTransformation*, CryptoPP::NameValuePairs const&) const */

long * __thiscall
CryptoPP::PK_Decryptor::CreateDecryptionFilter
          (PK_Decryptor *this,RandomNumberGenerator *param_1,BufferedTransformation *param_2,
          NameValuePairs *param_3)

{
  long *this_00;
  
  this_00 = (long *)operator_new(0xc0);
                    /* try { // try from 00c7b5e4 to 00c7b5eb has its CatchHandler @ 00c7b6a0 */
  Filter::Filter((Filter *)this_00,(BufferedTransformation *)0x0);
  this_00[6] = (long)param_1;
  this_00[7] = (long)this;
  this_00[8] = (long)param_3;
  *this_00 = (long)&PTR__PK_DefaultDecryptionFilter_00ff08e0;
  this_00[1] = (long)&PTR__PK_DefaultDecryptionFilter_00ff0a90;
                    /* try { // try from 00c7b60c to 00c7b617 has its CatchHandler @ 00c7b670 */
  ByteQueue::ByteQueue((ByteQueue *)(this_00 + 9),0);
  this_00[0x17] = 0;
  this_00[0x14] = 0;
  this_00[0x15] = 0;
  this_00[0x13] = -1;
  *(undefined *)(this_00 + 0x16) = 0;
                    /* try { // try from 00c7b634 to 00c7b63f has its CatchHandler @ 00c7b658 */
  (**(code **)(*this_00 + 0x170))(this_00,param_2);
  return this_00;
}


