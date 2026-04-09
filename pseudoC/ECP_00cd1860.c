// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ECP
// Entry Point: 00cd1860
// Size: 380 bytes
// Signature: undefined __thiscall ECP(ECP * this, BufferedTransformation * param_1)


/* CryptoPP::ECP::ECP(CryptoPP::BufferedTransformation&) */

void __thiscall CryptoPP::ECP::ECP(ECP *this,BufferedTransformation *param_1)

{
  long lVar1;
  ModularArithmetic *this_00;
  ulong uVar2;
  uint uStack_b4;
  SecBlock aSStack_b0 [8];
  ulong local_a8;
  ulong local_a0;
  void *local_98;
  undefined **local_90;
  undefined **ppuStack_88;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__ECP_01005df8;
  *(undefined ***)(this + 8) = &PTR__ECP_01005eb8;
  this_00 = (ModularArithmetic *)operator_new(0xa8);
                    /* try { // try from 00cd18b0 to 00cd18b7 has its CatchHandler @ 00cd1a20 */
  ModularArithmetic::ModularArithmetic(this_00,param_1);
  *(ModularArithmetic **)(this + 0x10) = this_00;
                    /* try { // try from 00cd18c0 to 00cd18c7 has its CatchHandler @ 00cd1a18 */
  Integer::Integer((Integer *)(this + 0x18));
                    /* try { // try from 00cd18cc to 00cd18d3 has its CatchHandler @ 00cd1a10 */
  Integer::Integer((Integer *)(this + 0x48));
  *(undefined ***)(this + 0x78) = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00cd18ec to 00cd18f3 has its CatchHandler @ 00cd1a08 */
  Integer::Integer((Integer *)(this + 0x80));
                    /* try { // try from 00cd18f8 to 00cd18fb has its CatchHandler @ 00cd19f8 */
  Integer::Integer((Integer *)(this + 0xb0));
  this[0xe0] = (ECP)0x1;
                    /* try { // try from 00cd1904 to 00cd1913 has its CatchHandler @ 00cd19f0 */
  BERGeneralDecoder::BERGeneralDecoder((BERGeneralDecoder *)&local_90,param_1,'0');
  local_90 = &PTR__BERGeneralDecoder_01000a70;
  ppuStack_88 = &PTR__BERSequenceDecoder_01000c08;
                    /* try { // try from 00cd192c to 00cd194f has its CatchHandler @ 00cd1a34 */
  ModularArithmetic::BERDecodeElement
            (*(ModularArithmetic **)(this + 0x10),(BufferedTransformation *)&local_90,
             (Integer *)(this + 0x18));
  ModularArithmetic::BERDecodeElement
            (*(ModularArithmetic **)(this + 0x10),(BufferedTransformation *)&local_90,
             (Integer *)(this + 0x48));
  uVar2 = BERGeneralDecoder::EndReached();
  if ((uVar2 & 1) == 0) {
    local_a0 = 0;
    local_98 = (void *)0x0;
    local_a8 = 0xffffffffffffffff;
                    /* try { // try from 00cd1960 to 00cd196f has its CatchHandler @ 00cd19e0 */
    BERDecodeBitString((BufferedTransformation *)&local_90,aSStack_b0,&uStack_b4);
    uVar2 = local_a8;
    if (local_a0 <= local_a8) {
      uVar2 = local_a0;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined *)((long)local_98 + (uVar2 - 1)) = 0;
    }
                    /* try { // try from 00cd1998 to 00cd199b has its CatchHandler @ 00cd19dc */
    UnalignedDeallocate(local_98);
  }
                    /* try { // try from 00cd199c to 00cd19a3 has its CatchHandler @ 00cd1a34 */
  BERGeneralDecoder::MessageEnd();
  BERGeneralDecoder::~BERGeneralDecoder((BERGeneralDecoder *)&local_90);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


