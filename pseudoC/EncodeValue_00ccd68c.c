// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EncodeValue
// Entry Point: 00ccd68c
// Size: 428 bytes
// Signature: undefined __cdecl EncodeValue(BufferedTransformation * param_1, uint param_2)


/* CryptoPP::OID::EncodeValue(CryptoPP::BufferedTransformation&, unsigned int) */

void CryptoPP::OID::EncodeValue(BufferedTransformation *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_2 != 0) {
    uVar6 = 0;
    uVar4 = 0x20;
    do {
      uVar1 = uVar6 + uVar4 >> 1;
      uVar5 = uVar1;
      if (param_2 >> (ulong)(uVar1 & 0x1f) != 0) {
        uVar5 = uVar4;
        uVar6 = uVar1;
      }
      uVar4 = uVar5;
    } while (1 < uVar5 - uVar6);
    if (7 < uVar5) {
      if (0xfffffff9 < uVar5) {
        puVar3 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00ccd700 to 00ccd707 has its CatchHandler @ 00ccd874 */
        local_40 = (undefined8 *)operator_new(0x30);
        *(undefined *)((long)local_40 + 0x25) = 0;
        local_40[1] = 0x6c7069746c754d6f;
        *local_40 = 0x547055646e756f52;
        local_40[3] = 0x65766f2072656765;
        local_40[2] = 0x746e69203a664f65;
        *(undefined8 *)((long)local_40 + 0x1d) = 0x776f6c667265766f;
        uStack_48 = 0x25;
        local_50 = 0x31;
        *puVar3 = &PTR__Exception_00fe0298;
        *(undefined4 *)(puVar3 + 1) = 1;
                    /* try { // try from 00ccd750 to 00ccd757 has its CatchHandler @ 00ccd854 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)(puVar3 + 2));
        *puVar3 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00ccd768 to 00ccd77f has its CatchHandler @ 00ccd838 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&InvalidArgument::typeinfo,Exception::~Exception);
      }
      goto LAB_00ccd784;
    }
  }
  uVar5 = 7;
LAB_00ccd784:
  uVar6 = (uVar5 + 6) / 7;
  uVar6 = (uVar6 + ((uVar5 + 6) - uVar6 >> 1) >> 2) * 7;
  while( true ) {
    uVar6 = uVar6 - 7;
    local_50._1_7_ = (undefined7)(local_50 >> 8);
    if (uVar6 == 0) break;
    local_50 = CONCAT71(local_50._1_7_,(char)(param_2 >> (ulong)(uVar6 & 0x1f))) | 0x80;
    (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_50,1,0,1);
  }
  local_50 = CONCAT71(local_50._1_7_,(char)param_2) & 0xffffffffffffff7f;
  (**(code **)(*(long *)param_1 + 0x38))(param_1,&local_50,1,0,1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


