// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: P1363_MGF1KDF2_Common
// Entry Point: 00d1a970
// Size: 544 bytes
// Signature: undefined __cdecl P1363_MGF1KDF2_Common(HashTransformation * param_1, uchar * param_2, ulong param_3, uchar * param_4, ulong param_5, uchar * param_6, ulong param_7, bool param_8, uint param_9)


/* CryptoPP::P1363_MGF1KDF2_Common(CryptoPP::HashTransformation&, unsigned char*, unsigned long,
   unsigned char const*, unsigned long, unsigned char const*, unsigned long, bool, unsigned int) */

void CryptoPP::P1363_MGF1KDF2_Common
               (HashTransformation *param_1,uchar *param_2,ulong param_3,uchar *param_4,
               ulong param_5,uchar *param_6,ulong param_7,bool param_8,uint param_9)

{
  long lVar1;
  undefined8 *this;
  undefined *puVar2;
  undefined **local_110;
  undefined **ppuStack_108;
  long *local_f8;
  undefined **local_e0;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  byte local_a0;
  void *local_90;
  byte local_88;
  void *local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  this = (undefined8 *)operator_new(0x30);
  if (param_8) {
                    /* try { // try from 00d1a9cc to 00d1a9d7 has its CatchHandler @ 00d1ab94 */
    Algorithm::Algorithm((Algorithm *)this,false);
    puVar2 = &ArrayXorSink::vtable;
  }
  else {
                    /* try { // try from 00d1a9e4 to 00d1a9ef has its CatchHandler @ 00d1ab90 */
    Algorithm::Algorithm((Algorithm *)this,false);
    puVar2 = &ArraySink::vtable;
  }
  this[3] = param_2;
  this[4] = param_3;
  this[5] = 0;
  *this = puVar2 + 0x10;
  this[1] = puVar2 + 0x1a0;
  HashFilter::HashFilter
            ((HashFilter *)&local_110,param_1,(BufferedTransformation *)this,false,-1,
             (basic_string *)&DEFAULT_CHANNEL,(basic_string *)&DEFAULT_CHANNEL);
  while ((ulong)this[5] < (ulong)this[4]) {
                    /* try { // try from 00d1aa48 to 00d1aab7 has its CatchHandler @ 00d1abac */
    (*(code *)local_110[7])(&local_110,param_4,param_5,0,1);
    BufferedTransformation::PutWord32((BufferedTransformation *)&local_110,param_9,1,true);
    (*(code *)local_110[7])(&local_110,param_6,param_7,0,1);
    param_9 = param_9 + 1;
    (*(code *)local_110[7])(&local_110,0,0,0xffffffff,1);
  }
  local_110 = &PTR__HashFilter_01006830;
  ppuStack_108 = &PTR__HashFilter_010069d8;
  local_e0 = &PTR__HashFilter_01006a08;
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (uStack_c8 <= local_d0) {
    local_d0 = uStack_c8;
  }
  local_e0 = &PTR__FilterPutSpaceHelper_00feccd8;
  for (; local_d0 != 0; local_d0 = local_d0 - 1) {
    *(undefined *)((long)local_c0 + (local_d0 - 1)) = 0;
  }
                    /* try { // try from 00d1ab30 to 00d1ab33 has its CatchHandler @ 00d1aba8 */
  UnalignedDeallocate(local_c0);
  local_110 = &PTR__Filter_01005f60;
  ppuStack_108 = &PTR__Filter_01006108;
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


