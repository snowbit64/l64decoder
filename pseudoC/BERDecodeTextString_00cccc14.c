// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodeTextString
// Entry Point: 00cccc14
// Size: 648 bytes
// Signature: undefined __cdecl BERDecodeTextString(BufferedTransformation * param_1, basic_string * param_2, uchar param_3)


/* CryptoPP::BERDecodeTextString(CryptoPP::BufferedTransformation&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, unsigned char) */

ulong CryptoPP::BERDecodeTextString
                (BufferedTransformation *param_1,basic_string *param_2,uchar param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  BERDecodeErr *this;
  undefined8 *puVar6;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  uchar local_64 [4];
  bool local_60;
  undefined8 local_5f;
  undefined7 uStack_57;
  undefined uStack_50;
  undefined uStack_4f;
  undefined6 uStack_4e;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_64);
  if ((lVar3 == 0) || (local_64[0] != param_3)) {
    this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cccdac to 00cccdaf has its CatchHandler @ 00ccced0 */
    BERDecodeErr::BERDecodeErr(this);
LAB_00cccdec:
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
  local_88 = 0;
  local_60 = false;
  uVar4 = BERLengthDecode(param_1,&local_88,&local_60);
  uVar2 = local_88;
  if ((uVar4 & 1) == 0) {
    this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cccdc0 to 00cccdc3 has its CatchHandler @ 00cccecc */
    BERDecodeErr::BERDecodeErr(this);
    goto LAB_00cccdec;
  }
  if (local_60 == false) {
    this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cccdd4 to 00cccdd7 has its CatchHandler @ 00cccec8 */
    BERDecodeErr::BERDecodeErr(this);
    goto LAB_00cccdec;
  }
  uVar4 = (**(code **)(*(long *)param_1 + 0x98))(param_1);
  if (uVar4 < uVar2) {
    this = (BERDecodeErr *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cccde8 to 00cccdeb has its CatchHandler @ 00cccec4 */
    BERDecodeErr::BERDecodeErr(this);
    goto LAB_00cccdec;
  }
  local_80 = 0xffffffffffffffff;
  local_78 = uVar2;
  if (uVar2 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    pvVar5 = (void *)UnalignedAllocate(uVar2);
  }
  local_70 = pvVar5;
                    /* try { // try from 00ccccd0 to 00ccccfb has its CatchHandler @ 00cccee8 */
  uVar4 = (**(code **)(*(long *)param_1 + 0xb0))(param_1,pvVar5,uVar2);
  if (uVar2 != uVar4) {
    puVar6 = (undefined8 *)__cxa_allocate_exception(0x28);
    uStack_4f = 0;
    local_60 = true;
    uStack_57 = 0x6f727265206564;
    uStack_50 = 0x72;
    local_5f._0_1_ = 'B';
    local_5f._1_1_ = 'E';
    local_5f._2_1_ = 'R';
    local_5f._3_1_ = ' ';
    local_5f._4_1_ = 'd';
    local_5f._5_1_ = 'e';
    local_5f._6_1_ = 'c';
    local_5f._7_1_ = 'o';
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR__Exception_00fe0298;
                    /* try { // try from 00ccce48 to 00ccce4f has its CatchHandler @ 00ccce9c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar6 + 2));
    *puVar6 = &PTR__Exception_00fe9ee0;
    if ((local_60 & 1U) != 0) {
      operator_delete((void *)CONCAT62(uStack_4e,CONCAT11(uStack_4f,uStack_50)));
    }
    *puVar6 = &PTR__Exception_01002700;
                    /* try { // try from 00ccce80 to 00ccce97 has its CatchHandler @ 00cccee8 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
  if (uVar2 == 0) {
    if ((*(byte *)param_2 & 1) == 0) {
      *(undefined2 *)param_2 = 0;
      goto LAB_00cccd6c;
    }
    **(undefined **)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    uVar4 = local_80;
    pvVar5 = local_70;
    if (local_78 <= local_80) {
      uVar4 = local_78;
    }
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)param_2,(ulong)pvVar5);
    uVar4 = uVar2;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined *)((long)pvVar5 + (uVar4 - 1)) = 0;
  }
LAB_00cccd6c:
                    /* try { // try from 00cccd6c to 00cccd73 has its CatchHandler @ 00cccee4 */
  UnalignedDeallocate(pvVar5);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


