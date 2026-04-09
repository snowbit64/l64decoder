// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GiantsAdsProvider
// Entry Point: 00af1dc4
// Size: 796 bytes
// Signature: undefined __thiscall GiantsAdsProvider(GiantsAdsProvider * this, uint param_1, char * param_2)


/* GiantsAdsProvider::GiantsAdsProvider(unsigned int, char const*) */

void __thiscall
GiantsAdsProvider::GiantsAdsProvider(GiantsAdsProvider *this,uint param_1,char *param_2)

{
  long lVar1;
  size_t sVar2;
  undefined8 *puVar3;
  long lVar4;
  AESCipher *this_00;
  undefined8 uVar5;
  Thread *this_01;
  void *__dest;
  GiantsAdsProvider *pGVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 local_80;
  size_t local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_2);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar2 << 1));
    if (sVar2 != 0) goto LAB_00af1e50;
  }
  else {
    uVar7 = sVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar7);
    local_80 = uVar7 | 1;
    local_78 = sVar2;
    local_70 = __dest;
LAB_00af1e50:
    memcpy(__dest,param_2,sVar2);
  }
  *(undefined *)((long)__dest + sVar2) = 0;
                    /* try { // try from 00af1e64 to 00af1e73 has its CatchHandler @ 00af2108 */
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&local_80);
  uVar9 = puVar3[1];
  uVar5 = *puVar3;
  *(undefined8 *)(this + 0x10) = puVar3[2];
  *(undefined8 *)(this + 8) = uVar9;
  *(undefined8 *)this = uVar5;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  sVar2 = strlen(param_2);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 00af20d4 to 00af20db has its CatchHandler @ 00af211c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    pGVar6 = this + 0x19;
    this[0x18] = SUB41((int)sVar2 << 1,0);
    if (sVar2 == 0) goto LAB_00af1f00;
  }
  else {
    uVar7 = sVar2 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00af1ed8 to 00af1edf has its CatchHandler @ 00af211c */
    pGVar6 = (GiantsAdsProvider *)operator_new(uVar7);
    *(size_t *)(this + 0x20) = sVar2;
    *(GiantsAdsProvider **)(this + 0x28) = pGVar6;
    *(ulong *)(this + 0x18) = uVar7 | 1;
  }
  memcpy(pGVar6,param_2,sVar2);
LAB_00af1f00:
  pGVar6[sVar2] = (GiantsAdsProvider)0x0;
  *(uint *)(this + 0x30) = param_1;
                    /* try { // try from 00af1f0c to 00af1f1b has its CatchHandler @ 00af2100 */
  Event::Event((Event *)(this + 0x40),false,false);
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  this[0xd0] = (GiantsAdsProvider)0x0;
  *(undefined8 *)(this + 0xd8) = 0;
                    /* try { // try from 00af1f3c to 00af1fbb has its CatchHandler @ 00af2124 */
  lVar4 = Watch::getCurrentTicks();
  *(ulong *)(this + 0xf0) =
       ((ulong)(this + lVar4) ^ 0x12345678deadbeef) * 0x5851f42d4c957f2d + -0x2152ecc841109800;
  *(undefined8 *)(this + 0xf8) = 0x1f400002710;
  *(undefined8 *)(this + 0x100) = 0x3f8000003c75c28f;
  uVar8 = MathUtil::degreeToRadian(55.0);
  *(undefined4 *)(this + 0x108) = uVar8;
  *(undefined4 *)(this + 0x10c) = 20000;
  Mutex::Mutex((Mutex *)(this + 0x110),true);
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined2 *)(this + 0x150) = 0;
                    /* try { // try from 00af1fd0 to 00af1fdb has its CatchHandler @ 00af20f8 */
  Mutex::Mutex((Mutex *)(this + 0x160),true);
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined2 *)(this + 0x1b8) = 0;
                    /* try { // try from 00af1ff4 to 00af1ffb has its CatchHandler @ 00af212c */
  this_00 = (AESCipher *)operator_new(0x48);
                    /* try { // try from 00af2000 to 00af200f has its CatchHandler @ 00af20e4 */
  AESCipher::AESCipher(this_00,0x80,s_key);
  *(AESCipher **)(this + 0x198) = this_00;
  pGVar6 = *(GiantsAdsProvider **)(this + 0x10);
  if (((byte)*this & 1) == 0) {
    pGVar6 = this + 1;
  }
                    /* try { // try from 00af2024 to 00af2057 has its CatchHandler @ 00af212c */
  NativeFileUtil::createAllFolders((char *)pGVar6,false);
  loadPendingImpressions();
  if (*(long *)(this + 0x1a0) != *(long *)(this + 0x1a8)) {
    uVar5 = Watch::getCurrentTicks();
    *(undefined8 *)(this + 0x1c0) = uVar5;
    this[0x1b9] = (GiantsAdsProvider)0x1;
  }
  this_01 = (Thread *)operator_new(0x48);
                    /* try { // try from 00af205c to 00af205f has its CatchHandler @ 00af20e0 */
  Thread::Thread(this_01);
  *(Thread **)(this + 0x38) = this_01;
                    /* try { // try from 00af2064 to 00af209b has its CatchHandler @ 00af212c */
  Thread::start(this_01,staticUpdateAdPlacementsThreadFunction,this,0xffffffff,
                "GIANTS GiantsAdsProvider Thread",3,0x80000);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0xd8));
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


