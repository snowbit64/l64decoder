// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeviceMapping
// Entry Point: 00b1e758
// Size: 1072 bytes
// Signature: undefined __thiscall DeviceMapping(DeviceMapping * this, DeviceMapping * param_1)


/* DeviceMappingManager::DeviceMapping::DeviceMapping(DeviceMappingManager::DeviceMapping const&) */

void __thiscall
DeviceMappingManager::DeviceMapping::DeviceMapping(DeviceMapping *this,DeviceMapping *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x10));
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x40) = uVar4;
  *(undefined8 *)(this + 0x38) = uVar2;
  *(undefined8 *)(this + 0x30) = uVar6;
  *(undefined8 *)(this + 0x28) = uVar5;
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
                    /* try { // try from 00b1e7c0 to 00b1e913 has its CatchHandler @ 00b1ed0c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x58));
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x70) = uVar6;
  *(undefined8 *)(this + 0x88) = uVar5;
  *(undefined8 *)(this + 0x80) = uVar4;
  *(undefined8 *)(this + 0x90) = uVar2;
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_1 + 0x98);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xa0));
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  uVar2 = *(undefined8 *)(param_1 + 200);
  uVar6 = *(undefined8 *)(param_1 + 0xc0);
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(this + 0xd0) = uVar4;
  *(undefined8 *)(this + 200) = uVar2;
  *(undefined8 *)(this + 0xc0) = uVar6;
  *(undefined8 *)(this + 0xb8) = uVar5;
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xe8));
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  uVar5 = *(undefined8 *)(param_1 + 0x118);
  uVar4 = *(undefined8 *)(param_1 + 0x110);
  uVar2 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(this + 0x108) = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(this + 0x100) = uVar6;
  *(undefined8 *)(this + 0x118) = uVar5;
  *(undefined8 *)(this + 0x110) = uVar4;
  *(undefined8 *)(this + 0x120) = uVar2;
  *(undefined8 *)(this + 0x128) = *(undefined8 *)(param_1 + 0x128);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x130));
  uVar4 = *(undefined8 *)(param_1 + 0x160);
  uVar2 = *(undefined8 *)(param_1 + 0x158);
  uVar6 = *(undefined8 *)(param_1 + 0x150);
  uVar5 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(this + 0x168) = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(this + 0x160) = uVar4;
  *(undefined8 *)(this + 0x158) = uVar2;
  *(undefined8 *)(this + 0x150) = uVar6;
  *(undefined8 *)(this + 0x148) = uVar5;
  *(undefined8 *)(this + 0x170) = *(undefined8 *)(param_1 + 0x170);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x178));
  uVar6 = *(undefined8 *)(param_1 + 400);
  uVar5 = *(undefined8 *)(param_1 + 0x1a8);
  uVar4 = *(undefined8 *)(param_1 + 0x1a0);
  uVar2 = *(undefined8 *)(param_1 + 0x1b0);
  *(undefined8 *)(this + 0x198) = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(this + 400) = uVar6;
  *(undefined8 *)(this + 0x1a8) = uVar5;
  *(undefined8 *)(this + 0x1a0) = uVar4;
  *(undefined8 *)(this + 0x1b0) = uVar2;
  *(undefined8 *)(this + 0x1b8) = *(undefined8 *)(param_1 + 0x1b8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x1c0));
  uVar4 = *(undefined8 *)(param_1 + 0x1f0);
  uVar2 = *(undefined8 *)(param_1 + 0x1e8);
  uVar6 = *(undefined8 *)(param_1 + 0x1e0);
  uVar5 = *(undefined8 *)(param_1 + 0x1d8);
  *(undefined8 *)(this + 0x1f8) = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(this + 0x1f0) = uVar4;
  *(undefined8 *)(this + 0x1e8) = uVar2;
  *(undefined8 *)(this + 0x1e0) = uVar6;
  *(undefined8 *)(this + 0x1d8) = uVar5;
  *(undefined8 *)(this + 0x200) = *(undefined8 *)(param_1 + 0x200);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x208));
  uVar6 = *(undefined8 *)(param_1 + 0x220);
  uVar5 = *(undefined8 *)(param_1 + 0x238);
  uVar4 = *(undefined8 *)(param_1 + 0x230);
  uVar2 = *(undefined8 *)(param_1 + 0x240);
  *(undefined8 *)(this + 0x228) = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(this + 0x220) = uVar6;
  *(undefined8 *)(this + 0x238) = uVar5;
  *(undefined8 *)(this + 0x230) = uVar4;
  *(undefined8 *)(this + 0x240) = uVar2;
  *(undefined8 *)(this + 0x248) = *(undefined8 *)(param_1 + 0x248);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x250));
  lVar3 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x280);
  uVar2 = *(undefined8 *)(param_1 + 0x278);
  uVar6 = *(undefined8 *)(param_1 + 0x270);
  uVar5 = *(undefined8 *)(param_1 + 0x268);
  *(undefined8 *)(this + 0x288) = *(undefined8 *)(param_1 + 0x288);
  *(undefined8 *)(this + 0x280) = uVar4;
  *(undefined8 *)(this + 0x278) = uVar2;
  *(undefined8 *)(this + 0x270) = uVar6;
  *(undefined8 *)(this + 0x268) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x2f0);
  uVar4 = *(undefined8 *)(param_1 + 0x308);
  uVar2 = *(undefined8 *)(param_1 + 0x300);
  uVar7 = *(undefined8 *)(param_1 + 0x2d8);
  uVar6 = *(undefined8 *)(param_1 + 0x2d0);
  uVar9 = *(undefined8 *)(param_1 + 0x2e8);
  uVar8 = *(undefined8 *)(param_1 + 0x2e0);
  *(undefined8 *)(this + 0x2f8) = *(undefined8 *)(param_1 + 0x2f8);
  *(undefined8 *)(this + 0x2f0) = uVar5;
  *(undefined8 *)(this + 0x308) = uVar4;
  *(undefined8 *)(this + 0x300) = uVar2;
  *(undefined8 *)(this + 0x2d8) = uVar7;
  *(undefined8 *)(this + 0x2d0) = uVar6;
  *(undefined8 *)(this + 0x2e8) = uVar9;
  *(undefined8 *)(this + 0x2e0) = uVar8;
  uVar2 = *(undefined8 *)(param_1 + 0x2b0);
  uVar5 = *(undefined8 *)(param_1 + 0x2c8);
  uVar4 = *(undefined8 *)(param_1 + 0x2c0);
  uVar7 = *(undefined8 *)(param_1 + 0x298);
  uVar6 = *(undefined8 *)(param_1 + 0x290);
  uVar9 = *(undefined8 *)(param_1 + 0x2a8);
  uVar8 = *(undefined8 *)(param_1 + 0x2a0);
  *(undefined8 *)(this + 0x2b8) = *(undefined8 *)(param_1 + 0x2b8);
  *(undefined8 *)(this + 0x2b0) = uVar2;
  *(undefined8 *)(this + 0x2c8) = uVar5;
  *(undefined8 *)(this + 0x2c0) = uVar4;
  *(undefined8 *)(this + 0x298) = uVar7;
  *(undefined8 *)(this + 0x290) = uVar6;
  *(undefined8 *)(this + 0x2a8) = uVar9;
  *(undefined8 *)(this + 0x2a0) = uVar8;
  do {
                    /* try { // try from 00b1e970 to 00b1e973 has its CatchHandler @ 00b1ede4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(this + lVar3 + 0x310));
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0x300);
  lVar3 = 0;
  do {
                    /* try { // try from 00b1e994 to 00b1e997 has its CatchHandler @ 00b1ed90 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(this + lVar3 + 0x610));
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0x300);
                    /* try { // try from 00b1e9ac to 00b1e9b3 has its CatchHandler @ 00b1ed04 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x910));
                    /* try { // try from 00b1e9bc to 00b1ea83 has its CatchHandler @ 00b1ed64 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x928));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x940));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x958));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x970));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x988));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x9a0));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x9b8));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x9d0));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x9e8));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xa00));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xa18));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xa30));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xa48));
                    /* try { // try from 00b1ea8c to 00b1ea93 has its CatchHandler @ 00b1eb88 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xa60));
                    /* try { // try from 00b1ea9c to 00b1eb63 has its CatchHandler @ 00b1ed38 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xa78));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xa90));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xaa8));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xac0));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xad8));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xaf0));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xb08));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xb20));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xb38));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xb50));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xb68));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xb80));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xb98));
  uVar1 = *(undefined4 *)(param_1 + 0xbb0);
  this[0xbb4] = param_1[0xbb4];
  *(undefined4 *)(this + 0xbb0) = uVar1;
  return;
}


