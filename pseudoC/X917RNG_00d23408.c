// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: X917RNG
// Entry Point: 00d23408
// Size: 524 bytes
// Signature: undefined __thiscall X917RNG(X917RNG * this, BlockTransformation * param_1, uchar * param_2, uchar * param_3)


/* CryptoPP::X917RNG::X917RNG(CryptoPP::BlockTransformation*, unsigned char const*, unsigned char
   const*) */

void __thiscall
CryptoPP::X917RNG::X917RNG(X917RNG *this,BlockTransformation *param_1,uchar *param_2,uchar *param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  clock_t local_80;
  undefined **local_78;
  undefined **ppuStack_70;
  undefined8 local_60;
  ulong uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  Algorithm::Algorithm((Algorithm *)this,true);
  *(undefined ***)this = &PTR__X917RNG_01010338;
  *(BlockTransformation **)(this + 8) = param_1;
                    /* try { // try from 00d2345c to 00d2347f has its CatchHandler @ 00d23690 */
  uVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  *(uint *)(this + 0x10) = uVar3;
  *(undefined8 *)(this + 0x20) = 0xffffffffffffffff;
  *(ulong *)(this + 0x28) = (ulong)uVar3;
  if (uVar3 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = UnalignedAllocate((ulong)uVar3);
    uVar3 = *(uint *)(this + 0x10);
  }
  *(undefined8 *)(this + 0x30) = uVar4;
                    /* try { // try from 00d2349c to 00d234a7 has its CatchHandler @ 00d23678 */
  SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::SecBlock
            ((SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> *)
             (this + 0x38),param_2,(ulong)uVar3);
  uVar3 = *(uint *)(this + 0x10);
  *(undefined8 *)(this + 0x60) = 0xffffffffffffffff;
  *(ulong *)(this + 0x68) = (ulong)uVar3;
  if (uVar3 == 0) {
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
                    /* try { // try from 00d234b8 to 00d234bb has its CatchHandler @ 00d2361c */
    uVar4 = UnalignedAllocate((ulong)uVar3);
    uVar5 = (ulong)*(uint *)(this + 0x10);
  }
  uVar1 = 0;
  if (param_3 != (uchar *)0x0) {
    uVar1 = uVar5;
  }
  *(undefined8 *)(this + 0x70) = uVar4;
                    /* try { // try from 00d234dc to 00d234e7 has its CatchHandler @ 00d23670 */
  SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>::SecBlock
            ((SecBlock<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>> *)
             (this + 0x78),param_3,uVar1);
  if (8 < *(uint *)(this + 0x10)) {
    memset(*(void **)(this + 0x30),0,(ulong)*(uint *)(this + 0x10));
    memset(*(void **)(this + 0x70),0,(ulong)*(uint *)(this + 0x10));
  }
  if (param_3 == (uchar *)0x0) {
                    /* try { // try from 00d23514 to 00d2351b has its CatchHandler @ 00d23628 */
    local_78 = (undefined **)time((time_t *)0x0);
    uVar5 = (ulong)*(uint *)(this + 0x10);
    if (7 < *(uint *)(this + 0x10)) {
      uVar5 = 8;
    }
                    /* try { // try from 00d23534 to 00d2353f has its CatchHandler @ 00d23618 */
    xorbuf(*(uchar **)(this + 0x30),(uchar *)&local_78,uVar5);
                    /* try { // try from 00d23550 to 00d2355b has its CatchHandler @ 00d23628 */
    (**(code **)(**(long **)(this + 8) + 0x28))
              (*(long **)(this + 8),*(undefined8 *)(this + 0x30),0,*(undefined8 *)(this + 0x30));
                    /* try { // try from 00d2355c to 00d2355f has its CatchHandler @ 00d23624 */
    local_80 = clock();
    uVar5 = (ulong)*(uint *)(this + 0x10);
    if (7 < *(uint *)(this + 0x10)) {
      uVar5 = 8;
    }
                    /* try { // try from 00d23578 to 00d23583 has its CatchHandler @ 00d23614 */
    xorbuf(*(uchar **)(this + 0x30),(uchar *)&local_80,uVar5);
                    /* try { // try from 00d23594 to 00d2359f has its CatchHandler @ 00d23624 */
    (**(code **)(**(long **)(this + 8) + 0x28))
              (*(long **)(this + 8),*(undefined8 *)(this + 0x30),0,*(undefined8 *)(this + 0x30));
  }
  uVar4 = *(undefined8 *)(this + 0x70);
  uVar3 = *(uint *)(this + 0x10);
                    /* try { // try from 00d235a8 to 00d235b3 has its CatchHandler @ 00d23630 */
  Algorithm::Algorithm((Algorithm *)&local_78,false);
  local_50 = 0;
  local_78 = &PTR__BufferedTransformation_01007ee0;
  ppuStack_70 = &PTR__ArraySink_01008070;
                    /* try { // try from 00d235d4 to 00d235e7 has its CatchHandler @ 00d2362c */
  local_60 = uVar4;
  uStack_58 = (ulong)uVar3;
  GenerateIntoBufferedTransformation
            (this,(BufferedTransformation *)&local_78,(basic_string *)&DEFAULT_CHANNEL,
             (ulong)*(uint *)(this + 0x10));
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


