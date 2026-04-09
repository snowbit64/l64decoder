// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toString
// Entry Point: 00be45f0
// Size: 428 bytes
// Signature: undefined __thiscall toString(PBKDF2HashUtil * this, uchar * param_1, uint param_2)


/* PBKDF2HashUtil::toString(unsigned char const*, unsigned int) */

void __thiscall PBKDF2HashUtil::toString(PBKDF2HashUtil *this,uchar *param_1,uint param_2)

{
  long lVar1;
  undefined8 *this_00;
  undefined8 *in_x8;
  ushort local_110;
  void *local_100;
  ushort local_f8;
  undefined local_f6;
  void *local_e8;
  undefined **local_e0;
  undefined **ppuStack_d8;
  long *local_c8;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
                    /* try { // try from 00be4628 to 00be462f has its CatchHandler @ 00be47f4 */
  this_00 = (undefined8 *)operator_new(0x20);
                    /* try { // try from 00be4634 to 00be463b has its CatchHandler @ 00be47dc */
  CryptoPP::Algorithm::Algorithm((Algorithm *)this_00,false);
  this_00[3] = in_x8;
  local_f6 = 0;
  local_f8 = 0x3a02;
  local_110 = 0;
  *this_00 = &PTR__StringSinkTemplate_00ff2260;
  this_00[1] = &PTR__StringSinkTemplate_00ff23f0;
                    /* try { // try from 00be4664 to 00be467f has its CatchHandler @ 00be47a0 */
  CryptoPP::HexEncoder::HexEncoder
            ((HexEncoder *)&local_e0,(BufferedTransformation *)this_00,true,0,
             (basic_string *)&local_f8,(basic_string *)&local_110);
  if ((local_110 & 1) != 0) {
    operator_delete(local_100);
  }
  if ((local_f8 & 1) != 0) {
    operator_delete(local_e8);
  }
                    /* try { // try from 00be46ac to 00be46df has its CatchHandler @ 00be4804 */
  (*(code *)local_e0[7])(&local_e0,this,(ulong)param_1 & 0xffffffff,0,1);
  (*(code *)local_e0[7])(&local_e0,0,0,0xffffffff,1);
  local_e0 = &PTR__ProxyFilter_01006390;
  ppuStack_d8 = &PTR__ProxyFilter_010065a0;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 8))();
  }
  local_e0 = &PTR__FilterWithBufferedInput_01006138;
  ppuStack_d8 = &PTR__FilterWithBufferedInput_01006348;
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined *)((long)local_78 + (local_88 - 1)) = 0;
  }
                    /* try { // try from 00be4744 to 00be4747 has its CatchHandler @ 00be479c */
  CryptoPP::UnalignedDeallocate(local_78);
  local_e0 = &PTR__Filter_01005f60;
  ppuStack_d8 = &PTR__Filter_01006108;
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


