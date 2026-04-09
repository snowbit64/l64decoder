// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodePoint
// Entry Point: 00cd06cc
// Size: 372 bytes
// Signature: undefined __cdecl BERDecodePoint(BufferedTransformation * param_1)


/* CryptoPP::EC2N::BERDecodePoint(CryptoPP::BufferedTransformation&) const */

void CryptoPP::EC2N::BERDecodePoint(BufferedTransformation *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  BufferedTransformation *in_x1;
  undefined8 *in_x8;
  long lVar4;
  SecBlock aSStack_70 [8];
  ulong local_68;
  ulong local_60;
  void *local_58;
  byte local_50;
  undefined8 local_4f;
  undefined7 uStack_47;
  undefined uStack_40;
  undefined uStack_3f;
  undefined6 uStack_3e;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  local_58 = (void *)0x0;
  local_68 = 0xffffffffffffffff;
                    /* try { // try from 00cd0704 to 00cd072b has its CatchHandler @ 00cd0890 */
  BERDecodeOctetString(in_x1,aSStack_70);
  *in_x8 = &PTR__EC2NPoint_010026a8;
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x8 + 1));
                    /* try { // try from 00cd0730 to 00cd0733 has its CatchHandler @ 00cd086c */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x8 + 5));
  lVar4 = *(long *)param_1;
  *(undefined *)(in_x8 + 9) = 1;
                    /* try { // try from 00cd0748 to 00cd0753 has its CatchHandler @ 00cd0880 */
  uVar2 = (**(code **)(lVar4 + 0x88))(param_1);
  if ((uVar2 & 1) == 0) {
    puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
    uStack_3f = 0;
    local_50 = 0x20;
    uStack_47 = 0x6f727265206564;
    uStack_40 = 0x72;
    local_4f._0_1_ = 'B';
    local_4f._1_1_ = 'E';
    local_4f._2_1_ = 'R';
    local_4f._3_1_ = ' ';
    local_4f._4_1_ = 'd';
    local_4f._5_1_ = 'e';
    local_4f._6_1_ = 'c';
    local_4f._7_1_ = 'o';
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR__Exception_00fe0298;
                    /* try { // try from 00cd07ec to 00cd07f3 has its CatchHandler @ 00cd0840 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar3 + 2));
    *puVar3 = &PTR__Exception_00fe9ee0;
    if ((local_50 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_3e,CONCAT11(uStack_3f,uStack_40)));
    }
    *puVar3 = &PTR__Exception_01002700;
                    /* try { // try from 00cd0824 to 00cd083b has its CatchHandler @ 00cd0880 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
  uVar2 = local_68;
  if (local_60 <= local_68) {
    uVar2 = local_60;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined *)((long)local_58 + (uVar2 - 1)) = 0;
  }
                    /* try { // try from 00cd0780 to 00cd0783 has its CatchHandler @ 00cd0868 */
  UnalignedDeallocate(local_58);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


