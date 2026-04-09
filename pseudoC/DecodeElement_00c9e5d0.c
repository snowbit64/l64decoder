// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DecodeElement
// Entry Point: 00c9e5d0
// Size: 276 bytes
// Signature: undefined __cdecl DecodeElement(uchar * param_1, bool param_2)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::DecodeElement(unsigned char const*, bool) const
    */

void CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::DecodeElement(uchar *param_1,bool param_2)

{
  ulong uVar1;
  DL_BadElement *pDVar2;
  ulong in_x2;
  undefined8 *in_x8;
  long lVar3;
  long *plVar4;
  
  *in_x8 = &PTR__ECPPoint_00fe9fd8;
  Integer::Integer((Integer *)(in_x8 + 1));
                    /* try { // try from 00c9e614 to 00c9e61b has its CatchHandler @ 00c9e6fc */
  Integer::Integer((Integer *)(in_x8 + 7));
  lVar3 = *(long *)param_1;
  plVar4 = *(long **)(param_1 + 0x20);
  *(undefined *)(in_x8 + 0xd) = 1;
                    /* try { // try from 00c9e630 to 00c9e67b has its CatchHandler @ 00c9e710 */
  (**(code **)(lVar3 + 0xc0))(param_1,1);
  uVar1 = (**(code **)(*plVar4 + 0x88))(plVar4);
  if ((uVar1 & 1) == 0) {
    pDVar2 = (DL_BadElement *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c9e6a0 to 00c9e6a3 has its CatchHandler @ 00c9e6ec */
    DL_BadElement::DL_BadElement(pDVar2);
                    /* try { // try from 00c9e6a4 to 00c9e6bb has its CatchHandler @ 00c9e710 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pDVar2,&DL_BadElement::typeinfo,Exception::~Exception);
  }
  if (((in_x2 & 1) != 0) &&
     (uVar1 = (**(code **)(*(long *)param_1 + 0xe8))(param_1,1), (uVar1 & 1) == 0)) {
    pDVar2 = (DL_BadElement *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c9e6cc to 00c9e6cf has its CatchHandler @ 00c9e6e8 */
    DL_BadElement::DL_BadElement(pDVar2);
                    /* try { // try from 00c9e6d0 to 00c9e6e7 has its CatchHandler @ 00c9e710 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pDVar2,&DL_BadElement::typeinfo,Exception::~Exception);
  }
  return;
}


