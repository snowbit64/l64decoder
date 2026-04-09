// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateEncryptionFilter
// Entry Point: 00c7b4bc
// Size: 156 bytes
// Signature: undefined __thiscall CreateEncryptionFilter(PK_Encryptor * this, RandomNumberGenerator * param_1, BufferedTransformation * param_2, NameValuePairs * param_3)


/* CryptoPP::PK_Encryptor::CreateEncryptionFilter(CryptoPP::RandomNumberGenerator&,
   CryptoPP::BufferedTransformation*, CryptoPP::NameValuePairs const&) const */

long * __thiscall
CryptoPP::PK_Encryptor::CreateEncryptionFilter
          (PK_Encryptor *this,RandomNumberGenerator *param_1,BufferedTransformation *param_2,
          NameValuePairs *param_3)

{
  long *this_00;
  
  this_00 = (long *)operator_new(0xb0);
                    /* try { // try from 00c7b4ec to 00c7b4f3 has its CatchHandler @ 00c7b5a0 */
  Filter::Filter((Filter *)this_00,(BufferedTransformation *)0x0);
  this_00[6] = (long)param_1;
  this_00[7] = (long)this;
  this_00[8] = (long)param_3;
  *this_00 = (long)&PTR__PK_DefaultEncryptionFilter_00ff06e8;
  this_00[1] = (long)&PTR__PK_DefaultEncryptionFilter_00ff0898;
                    /* try { // try from 00c7b514 to 00c7b51f has its CatchHandler @ 00c7b570 */
  ByteQueue::ByteQueue((ByteQueue *)(this_00 + 9),0);
  this_00[0x14] = 0;
  this_00[0x15] = 0;
  this_00[0x13] = -1;
                    /* try { // try from 00c7b534 to 00c7b53f has its CatchHandler @ 00c7b558 */
  (**(code **)(*this_00 + 0x170))(this_00,param_2);
  return this_00;
}


