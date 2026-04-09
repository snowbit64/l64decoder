// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DecodeElement
// Entry Point: 00ceb464
// Size: 156 bytes
// Signature: undefined __thiscall DecodeElement(DL_GroupParameters_IntegerBased * this, uchar * param_1, bool param_2)


/* CryptoPP::DL_GroupParameters_IntegerBased::DecodeElement(unsigned char const*, bool) const */

void __thiscall
CryptoPP::DL_GroupParameters_IntegerBased::DecodeElement
          (DL_GroupParameters_IntegerBased *this,uchar *param_1,bool param_2)

{
  ulong uVar1;
  DL_BadElement *this_00;
  Integer *in_x8;
  
  (**(code **)(*(long *)this + 0xa0))(this,param_1,param_2);
  uVar1 = Integer::ByteCount();
  Integer::Integer(in_x8,param_1,uVar1 & 0xffffffff,0,1);
                    /* try { // try from 00ceb4b0 to 00ceb4c3 has its CatchHandler @ 00ceb510 */
  uVar1 = (**(code **)(*(long *)this + 0x68))(this,1);
  if ((uVar1 & 1) != 0) {
    return;
  }
  this_00 = (DL_BadElement *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ceb4e4 to 00ceb4e7 has its CatchHandler @ 00ceb500 */
  DL_BadElement::DL_BadElement(this_00);
                    /* try { // try from 00ceb4e8 to 00ceb4ff has its CatchHandler @ 00ceb510 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&DL_BadElement::typeinfo,Exception::~Exception);
}


