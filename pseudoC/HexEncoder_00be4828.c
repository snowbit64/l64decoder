// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HexEncoder
// Entry Point: 00be4828
// Size: 680 bytes
// Signature: undefined __thiscall HexEncoder(HexEncoder * this, BufferedTransformation * param_1, bool param_2, int param_3, basic_string * param_4, basic_string * param_5)


/* CryptoPP::HexEncoder::HexEncoder(CryptoPP::BufferedTransformation*, bool, int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
CryptoPP::HexEncoder::HexEncoder
          (HexEncoder *this,BufferedTransformation *param_1,bool param_2,int param_3,
          basic_string *param_4,basic_string *param_5)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  undefined8 *this_00;
  undefined8 *this_01;
  long *plVar5;
  AlgorithmParameters *pAVar6;
  ConstByteArrayParameter local_e8 [8];
  long local_e0;
  ulong uStack_d8;
  ulong local_c8;
  ulong local_c0;
  void *local_b8;
  ConstByteArrayParameter local_b0 [8];
  long local_a8;
  ulong uStack_a0;
  ulong local_90;
  ulong local_88;
  void *local_80;
  char local_74 [4];
  undefined **local_70;
  long *local_68;
  char local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_74[0] = param_2;
  this_00 = (undefined8 *)operator_new(0x70);
                    /* try { // try from 00be4874 to 00be487b has its CatchHandler @ 00be4bcc */
  this_01 = (undefined8 *)operator_new(0x80);
                    /* try { // try from 00be4880 to 00be4887 has its CatchHandler @ 00be4b70 */
  Filter::Filter((Filter *)this_01,(BufferedTransformation *)0x0);
  this_01[8] = 0;
  this_01[9] = 0;
  this_01[7] = 0xffffffffffffffff;
  this_01[0xb] = 0xffffffffffffffff;
  this_01[0xd] = 0;
  this_01[0xc] = 0;
  this_01[0xf] = 0;
  this_01[0xe] = 0;
  *this_01 = &PTR__Grouper_00fef2b8;
  this_01[1] = &PTR__Grouper_00fef460;
                    /* try { // try from 00be48b8 to 00be48c3 has its CatchHandler @ 00be4b2c */
  Filter::Detach((Filter *)this_01,(BufferedTransformation *)0x0);
                    /* try { // try from 00be48c4 to 00be48cf has its CatchHandler @ 00be4bcc */
  Filter::Filter((Filter *)this_00,(BufferedTransformation *)0x0);
  this_00[7] = 0;
  this_00[8] = 0;
  this_00[6] = 0;
  *(undefined4 *)(this_00 + 9) = 0;
  this_00[0xc] = 0;
  this_00[0xd] = 0;
  this_00[0xb] = 0xffffffffffffffff;
  *this_00 = &PTR__BaseN_Encoder_00feeeb0;
  this_00[1] = &PTR__BaseN_Encoder_00fef060;
                    /* try { // try from 00be4900 to 00be490b has its CatchHandler @ 00be4af4 */
  Filter::Detach((Filter *)this_00,(BufferedTransformation *)this_01);
  bVar4 = false;
  ProxyFilter::ProxyFilter((ProxyFilter *)this,(BufferedTransformation *)this_00,0,0,param_1);
  *(undefined ***)this = &PTR__ProxyFilter_0100c1a8;
  *(undefined ***)(this + 8) = &PTR__HexEncoder_0100c3b8;
                    /* try { // try from 00be4938 to 00be494f has its CatchHandler @ 00be4aec */
  MakeParameters<bool>((CryptoPP *)"Uppercase",local_74,(bool *)0x1,bVar4);
                    /* try { // try from 00be4954 to 00be495b has its CatchHandler @ 00be4ae4 */
  plVar5 = (long *)operator_new(0x28);
  *(int *)(plVar5 + 4) = param_3;
  *(char *)(plVar5 + 2) = local_60;
  *(undefined *)((long)plVar5 + 0x11) = 0;
  plVar5[3] = (long)local_68;
  bVar1 = *(byte *)param_4;
  *plVar5 = (long)&PTR__AlgorithmParametersBase_00ff0ef0;
  plVar5[1] = (long)"GroupSize";
  local_a8 = *(long *)(param_4 + 4);
  bVar4 = (bVar1 & 1) != 0;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_90 = 0xffffffffffffffff;
  uStack_a0 = (ulong)(bVar1 >> 1);
  if (bVar4) {
    uStack_a0 = *(ulong *)(param_4 + 2);
  }
  local_b0[0] = (ConstByteArrayParameter)0x0;
  if (!bVar4) {
    local_a8 = (long)param_4 + 1;
  }
                    /* try { // try from 00be49c0 to 00be49d3 has its CatchHandler @ 00be4adc */
  local_68 = plVar5;
  pAVar6 = AlgorithmParameters::operator()
                     ((AlgorithmParameters *)&local_70,"Separator",local_b0,local_60 != '\0');
  uStack_d8 = *(ulong *)(param_5 + 2);
  local_e0 = *(long *)(param_5 + 4);
  local_c0 = 0;
  local_b8 = (void *)0x0;
  local_c8 = 0xffffffffffffffff;
  local_e8[0] = (ConstByteArrayParameter)0x0;
  if ((*(byte *)param_5 & 1) == 0) {
    local_e0 = (long)param_5 + 1;
    uStack_d8 = (ulong)(*(byte *)param_5 >> 1);
  }
                    /* try { // try from 00be4a00 to 00be4a23 has its CatchHandler @ 00be4b80 */
  pAVar6 = AlgorithmParameters::operator()
                     ((AlgorithmParameters *)pAVar6,"Terminator",local_e8,*(bool *)(pAVar6 + 4));
  (**(code **)(*(long *)this + 0x58))(this,pAVar6);
  uVar3 = local_c8;
  if (local_c0 <= local_c8) {
    uVar3 = local_c0;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined *)((long)local_b8 + (uVar3 - 1)) = 0;
  }
                    /* try { // try from 00be4a4c to 00be4a4f has its CatchHandler @ 00be4ad8 */
  UnalignedDeallocate(local_b8);
  uVar3 = local_90;
  if (local_88 <= local_90) {
    uVar3 = local_88;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined *)((long)local_80 + (uVar3 - 1)) = 0;
  }
                    /* try { // try from 00be4a78 to 00be4a7b has its CatchHandler @ 00be4ad4 */
  UnalignedDeallocate(local_80);
  local_70 = &PTR__AlgorithmParameters_00feeb08;
  if (local_68 != (long *)0x0) {
                    /* try { // try from 00be4a9c to 00be4a9f has its CatchHandler @ 00be4ad0 */
    (**(code **)(*local_68 + 8))();
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


