// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodeAndCheck
// Entry Point: 00ccdd9c
// Size: 348 bytes
// Signature: undefined __thiscall BERDecodeAndCheck(OID * this, BufferedTransformation * param_1)


/* CryptoPP::OID::BERDecodeAndCheck(CryptoPP::BufferedTransformation&) const */

void __thiscall CryptoPP::OID::BERDecodeAndCheck(OID *this,BufferedTransformation *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined **local_70;
  int *local_68;
  int *local_60;
  undefined8 uStack_58;
  byte local_50;
  undefined8 local_4f;
  undefined7 uStack_47;
  undefined uStack_40;
  undefined uStack_3f;
  undefined6 uStack_3e;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  local_70 = &PTR__OID_00fecd98;
  local_60 = (int *)0x0;
  uStack_58 = 0;
  local_68 = (int *)0x0;
                    /* try { // try from 00ccddd4 to 00ccdddb has its CatchHandler @ 00ccdf44 */
  BERDecode((OID *)&local_70,param_1);
  piVar1 = *(int **)(this + 8);
  piVar2 = *(int **)(this + 0x10);
  if ((long)piVar2 - (long)piVar1 == (long)local_60 - (long)local_68) {
    piVar8 = local_68;
    if (piVar1 != piVar2) {
      do {
        piVar7 = piVar1 + 1;
        iVar3 = *piVar1;
        iVar4 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar1 = piVar7;
      } while (iVar3 == iVar4 && piVar7 != piVar2);
      if (iVar3 != iVar4) goto LAB_00ccde60;
    }
    local_70 = &PTR__OID_00fecd98;
    if (local_68 != (int *)0x0) {
      local_60 = local_68;
      operator_delete(local_68);
    }
    if (*(long *)(lVar5 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00ccde60:
  puVar6 = (undefined8 *)__cxa_allocate_exception(0x28);
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
  *(undefined4 *)(puVar6 + 1) = 1;
  *puVar6 = &PTR__Exception_00fe0298;
                    /* try { // try from 00ccdea4 to 00ccdeab has its CatchHandler @ 00ccdf00 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar6 + 2));
  *puVar6 = &PTR__Exception_00fe9ee0;
  if ((local_50 & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_3e,CONCAT11(uStack_3f,uStack_40)));
  }
  *puVar6 = &PTR__Exception_01002700;
                    /* try { // try from 00ccdedc to 00ccdef3 has its CatchHandler @ 00ccdef8 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar6,&BERDecodeErr::typeinfo,Exception::~Exception);
}


