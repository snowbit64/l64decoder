// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DecodeElement
// Entry Point: 00ca3534
// Size: 276 bytes
// Signature: undefined __cdecl DecodeElement(uchar * param_1, bool param_2)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DecodeElement(unsigned char const*, bool) const
    */

void CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DecodeElement(uchar *param_1,bool param_2)

{
  ulong uVar1;
  DL_BadElement *pDVar2;
  ulong in_x2;
  undefined8 *in_x8;
  long lVar3;
  
  *in_x8 = &PTR__EC2NPoint_010026a8;
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x8 + 1));
                    /* try { // try from 00ca3578 to 00ca357f has its CatchHandler @ 00ca3660 */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x8 + 5));
  lVar3 = *(long *)param_1;
  *(undefined *)(in_x8 + 9) = 1;
                    /* try { // try from 00ca3594 to 00ca35df has its CatchHandler @ 00ca3674 */
  (**(code **)(lVar3 + 0xc0))(param_1,1);
  uVar1 = (**(code **)(*(long *)(param_1 + 0x18) + 0x88))(param_1 + 0x18);
  if ((uVar1 & 1) == 0) {
    pDVar2 = (DL_BadElement *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ca3604 to 00ca3607 has its CatchHandler @ 00ca3650 */
    DL_BadElement::DL_BadElement(pDVar2);
                    /* try { // try from 00ca3608 to 00ca361f has its CatchHandler @ 00ca3674 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pDVar2,&DL_BadElement::typeinfo,Exception::~Exception);
  }
  if (((in_x2 & 1) != 0) &&
     (uVar1 = (**(code **)(*(long *)param_1 + 0xe8))(param_1,1), (uVar1 & 1) == 0)) {
    pDVar2 = (DL_BadElement *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ca3630 to 00ca3633 has its CatchHandler @ 00ca364c */
    DL_BadElement::DL_BadElement(pDVar2);
                    /* try { // try from 00ca3634 to 00ca364b has its CatchHandler @ 00ca3674 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pDVar2,&DL_BadElement::typeinfo,Exception::~Exception);
  }
  return;
}


