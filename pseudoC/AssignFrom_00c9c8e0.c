// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignFrom
// Entry Point: 00c9c8e0
// Size: 740 bytes
// Signature: undefined __thiscall AssignFrom(DL_GroupParameters_EC<CryptoPP::ECP> * this, NameValuePairs * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::AssignFrom(CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::AssignFrom
          (DL_GroupParameters_EC<CryptoPP::ECP> *this,NameValuePairs *param_1)

{
  long lVar1;
  ulong uVar2;
  Integer *pIVar3;
  undefined **local_260;
  void *local_258;
  void *local_250;
  undefined8 uStack_248;
  undefined **local_240 [2];
  ulong local_230;
  ulong uStack_228;
  void *local_220;
  undefined **local_210 [2];
  ulong local_200;
  ulong uStack_1f8;
  void *local_1f0;
  undefined **local_1e0 [2];
  ulong local_1d0;
  ulong uStack_1c8;
  void *local_1c0;
  undefined **local_1b0;
  undefined **local_1a8 [2];
  ulong local_198;
  ulong uStack_190;
  void *local_188;
  undefined **local_178 [2];
  ulong local_168;
  ulong uStack_160;
  void *local_158;
  undefined local_148;
  ECP aEStack_140 [232];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_250 = (void *)0x0;
  uStack_248 = 0;
  local_260 = &PTR__OID_00fecd98;
  local_258 = (void *)0x0;
                    /* try { // try from 00c9c92c to 00c9c957 has its CatchHandler @ 00c9cc18 */
  uVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,"GroupOID",&OID::typeinfo,&local_260);
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 00c9c99c to 00c9c9a3 has its CatchHandler @ 00c9cc04 */
    ECP::ECP(aEStack_140);
    local_1b0 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00c9c9bc to 00c9c9c3 has its CatchHandler @ 00c9cbfc */
    Integer::Integer((Integer *)local_1a8);
                    /* try { // try from 00c9c9c8 to 00c9c9cb has its CatchHandler @ 00c9cbec */
    Integer::Integer((Integer *)local_178);
    local_148 = 1;
                    /* try { // try from 00c9c9d4 to 00c9c9db has its CatchHandler @ 00c9cbe4 */
    Integer::Integer((Integer *)local_1e0);
                    /* try { // try from 00c9c9dc to 00c9ca2f has its CatchHandler @ 00c9cc10 */
    NameValuePairs::GetRequiredParameter<CryptoPP::ECP>
              ((char *)param_1,"DL_GroupParameters_EC<EC>",(ECP *)"Curve");
    NameValuePairs::GetRequiredParameter<CryptoPP::ECPPoint>
              ((char *)param_1,"DL_GroupParameters_EC<EC>",(ECPPoint *)"SubgroupGenerator");
    NameValuePairs::GetRequiredParameter<CryptoPP::Integer>
              ((char *)param_1,"DL_GroupParameters_EC<EC>",(Integer *)"SubgroupOrder");
                    /* try { // try from 00c9ca30 to 00c9ca3f has its CatchHandler @ 00c9cc08 */
    pIVar3 = (Integer *)Integer::Zero();
    Integer::Integer((Integer *)local_240,pIVar3);
                    /* try { // try from 00c9ca40 to 00c9ca57 has its CatchHandler @ 00c9cbd8 */
    NameValuePairs::GetValueWithDefault<CryptoPP::Integer>(local_210,param_1,"Cofactor",local_240);
    if (uStack_228 <= local_230) {
      local_230 = uStack_228;
    }
    local_240[0] = &PTR__Integer_0100c890;
    for (; local_230 != 0; local_230 = local_230 - 1) {
      *(undefined4 *)((long)local_220 + local_230 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9ca90 to 00c9ca93 has its CatchHandler @ 00c9cbd4 */
    UnalignedDeallocate(local_220);
                    /* try { // try from 00c9ca98 to 00c9cacb has its CatchHandler @ 00c9cc20 */
    EcPrecomputation<CryptoPP::ECP>::SetCurve
              ((EcPrecomputation<CryptoPP::ECP> *)(this + 0x10),aEStack_140);
    (**(code **)(*(long *)this + 0x70))(this,&local_1b0);
    Integer::operator=((Integer *)(this + 0x110),(Integer *)local_1e0);
    Integer::operator=((Integer *)(this + 0x140),(Integer *)local_210);
    local_210[0] = &PTR__Integer_0100c890;
    if (uStack_1f8 <= local_200) {
      local_200 = uStack_1f8;
    }
    for (; local_200 != 0; local_200 = local_200 - 1) {
      *(undefined4 *)((long)local_1f0 + local_200 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9cafc to 00c9caff has its CatchHandler @ 00c9cbd0 */
    UnalignedDeallocate(local_1f0);
    local_1e0[0] = &PTR__Integer_0100c890;
    if (uStack_1c8 <= local_1d0) {
      local_1d0 = uStack_1c8;
    }
    for (; local_1d0 != 0; local_1d0 = local_1d0 - 1) {
      *(undefined4 *)((long)local_1c0 + local_1d0 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9cb30 to 00c9cb33 has its CatchHandler @ 00c9cbcc */
    UnalignedDeallocate(local_1c0);
    local_1b0 = &PTR__ECPPoint_00fe9fd8;
    local_178[0] = &PTR__Integer_0100c890;
    if (uStack_160 <= local_168) {
      local_168 = uStack_160;
    }
    for (; local_168 != 0; local_168 = local_168 - 1) {
      *(undefined4 *)((long)local_158 + local_168 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9cb6c to 00c9cb6f has its CatchHandler @ 00c9cbc8 */
    UnalignedDeallocate(local_158);
    local_1a8[0] = &PTR__Integer_0100c890;
    if (uStack_190 <= local_198) {
      local_198 = uStack_190;
    }
    for (; local_198 != 0; local_198 = local_198 - 1) {
      *(undefined4 *)((long)local_188 + local_198 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9cba0 to 00c9cba3 has its CatchHandler @ 00c9cbc4 */
    UnalignedDeallocate(local_188);
    ECP::~ECP(aEStack_140);
  }
  else {
    Initialize(this,(OID *)&local_260);
  }
  local_260 = &PTR__OID_00fecd98;
  if (local_258 != (void *)0x0) {
    local_260 = &PTR__OID_00fecd98;
    local_250 = local_258;
    operator_delete(local_258);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


