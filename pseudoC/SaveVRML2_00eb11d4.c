// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SaveVRML2
// Entry Point: 00eb11d4
// Size: 516 bytes
// Signature: undefined __thiscall SaveVRML2(Mesh * this, basic_string * param_1)


/* VHACD::Mesh::SaveVRML2(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

uint __thiscall VHACD::Mesh::SaveVRML2(Mesh *this,basic_string *param_1)

{
  byte bVar1;
  long lVar2;
  FILE *__stream;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *__filename;
  undefined auVar6 [16];
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined **local_1b0;
  long local_1a8 [15];
  FILE *local_130;
  undefined4 local_110;
  undefined **local_100 [17];
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  bVar1 = *(byte *)param_1;
  local_1b0 = (undefined **)0xfdb3c8;
  local_100[0] = (undefined **)0xfdb3f0;
  __filename = *(char **)(param_1 + 4);
  std::__ndk1::ios_base::init(local_100);
  local_78 = 0;
  local_70 = 0xffffffff;
  local_1b0 = &PTR__basic_ofstream_00fdb358;
  local_100[0] = &PTR__basic_ofstream_00fdb380;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::basic_filebuf();
  if (local_130 == (FILE *)0x0) {
    if ((bVar1 & 1) == 0) {
      __filename = (char *)((long)param_1 + 1);
    }
    local_130 = fopen(__filename,"we");
    if (local_130 == (FILE *)0x0) goto LAB_00eb1270;
    local_110 = 0x10;
  }
  else {
LAB_00eb1270:
    std::__ndk1::ios_base::clear((int)&local_1b0 + (int)local_1b0[-3]);
    if (local_130 == (FILE *)0x0) {
      uVar3 = 0;
      goto LAB_00eb1364;
    }
  }
  auVar6 = NEON_fmov(0x3fe0000000000000,8);
  local_1e0 = 0x3fe0000000000000;
  uStack_1d8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  uStack_208 = auVar6._8_8_;
  local_210 = auVar6._0_8_;
  uStack_1f8 = 0x3fd999999999999a;
  local_200 = 0x3fe0000000000000;
  uStack_1b8 = 0;
  local_1c0 = 0x3fd999999999999a;
  uStack_1f0 = local_210;
  uStack_1e8 = uStack_208;
  uVar3 = SaveVRML2(this,(basic_ofstream *)&local_1b0,(Material *)&local_210);
  __stream = local_130;
  if ((uVar3 & 1) != 0) {
    if (local_130 != (FILE *)0x0) {
      uVar4 = (**(code **)(local_1a8[0] + 0x30))(local_1a8);
      uVar5 = fclose(__stream);
      local_130 = (FILE *)0x0;
      (**(code **)(local_1a8[0] + 0x18))(local_1a8,0,0);
      if ((uVar5 | uVar4) == 0) goto LAB_00eb1364;
    }
    std::__ndk1::ios_base::clear((int)&local_1b0 + (int)local_1b0[-3]);
  }
LAB_00eb1364:
  local_1b0 = &PTR__basic_ofstream_00fdb358;
  local_100[0] = &PTR__basic_ofstream_00fdb380;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)local_1a8);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1b0);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


