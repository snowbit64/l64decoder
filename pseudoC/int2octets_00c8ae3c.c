// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: int2octets
// Entry Point: 00c8ae3c
// Size: 404 bytes
// Signature: undefined __cdecl int2octets(Integer * param_1, ulong param_2)


/* CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,
   CryptoPP::SHA256>::int2octets(CryptoPP::Integer const&, unsigned long) const */

void CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA256>::int2octets
               (Integer *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  uchar *__src;
  ulong uVar3;
  void *pvVar4;
  ulong in_x2;
  SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> *in_x8;
  SecBlock aSStack_88 [8];
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  SecBlock aSStack_68 [8];
  ulong local_60;
  ulong uStack_58;
  uchar *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = Integer::MinEncodedSize((Integer *)param_2,0);
  local_60 = 0xffffffffffffffff;
  uStack_58 = uVar2;
  if (uVar2 == 0) {
    __src = (uchar *)0x0;
  }
  else {
    __src = (uchar *)UnalignedAllocate(uVar2);
  }
  local_50 = __src;
                    /* try { // try from 00c8aea0 to 00c8aed3 has its CatchHandler @ 00c8afec */
  uVar3 = Integer::MinEncodedSize((Integer *)param_2,0);
  Integer::Encode((Integer *)param_2,__src,uVar3,0);
  if (uVar2 == in_x2) {
    SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::SecBlock
              (in_x8,aSStack_68);
    goto LAB_00c8af78;
  }
  local_80 = 0xffffffffffffffff;
  uStack_78 = in_x2;
  if (in_x2 == 0) {
    local_70 = (void *)0x0;
    uVar3 = uVar2;
    if (uVar2 != 0) goto LAB_00c8aefc;
LAB_00c8af1c:
    pvVar4 = local_70;
    memset(local_70,0,in_x2 - uVar2);
    pvVar4 = (void *)((long)pvVar4 + (in_x2 - uVar2));
  }
  else {
                    /* try { // try from 00c8aee4 to 00c8aeeb has its CatchHandler @ 00c8afd0 */
    local_70 = (void *)UnalignedAllocate(in_x2);
    uVar3 = uVar2 - in_x2;
    if (uVar2 < in_x2 || uVar2 - in_x2 == 0) goto LAB_00c8af1c;
LAB_00c8aefc:
    __src = __src + uVar3;
    pvVar4 = local_70;
    uVar2 = in_x2;
  }
  memcpy(pvVar4,__src,uVar2);
                    /* try { // try from 00c8af40 to 00c8af4b has its CatchHandler @ 00c8afd8 */
  SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::SecBlock
            (in_x8,aSStack_88);
  uVar2 = local_80;
  if (uStack_78 <= local_80) {
    uVar2 = uStack_78;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined *)((long)local_70 + (uVar2 - 1)) = 0;
  }
                    /* try { // try from 00c8af74 to 00c8af77 has its CatchHandler @ 00c8afd4 */
  UnalignedDeallocate(local_70);
LAB_00c8af78:
  uVar2 = local_60;
  if (uStack_58 <= local_60) {
    uVar2 = uStack_58;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    local_50[uVar2 - 1] = '\0';
  }
                    /* try { // try from 00c8afa0 to 00c8afa3 has its CatchHandler @ 00c8afe8 */
  UnalignedDeallocate(local_50);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


