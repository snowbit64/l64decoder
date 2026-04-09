// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodeUnsigned<unsigned_int>
// Entry Point: 00c85794
// Size: 1028 bytes
// Signature: void __cdecl BERDecodeUnsigned<unsigned_int>(BufferedTransformation * param_1, uint * param_2, uchar param_3, uint param_4, uint param_5)


/* void CryptoPP::BERDecodeUnsigned<unsigned int>(CryptoPP::BufferedTransformation&, unsigned int&,
   unsigned char, unsigned int, unsigned int) */

void CryptoPP::BERDecodeUnsigned<unsigned_int>
               (BufferedTransformation *param_1,uint *param_2,uchar param_3,uint param_4,
               uint param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  BERDecodeErr *this;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  ulong local_80;
  uchar local_74 [4];
  byte local_70;
  undefined8 local_6f;
  undefined7 uStack_67;
  undefined uStack_60;
  undefined uStack_5f;
  undefined6 uStack_5e;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_74);
  if ((lVar2 == 0) || (local_74[0] != param_3)) {
    this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c85a94 to 00c85a97 has its CatchHandler @ 00c85bb0 */
    BERDecodeErr::BERDecodeErr(this);
LAB_00c85ae8:
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
  uVar3 = BERLengthDecode(param_1,&local_80);
  uVar9 = local_80;
  if ((uVar3 & 1) == 0) {
    this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c85aa8 to 00c85aab has its CatchHandler @ 00c85bac */
    BERDecodeErr::BERDecodeErr(this);
    goto LAB_00c85ae8;
  }
  uVar4 = (**(code **)(*(long *)param_1 + 0x98))(param_1);
  uVar3 = local_80;
  if (uVar4 < uVar9) {
    this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c85abc to 00c85abf has its CatchHandler @ 00c85ba8 */
    BERDecodeErr::BERDecodeErr(this);
    goto LAB_00c85ae8;
  }
  if ((param_3 == '\x01') && (local_80 != 1)) {
    this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c85ad0 to 00c85ad3 has its CatchHandler @ 00c85ba4 */
    BERDecodeErr::BERDecodeErr(this);
    goto LAB_00c85ae8;
  }
  if (((param_3 & 0xf7) == 2) && (local_80 == 0)) {
    this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c85ae4 to 00c85ae7 has its CatchHandler @ 00c85ba0 */
    BERDecodeErr::BERDecodeErr(this);
    goto LAB_00c85ae8;
  }
  if (local_80 == 0) {
    uVar9 = 0;
    pbVar5 = (byte *)0x0;
  }
  else {
    pbVar5 = (byte *)UnalignedAllocate(local_80);
    uVar9 = local_80;
  }
                    /* try { // try from 00c85878 to 00c85887 has its CatchHandler @ 00c85bc8 */
  uVar4 = (**(code **)(*(long *)param_1 + 0xb0))(param_1,pbVar5,uVar9);
  if (uVar9 != uVar4) {
    puVar6 = (undefined8 *)__cxa_allocate_exception(0x28);
    uStack_5f = 0;
    local_70 = 0x20;
    uStack_67 = 0x6f727265206564;
    uStack_60 = 0x72;
    local_6f._0_1_ = 'B';
    local_6f._1_1_ = 'E';
    local_6f._2_1_ = 'R';
    local_6f._3_1_ = ' ';
    local_6f._4_1_ = 'd';
    local_6f._5_1_ = 'e';
    local_6f._6_1_ = 'c';
    local_6f._7_1_ = 'o';
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR__Exception_00fe0298;
                    /* try { // try from 00c85b44 to 00c85b4b has its CatchHandler @ 00c85b9c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar6 + 2));
    *puVar6 = &PTR__Exception_00fe9ee0;
    if ((local_70 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60)));
    }
    *puVar6 = &PTR__Exception_01002700;
                    /* try { // try from 00c85b7c to 00c85b93 has its CatchHandler @ 00c85bc8 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
  if (local_80 < 5) {
    *param_2 = 0;
    uVar9 = local_80;
    pbVar7 = pbVar5;
    if (local_80 == 0) {
      if ((param_4 != 0 || param_5 == 0) && (param_4 != 0 || param_5 != 0)) goto LAB_00c85960;
      goto joined_r0x00c85904;
    }
  }
  else {
    lVar2 = local_80 - 4;
    pbVar7 = pbVar5;
    do {
      if (*pbVar7 != 0) {
        puVar6 = (undefined8 *)__cxa_allocate_exception(0x28);
        uStack_5f = 0;
        local_70 = 0x20;
        uStack_67 = 0x6f727265206564;
        uStack_60 = 0x72;
        local_6f._0_1_ = 'B';
        local_6f._1_1_ = 'E';
        local_6f._2_1_ = 'R';
        local_6f._3_1_ = ' ';
        local_6f._4_1_ = 'd';
        local_6f._5_1_ = 'e';
        local_6f._6_1_ = 'c';
        local_6f._7_1_ = 'o';
        *(undefined4 *)(puVar6 + 1) = 1;
        *puVar6 = &PTR__Exception_00fe0298;
                    /* try { // try from 00c85a38 to 00c85a3f has its CatchHandler @ 00c85bcc */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)(puVar6 + 2));
        *puVar6 = &PTR__Exception_00fe9ee0;
        if ((local_70 & 1) != 0) {
          operator_delete((void *)CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60)));
        }
        *puVar6 = &PTR__Exception_01002700;
                    /* try { // try from 00c85a70 to 00c85a87 has its CatchHandler @ 00c85bf4 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar6,&BERDecodeErr::typeinfo,Exception::~Exception);
      }
      local_80 = local_80 - 1;
      pbVar7 = pbVar7 + 1;
    } while (4 < local_80);
    *param_2 = 0;
    uVar9 = 4;
    pbVar7 = pbVar5 + lVar2;
  }
  uVar8 = 0;
  do {
    uVar9 = uVar9 - 1;
    uVar8 = (uint)*pbVar7 | uVar8 << 8;
    *param_2 = uVar8;
    pbVar7 = pbVar7 + 1;
  } while (uVar9 != 0);
  if ((uVar8 < param_4 || param_5 <= uVar8) && (uVar8 < param_4 || uVar8 != param_5)) {
LAB_00c85960:
    puVar6 = (undefined8 *)__cxa_allocate_exception(0x28);
    uStack_5f = 0;
    local_70 = 0x20;
    uStack_67 = 0x6f727265206564;
    uStack_60 = 0x72;
    local_6f._0_1_ = 'B';
    local_6f._1_1_ = 'E';
    local_6f._2_1_ = 'R';
    local_6f._3_1_ = ' ';
    local_6f._4_1_ = 'd';
    local_6f._5_1_ = 'e';
    local_6f._6_1_ = 'c';
    local_6f._7_1_ = 'o';
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR__Exception_00fe0298;
                    /* try { // try from 00c859a4 to 00c859ab has its CatchHandler @ 00c85b98 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar6 + 2));
    *puVar6 = &PTR__Exception_00fe9ee0;
    if ((local_70 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60)));
    }
    *puVar6 = &PTR__Exception_01002700;
                    /* try { // try from 00c859dc to 00c859f3 has its CatchHandler @ 00c85bf4 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
joined_r0x00c85904:
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    pbVar5[uVar3 - 1] = 0;
  }
                    /* try { // try from 00c8591c to 00c85923 has its CatchHandler @ 00c85bc4 */
  UnalignedDeallocate(pbVar5);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


