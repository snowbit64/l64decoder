// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NewEC
// Entry Point: 00c9bf6c
// Size: 700 bytes
// Signature: undefined NewEC(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::NewEC() const */

ECP * CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::NewEC(void)

{
  long lVar1;
  long in_x0;
  undefined8 *puVar2;
  int *piVar3;
  ECP *this;
  ulong uVar4;
  char *pcVar5;
  undefined **local_210 [2];
  ulong local_200;
  ulong uStack_1f8;
  void *local_1f0;
  undefined **local_1e0 [2];
  ulong local_1d0;
  ulong uStack_1c8;
  void *local_1c0;
  undefined **local_1b0 [2];
  ulong local_1a0;
  ulong uStack_198;
  void *local_190;
  undefined **local_180;
  undefined **ppuStack_178;
  long *local_168;
  undefined **local_118;
  undefined **ppuStack_110;
  long *local_100;
  undefined **local_b0;
  undefined **ppuStack_a8;
  long *local_98;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar5 = *(char **)(in_x0 + 0x20);
  puVar2 = (undefined8 *)operator_new(0x68);
                    /* try { // try from 00c9bfa4 to 00c9bfbb has its CatchHandler @ 00c9c328 */
  piVar3 = (int *)HexDecoder::GetDefaultDecodingLookupArray();
  BaseN_Decoder::BaseN_Decoder((BaseN_Decoder *)puVar2,piVar3,4,(BufferedTransformation *)0x0);
  *puVar2 = &PTR__BaseN_Decoder_0100c418;
  puVar2[1] = &PTR__HexDecoder_0100c5c8;
  StringSource::StringSource((StringSource *)&local_b0,pcVar5,true,(BufferedTransformation *)puVar2)
  ;
  pcVar5 = *(char **)(in_x0 + 0x28);
                    /* try { // try from 00c9bfe8 to 00c9bfef has its CatchHandler @ 00c9c2e4 */
  puVar2 = (undefined8 *)operator_new(0x68);
                    /* try { // try from 00c9bff4 to 00c9c00b has its CatchHandler @ 00c9c2ec */
  piVar3 = (int *)HexDecoder::GetDefaultDecodingLookupArray();
  BaseN_Decoder::BaseN_Decoder((BaseN_Decoder *)puVar2,piVar3,4,(BufferedTransformation *)0x0);
  *puVar2 = &PTR__BaseN_Decoder_0100c418;
  puVar2[1] = &PTR__HexDecoder_0100c5c8;
                    /* try { // try from 00c9c018 to 00c9c02b has its CatchHandler @ 00c9c2e4 */
  StringSource::StringSource
            ((StringSource *)&local_118,pcVar5,true,(BufferedTransformation *)puVar2);
  pcVar5 = *(char **)(in_x0 + 0x30);
                    /* try { // try from 00c9c030 to 00c9c037 has its CatchHandler @ 00c9c2a4 */
  puVar2 = (undefined8 *)operator_new(0x68);
                    /* try { // try from 00c9c03c to 00c9c053 has its CatchHandler @ 00c9c2ac */
  piVar3 = (int *)HexDecoder::GetDefaultDecodingLookupArray();
  BaseN_Decoder::BaseN_Decoder((BaseN_Decoder *)puVar2,piVar3,4,(BufferedTransformation *)0x0);
  *puVar2 = &PTR__BaseN_Decoder_0100c418;
  puVar2[1] = &PTR__HexDecoder_0100c5c8;
                    /* try { // try from 00c9c060 to 00c9c073 has its CatchHandler @ 00c9c2a4 */
  StringSource::StringSource
            ((StringSource *)&local_180,pcVar5,true,(BufferedTransformation *)puVar2);
                    /* try { // try from 00c9c074 to 00c9c07b has its CatchHandler @ 00c9c244 */
  this = (ECP *)operator_new(0xe8);
                    /* try { // try from 00c9c080 to 00c9c09f has its CatchHandler @ 00c9c26c */
  uVar4 = BufferedTransformation::MaxRetrievable();
  Integer::Integer((Integer *)local_1b0,(BufferedTransformation *)&local_b0,uVar4,0,1);
                    /* try { // try from 00c9c0a0 to 00c9c0bf has its CatchHandler @ 00c9c25c */
  uVar4 = BufferedTransformation::MaxRetrievable();
  Integer::Integer((Integer *)local_1e0,(BufferedTransformation *)&local_118,uVar4,0,1);
                    /* try { // try from 00c9c0c0 to 00c9c0df has its CatchHandler @ 00c9c24c */
  uVar4 = BufferedTransformation::MaxRetrievable();
  Integer::Integer((Integer *)local_210,(BufferedTransformation *)&local_180,uVar4,0,1);
                    /* try { // try from 00c9c0e0 to 00c9c0f3 has its CatchHandler @ 00c9c234 */
  ECP::ECP(this,(Integer *)local_1b0,(Integer *)local_1e0,(Integer *)local_210);
  if (uStack_1f8 <= local_200) {
    local_200 = uStack_1f8;
  }
  local_210[0] = &PTR__Integer_0100c890;
  for (; local_200 != 0; local_200 = local_200 - 1) {
    *(undefined4 *)((long)local_1f0 + local_200 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9c12c to 00c9c12f has its CatchHandler @ 00c9c230 */
  UnalignedDeallocate(local_1f0);
  local_1e0[0] = &PTR__Integer_0100c890;
  if (uStack_1c8 <= local_1d0) {
    local_1d0 = uStack_1c8;
  }
  for (; local_1d0 != 0; local_1d0 = local_1d0 - 1) {
    *(undefined4 *)((long)local_1c0 + local_1d0 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9c160 to 00c9c163 has its CatchHandler @ 00c9c22c */
  UnalignedDeallocate(local_1c0);
  local_1b0[0] = &PTR__Integer_0100c890;
  if (uStack_198 <= local_1a0) {
    local_1a0 = uStack_198;
  }
  for (; local_1a0 != 0; local_1a0 = local_1a0 - 1) {
    *(undefined4 *)((long)local_190 + local_1a0 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9c194 to 00c9c197 has its CatchHandler @ 00c9c228 */
  UnalignedDeallocate(local_190);
  local_118 = &PTR__Filter_01005f60;
  ppuStack_110 = &PTR__Filter_01006108;
  local_180 = local_118;
  ppuStack_178 = ppuStack_110;
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 8))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 8))();
  }
  local_b0 = &PTR__Filter_01005f60;
  ppuStack_a8 = &PTR__Filter_01006108;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}


