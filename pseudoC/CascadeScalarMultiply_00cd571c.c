// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CascadeScalarMultiply
// Entry Point: 00cd571c
// Size: 620 bytes
// Signature: undefined __cdecl CascadeScalarMultiply(ECPPoint * param_1, Integer * param_2, ECPPoint * param_3, Integer * param_4)


/* CryptoPP::ECP::CascadeScalarMultiply(CryptoPP::ECPPoint const&, CryptoPP::Integer const&,
   CryptoPP::ECPPoint const&, CryptoPP::Integer const&) const */

void CryptoPP::ECP::CascadeScalarMultiply
               (ECPPoint *param_1,Integer *param_2,ECPPoint *param_3,Integer *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined **local_290;
  undefined **local_288;
  ulong local_278;
  ulong uStack_270;
  void *local_268;
  undefined **local_258;
  ulong local_248;
  ulong uStack_240;
  void *local_238;
  undefined **local_220;
  undefined **local_218;
  ulong local_208;
  ulong uStack_200;
  void *local_1f8;
  undefined **local_1e8;
  ulong local_1d8;
  ulong uStack_1d0;
  void *local_1c8;
  undefined **local_1b0;
  undefined **local_1a8;
  ulong local_198;
  ulong uStack_190;
  void *local_188;
  undefined **local_178;
  ulong local_168;
  ulong uStack_160;
  void *local_158;
  ECP aEStack_140 [16];
  undefined8 local_130;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 200))();
  if ((uVar2 & 1) == 0) {
    ECP(aEStack_140,(ECP *)param_1,true);
                    /* try { // try from 00cd57a4 to 00cd57b3 has its CatchHandler @ 00cd59d0 */
    FUN_00cd496c(&local_220,local_130,param_2);
                    /* try { // try from 00cd57b4 to 00cd57c3 has its CatchHandler @ 00cd59c0 */
    FUN_00cd496c(&local_290,local_130,param_4);
                    /* try { // try from 00cd57c4 to 00cd57df has its CatchHandler @ 00cd59b0 */
    CascadeScalarMultiply
              ((ECPPoint *)aEStack_140,(Integer *)&local_220,param_3,(Integer *)&local_290);
                    /* try { // try from 00cd57e0 to 00cd57ef has its CatchHandler @ 00cd59a0 */
    FUN_00cd4b28();
    local_1b0 = &PTR__ECPPoint_00fe9fd8;
    local_178 = &PTR__Integer_0100c890;
    if (uStack_160 <= local_168) {
      local_168 = uStack_160;
    }
    for (; local_168 != 0; local_168 = local_168 - 1) {
      *(undefined4 *)((long)local_158 + local_168 * 4 + -4) = 0;
    }
                    /* try { // try from 00cd5838 to 00cd583b has its CatchHandler @ 00cd599c */
    UnalignedDeallocate(local_158);
    local_1a8 = &PTR__Integer_0100c890;
    if (uStack_190 <= local_198) {
      local_198 = uStack_190;
    }
    for (; local_198 != 0; local_198 = local_198 - 1) {
      *(undefined4 *)((long)local_188 + local_198 * 4 + -4) = 0;
    }
                    /* try { // try from 00cd586c to 00cd586f has its CatchHandler @ 00cd5998 */
    UnalignedDeallocate(local_188);
    local_290 = &PTR__ECPPoint_00fe9fd8;
    local_258 = &PTR__Integer_0100c890;
    if (uStack_240 <= local_248) {
      local_248 = uStack_240;
    }
    for (; local_248 != 0; local_248 = local_248 - 1) {
      *(undefined4 *)((long)local_238 + local_248 * 4 + -4) = 0;
    }
                    /* try { // try from 00cd58a8 to 00cd58ab has its CatchHandler @ 00cd5994 */
    UnalignedDeallocate(local_238);
    local_288 = &PTR__Integer_0100c890;
    if (uStack_270 <= local_278) {
      local_278 = uStack_270;
    }
    for (; local_278 != 0; local_278 = local_278 - 1) {
      *(undefined4 *)((long)local_268 + local_278 * 4 + -4) = 0;
    }
                    /* try { // try from 00cd58dc to 00cd58df has its CatchHandler @ 00cd5990 */
    UnalignedDeallocate(local_268);
    local_220 = &PTR__ECPPoint_00fe9fd8;
    local_1e8 = &PTR__Integer_0100c890;
    if (uStack_1d0 <= local_1d8) {
      local_1d8 = uStack_1d0;
    }
    for (; local_1d8 != 0; local_1d8 = local_1d8 - 1) {
      *(undefined4 *)((long)local_1c8 + local_1d8 * 4 + -4) = 0;
    }
                    /* try { // try from 00cd5918 to 00cd591b has its CatchHandler @ 00cd598c */
    UnalignedDeallocate(local_1c8);
    local_218 = &PTR__Integer_0100c890;
    if (uStack_200 <= local_208) {
      local_208 = uStack_200;
    }
    for (; local_208 != 0; local_208 = local_208 - 1) {
      *(undefined4 *)((long)local_1f8 + local_208 * 4 + -4) = 0;
    }
                    /* try { // try from 00cd594c to 00cd594f has its CatchHandler @ 00cd5988 */
    UnalignedDeallocate(local_1f8);
    ~ECP(aEStack_140);
  }
  else {
    AbstractGroup<CryptoPP::ECPPoint>::CascadeScalarMultiply(param_1,param_2,param_3,param_4);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


