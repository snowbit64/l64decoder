// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignFrom
// Entry Point: 00ca1ff0
// Size: 692 bytes
// Signature: undefined __thiscall AssignFrom(DL_GroupParameters_EC<CryptoPP::EC2N> * this, NameValuePairs * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::AssignFrom(CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::AssignFrom
          (DL_GroupParameters_EC<CryptoPP::EC2N> *this,NameValuePairs *param_1)

{
  long lVar1;
  ulong uVar2;
  Integer *pIVar3;
  undefined **local_200;
  void *local_1f8;
  void *local_1f0;
  undefined8 uStack_1e8;
  undefined **local_1e0 [2];
  ulong local_1d0;
  ulong uStack_1c8;
  void *local_1c0;
  undefined **local_1b0 [2];
  ulong local_1a0;
  ulong uStack_198;
  void *local_190;
  undefined **local_180 [2];
  ulong local_170;
  ulong uStack_168;
  void *local_160;
  undefined **local_150;
  PolynomialMod2 aPStack_148 [8];
  ulong local_140;
  ulong uStack_138;
  void *local_130;
  PolynomialMod2 aPStack_128 [8];
  ulong local_120;
  ulong uStack_118;
  void *local_110;
  undefined local_108;
  EC2N aEStack_100 [168];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_1f0 = (void *)0x0;
  uStack_1e8 = 0;
  local_200 = &PTR__OID_00fecd98;
  local_1f8 = (void *)0x0;
                    /* try { // try from 00ca203c to 00ca2067 has its CatchHandler @ 00ca231c */
  uVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,"GroupOID",&OID::typeinfo,&local_200);
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 00ca20ac to 00ca20b3 has its CatchHandler @ 00ca22f4 */
    EC2N::EC2N(aEStack_100);
    local_150 = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00ca20cc to 00ca20d3 has its CatchHandler @ 00ca22ec */
    PolynomialMod2::PolynomialMod2(aPStack_148);
                    /* try { // try from 00ca20d8 to 00ca20db has its CatchHandler @ 00ca22dc */
    PolynomialMod2::PolynomialMod2(aPStack_128);
    local_108 = 1;
                    /* try { // try from 00ca20e4 to 00ca20eb has its CatchHandler @ 00ca22d4 */
    Integer::Integer((Integer *)local_180);
                    /* try { // try from 00ca20ec to 00ca213f has its CatchHandler @ 00ca22fc */
    NameValuePairs::GetRequiredParameter<CryptoPP::EC2N>
              ((char *)param_1,"DL_GroupParameters_EC<EC>",(EC2N *)"Curve");
    NameValuePairs::GetRequiredParameter<CryptoPP::EC2NPoint>
              ((char *)param_1,"DL_GroupParameters_EC<EC>",(EC2NPoint *)"SubgroupGenerator");
    NameValuePairs::GetRequiredParameter<CryptoPP::Integer>
              ((char *)param_1,"DL_GroupParameters_EC<EC>",(Integer *)"SubgroupOrder");
                    /* try { // try from 00ca2140 to 00ca214f has its CatchHandler @ 00ca22f8 */
    pIVar3 = (Integer *)Integer::Zero();
    Integer::Integer((Integer *)local_1e0,pIVar3);
                    /* try { // try from 00ca2150 to 00ca2167 has its CatchHandler @ 00ca22c4 */
    NameValuePairs::GetValueWithDefault<CryptoPP::Integer>(local_1b0,param_1,"Cofactor",local_1e0);
    if (uStack_1c8 <= local_1d0) {
      local_1d0 = uStack_1c8;
    }
    local_1e0[0] = &PTR__Integer_0100c890;
    for (; local_1d0 != 0; local_1d0 = local_1d0 - 1) {
      *(undefined4 *)((long)local_1c0 + local_1d0 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca21a0 to 00ca21a3 has its CatchHandler @ 00ca22c0 */
    UnalignedDeallocate(local_1c0);
                    /* try { // try from 00ca21a4 to 00ca21bb has its CatchHandler @ 00ca22b4 */
    Initialize(this,aEStack_100,(EC2NPoint *)&local_150,(Integer *)local_180,(Integer *)local_1b0);
    local_1b0[0] = &PTR__Integer_0100c890;
    if (uStack_198 <= local_1a0) {
      local_1a0 = uStack_198;
    }
    for (; local_1a0 != 0; local_1a0 = local_1a0 - 1) {
      *(undefined4 *)((long)local_190 + local_1a0 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca21ec to 00ca21ef has its CatchHandler @ 00ca22b0 */
    UnalignedDeallocate(local_190);
    local_180[0] = &PTR__Integer_0100c890;
    if (uStack_168 <= local_170) {
      local_170 = uStack_168;
    }
    for (; local_170 != 0; local_170 = local_170 - 1) {
      *(undefined4 *)((long)local_160 + local_170 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca2220 to 00ca2223 has its CatchHandler @ 00ca22ac */
    UnalignedDeallocate(local_160);
    local_150 = &PTR__EC2NPoint_010026a8;
    if (uStack_118 <= local_120) {
      local_120 = uStack_118;
    }
    for (; local_120 != 0; local_120 = local_120 - 1) {
      *(undefined4 *)((long)local_110 + local_120 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca2254 to 00ca2257 has its CatchHandler @ 00ca22a8 */
    UnalignedDeallocate(local_110);
    if (uStack_138 <= local_140) {
      local_140 = uStack_138;
    }
    for (; local_140 != 0; local_140 = local_140 - 1) {
      *(undefined4 *)((long)local_130 + local_140 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca2280 to 00ca2283 has its CatchHandler @ 00ca22a4 */
    UnalignedDeallocate(local_130);
    EC2N::~EC2N(aEStack_100);
  }
  else {
    Initialize(this,(OID *)&local_200);
  }
  local_200 = &PTR__OID_00fecd98;
  if (local_1f8 != (void *)0x0) {
    local_200 = &PTR__OID_00fecd98;
    local_1f0 = local_1f8;
    operator_delete(local_1f8);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


